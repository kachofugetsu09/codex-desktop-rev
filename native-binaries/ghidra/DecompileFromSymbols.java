// Ghidra 通过 ELF 符号表定位并反编译 sky_linux 函数（用 Ghidra 自己加载的符号，地址准确）
//@category Analysis
//@description Decompile sky_linux functions found in the symbol table
// analyzeHeadless <proj> <name> -import <bin> -noanalysis -scriptPath <dir> -postScript DecompileFromSymbols.java <outdir>
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.address.*;
import java.io.*;
import java.util.*;

public class DecompileFromSymbols extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File outDir = new File(args.length > 0 ? args[0] : "decompiled");
        outDir.mkdirs();

        // 1) 用 Ghidra 加载的符号表定位 sky_linux 函数符号
        SymbolTable st = currentProgram.getSymbolTable();
        Set<String> want = new HashSet<>(Arrays.asList("sky_linux", "run_full_desktop", "X11FullDesktop",
            "send_event_at_position", "KeyPresser", "TemporaryClipboard", "MOUSE_POINTER", "move_path",
            "mouse_overlay", "main", "keys", "env_str"));
        List<Symbol> syms = new ArrayList<>();
        SymbolIterator sit = st.getAllSymbols(true);
        while (sit.hasNext()) {
            Symbol s = sit.next();
            if (s.getSymbolType() != SymbolType.FUNCTION) continue;
            String n = s.getName();
            for (String w : want) { if (n.toLowerCase().contains(w.toLowerCase())) { syms.add(s); break; } }
        }
        println("Matched symbols: " + syms.size());

        FunctionManager fm = currentProgram.getFunctionManager();
        DecompInterface ifc = new DecompInterface();
        ifc.openProgram(currentProgram);
        PrintWriter funcs = new PrintWriter(new File(outDir, "functions.txt"));
        Set<Address> seen = new HashSet<>();
        int ok = 0;
        for (Symbol s : syms) {
            Address addr = s.getAddress();
            if (!seen.add(addr)) continue;
            Function fn = fm.getFunctionAt(addr);
            if (fn == null) fn = createFunction(addr, s.getName());
            if (fn == null) continue;
            funcs.printf("%s\t0x%s%n", fn.getName(), fn.getEntryPoint());
            DecompileResults res = ifc.decompileFunction(fn, 120, monitor);
            if (res.decompileCompleted()) {
                String safe = fn.getName().replaceAll("[^A-Za-z0-9_.-]", "_");
                if (safe.length() > 60) safe = safe.substring(0, 60);
                PrintWriter pw = new PrintWriter(new File(outDir, "decomp_" + safe + ".c"));
                pw.println("// " + fn.getEntryPoint() + "  " + fn.getSignature());
                pw.println(res.getDecompiledFunction().getC());
                pw.close();
                ok++;
            }
        }
        funcs.close();
        ifc.dispose();
        println("Decompiled sky_linux functions: " + ok);
    }
}
