// Ghidra headless 反编译导出脚本
// analyzeHeadless <proj> <name> -import <binary> -postScript ExportDecomp.java <outdir>
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.File;
import java.io.PrintWriter;

public class ExportDecomp extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File outDir = new File(args.length > 0 ? args[0] : "decompiled");
        outDir.mkdirs();
        DecompInterface ifc = new DecompInterface();
        ifc.openProgram(currentProgram);
        FunctionManager fm = currentProgram.getFunctionManager();

        // 1) 导出所有函数名 + 地址 + 大小 (符号清单)
        PrintWriter sym = new PrintWriter(new File(outDir, "functions.txt"));
        for (Function f : fm.getFunctions(true)) {
            sym.printf("%s\t0x%x\t%d\t%s%n", f.getName(), f.getEntryPoint().getOffset(), f.getBody().getNumAddresses(), f.getSignature().toString());
        }
        sym.close();

        // 2) 对名字含关键词的关键函数反编译为伪代码
        String[] keys = {"sky_linux", "click", "drag", "scroll", "type_text", "press_key",
                         "get_screenshot", "move", "mouse", "key", "clipboard", "x11", "context",
                         "run_full_desktop", "Main", "main"};
        int n = 0;
        for (Function f : fm.getFunctions(true)) {
            String name = f.getName();
            boolean hit = false;
            for (String k : keys) { if (name.toLowerCase().contains(k.toLowerCase())) { hit = true; break; } }
            if (!hit) continue;
            DecompileResults res = ifc.decompileFunction(f, 120, monitor);
            if (res.decompileCompleted()) {
                String safe = name.replaceAll("[^A-Za-z0-9_.-]", "_");
                PrintWriter pw = new PrintWriter(new File(outDir, "decomp_" + safe + ".c"));
                pw.println("// " + f.getEntryPoint() + "  " + f.getSignature());
                pw.println(res.getDecompiledFunction().getC());
                pw.close();
                n++;
            }
        }
        ifc.dispose();
        println("Exported " + n + " decompiled sky_linux functions to " + outDir);
    }
}
