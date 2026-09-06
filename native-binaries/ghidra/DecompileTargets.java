// Ghidra 定向反编译脚本 v2 —— 只反编译 sky_linux 自身函数（跳过第三方库）
//@category Analysis
//@description Decompile specific sky_linux functions from an address list
// analyzeHeadless <proj> <name> -import <bin> -noanalysis \
//   -scriptPath <dir> -postScript DecompileTargets.java <addrfile> <outdir>
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import java.io.*;
import java.util.*;

public class DecompileTargets extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) { println("Usage: <addrfile> <outdir>"); return; }
        File addrFile = new File(args[0]);
        File outDir = new File(args[1]);
        outDir.mkdirs();

        // 1) 读地址清单 (每行 "0xADDR NAME")
        List<String[]> targets = new ArrayList<>();
        try (BufferedReader br = new BufferedReader(new FileReader(addrFile))) {
            String line;
            while ((line = br.readLine()) != null) {
                line = line.trim();
                if (line.isEmpty()) continue;
                String[] p = line.split("\\s+", 2);
                targets.add(new String[]{p[0], p.length > 1 ? p[1] : ""});
            }
        }
        println("Targets to decompile: " + targets.size());

        DecompInterface ifc = new DecompInterface();
        ifc.openProgram(currentProgram);
        Listing listing = currentProgram.getListing();
        FunctionManager fm = currentProgram.getFunctionManager();

        PrintWriter sym = new PrintWriter(new File(outDir, "functions.txt"));
        int ok = 0, failed = 0;
        StringBuilder err = new StringBuilder();

        for (String[] t : targets) {
            try {
                Address addr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(t[0]);
                // 先反汇编该地址（noanalysis 模式下指令未解码），再创建函数
                if (listing.getInstructionAt(addr) == null) {
                    if (!disassemble(addr)) { failed++; err.append("disassemble failed: ").append(t[1]).append(" @").append(t[0]).append("\n"); continue; }
                }
                Function fn = fm.getFunctionAt(addr);
                if (fn == null) {
                    fn = createFunction(addr, t.length > 1 ? t[1] : null);
                    if (fn == null) { failed++; err.append("createFunction failed: ").append(t[1]).append(" @").append(t[0]).append("\n"); continue; }
                }
                sym.printf("%s\t%s\t0x%s%n", fn.getName(), t[1] != null ? t[1] : "", fn.getEntryPoint());
                DecompileResults res = ifc.decompileFunction(fn, 120, monitor);
                if (res.decompileCompleted()) {
                    String safe = fn.getName().replaceAll("[^A-Za-z0-9_.-]", "_");
                    if (safe.length() > 60) safe = safe.substring(0, 60);
                    PrintWriter pw = new PrintWriter(new File(outDir, "decomp_" + safe + ".c"));
                    pw.println("// " + fn.getEntryPoint() + "  " + (t[1] != null ? t[1] : fn.getSignature()));
                    pw.println(res.getDecompiledFunction().getC());
                    pw.close();
                    ok++;
                } else { failed++; }
            } catch (Exception e) {
                failed++;
                err.append("ERR ").append(t[1]).append(": ").append(e.getMessage()).append("\n");
            }
        }
        sym.close();
        ifc.dispose();
        println("Done. decompiled=" + ok + " failed=" + failed);
        if (err.length() > 0) println(err.toString());
    }
}
