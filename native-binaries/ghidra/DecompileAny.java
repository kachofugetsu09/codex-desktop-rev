// 通用 Ghidra 反编译脚本 —— 从符号表筛选匹配关键词的函数并反编译
//@category Analysis
//@description Decompile functions matching keyword list from symbol table
// analyzeHeadless <proj> <name> -import <bin> -noanalysis -scriptPath <dir> \
//   -postScript DecompileAny.java <keywordsFile> <outdir> [maxFuncs]
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.address.*;
import java.io.*;
import java.util.*;

public class DecompileAny extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) { println("Usage: <keywordsFile> <outdir> [maxFuncs]"); return; }
        File kwFile = new File(args[0]);
        File outDir = new File(args[1]);
        outDir.mkdirs();
        int maxFuncs = args.length > 2 ? Integer.parseInt(args[2]) : 60;

        // 读关键词
        List<String> keys = new ArrayList<>();
        try (BufferedReader br = new BufferedReader(new FileReader(kwFile))) {
            String line; while ((line = br.readLine()) != null) {
                line = line.trim(); if (!line.isEmpty()) keys.add(line.toLowerCase());
            }
        }
        println("Keywords: " + keys);

        SymbolTable st = currentProgram.getSymbolTable();
        List<Symbol> syms = new ArrayList<>();
        SymbolIterator sit = st.getAllSymbols(true);
        while (sit.hasNext()) {
            Symbol s = sit.next();
            if (s.getSymbolType() != SymbolType.FUNCTION) continue;
            String n = s.getName();
            for (String k : keys) { if (n.toLowerCase().contains(k)) { syms.add(s); break; } }
        }
        println("Matched symbols: " + syms.size());

        FunctionManager fm = currentProgram.getFunctionManager();
        DecompInterface ifc = new DecompInterface();
        ifc.openProgram(currentProgram);
        PrintWriter funcs = new PrintWriter(new File(outDir, "functions.txt"));
        Set<Address> seen = new HashSet<>();
        int ok = 0, lim = 0;
        for (Symbol s : syms) {
            if (lim >= maxFuncs) { println("Reached maxFuncs=" + maxFuncs + ", stopping."); break; }
            Address addr = s.getAddress();
            if (!seen.add(addr)) continue;
            lim++;
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
        funcs.close(); ifc.dispose();
        println("Decompiled matched functions: " + ok + " -> " + outDir);
    }
}
