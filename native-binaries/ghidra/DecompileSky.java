// Ghidra 反编译 sky_linux 自身函数（遍历已识别函数，按名字匹配）。用默认分析建立函数。
//@category Analysis
//@description Decompile all sky_linux functions matched by name
// analyzeHeadless <proj> <name> -import <bin> -scriptPath <dir> -postScript DecompileSky.java <outdir>
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import java.io.*;
import java.util.*;

public class DecompileSky extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File outDir = new File(args.length > 0 ? args[0] : "decompiled");
        outDir.mkdirs();

        DecompInterface ifc = new DecompInterface();
        ifc.openProgram(currentProgram);
        FunctionManager fm = currentProgram.getFunctionManager();
        String[] keys = {"sky_linux", "run_full_desktop", "X11FullDesktop", "send_event_at_position",
                         "KeyPresser", "TemporaryClipboard", "MOUSE_POINTER", "move_path", "mouse_overlay"};
        PrintWriter funcs = new PrintWriter(new File(outDir, "functions.txt"));
        DecompResultsHolder holder = new DecompResultsHolder();
        int ok = 0, matched = 0;
        for (Function f : fm.getFunctions(true)) {
            String n = f.getName();
            boolean hit = false;
            for (String k : keys) { if (n.toLowerCase().contains(k.toLowerCase())) { hit = true; break; } }
            if (!hit) continue;
            matched++;
            funcs.printf("%s\t0x%s%n", n, f.getEntryPoint());
            DecompileResults res = ifc.decompileFunction(f, 120, monitor);
            if (res.decompileCompleted()) {
                String safe = n.replaceAll("[^A-Za-z0-9_.-]", "_");
                if (safe.length() > 60) safe = safe.substring(0, 60);
                PrintWriter pw = new PrintWriter(new File(outDir, "decomp_" + safe + ".c"));
                pw.println("// " + f.getEntryPoint() + "  " + f.getSignature());
                pw.println(res.getDecompiledFunction().getC());
                pw.close();
                ok++;
            }
        }
        funcs.close();
        ifc.dispose();
        println("Matched=" + matched + " decompiled=" + ok + " -> " + outDir);
    }
    // tiny holder to avoid unused import warnings
    static class DecompResultsHolder {}
}
