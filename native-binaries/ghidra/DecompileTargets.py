#Ghida Jython 定向反编译脚本 —— 只解 sky_linux 自身函数
#@category Analysis
#@description Decompile specific sky_linux functions from an address list
# 用法: analyzeHeadless <proj> <name> -import <bin> -noanalysis \
#         -scriptPath <dir> -postScript DecompileTargets.py <addrfile> <outdir>
import os
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor

args = getScriptArgs()
if len(args) < 2:
    print("Usage: <addrfile> <outdir>")
    exit()

addrfile = args[0]
outdir = args[1]
if not os.path.isdir(outdir):
    os.makedirs(outdir)

program = currentProgram
listing = program.getListing()
fm = program.getFunctionManager()
af = program.getAddressFactory().getDefaultAddressSpace()

# 读地址清单
targets = []
with open(addrfile) as f:
    for line in f:
        line = line.strip()
        if not line:
            continue
        parts = line.split(None, 1)
        targets.append((parts[0], parts[1] if len(parts) > 1 else ""))
print("Targets: %d" % len(targets))

ifc = DecompInterface()
ifc.openProgram(program)
monitor = ConsoleTaskMonitor()

funcs_file = open(os.path.join(outdir, "functions.txt"), "w")
ok = 0
failed = 0
for (addrstr, name) in targets:
    try:
        addr = af.getAddress(addrstr)
        # 反汇编（noanalysis 下指令未解码）
        ins = listing.getInstructionAt(addr)
        if ins is None:
            dis = listing.disassemble(addr)
            if dis is None:
                failed += 1
                print("disassemble failed: %s @%s" % (name, addrstr))
                continue
        fn = fm.getFunctionAt(addr)
        if fn is None:
            fn = createFunction(addr, None)
            if fn is None:
                failed += 1
                print("createFunction failed: %s @%s" % (name, addrstr))
                continue
        funcs_file.write("%s\t%s\t0x%s\n" % (fn.getName(), name, fn.getEntryPoint()))
        res = ifc.decompileFunction(fn, 120, monitor)
        if res and res.decompileCompleted():
            safe = "".join(c for c in fn.getName() if c.isalnum() or c in "._-")[:60]
            with open(os.path.join(outdir, "decomp_" + safe + ".c"), "w") as pw:
                pw.write("// %s  %s\n" % (fn.getEntryPoint(), name or fn.getSignature()))
                pw.write(res.getDecompiledFunction().getC())
            ok += 1
        else:
            failed += 1
    except Exception as e:
        failed += 1
        print("ERR %s: %s" % (name, e))

funcs_file.close()
ifc.dispose()
print("Done. decompiled=%d failed=%d" % (ok, failed))
