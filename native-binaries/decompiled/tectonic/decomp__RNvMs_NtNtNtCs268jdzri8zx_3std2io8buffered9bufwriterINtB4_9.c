// 00412510  undefined _RNvMs_NtNtNtCs268jdzri8zx_3std2io8buffered9bufwriterINtB4_9BufWriterNtNtB8_5stdio6StdoutE10write_coldCsl1aTsAD2QWw_8tectonic(void)

undefined1  [16]
_RNvMs_NtNtNtCs268jdzri8zx_3std2io8buffered9bufwriterINtB4_9BufWriterNtNtB8_5stdio6StdoutE10write_coldCsl1aTsAD2QWw_8tectonic
          (ulong *param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  uVar2 = *param_1;
  if (uVar2 - param_1[2] < param_3) {
    lVar1 = _RNvMs_NtNtNtCs268jdzri8zx_3std2io8buffered9bufwriterINtB4_9BufWriterNtNtB8_5stdio6StdoutE9flush_bufCsl1aTsAD2QWw_8tectonic
                      (param_1);
    if (lVar1 != 0) {
      auVar3._8_8_ = lVar1;
      auVar3._0_8_ = 1;
      return auVar3;
    }
    uVar2 = *param_1;
  }
  if (param_3 < uVar2) {
    uVar2 = param_1[2];
    (*(code *)PTR_memcpy_018136a0)(param_1[1] + uVar2,param_2,param_3);
    param_1[2] = uVar2 + param_3;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = param_3;
    return auVar4 << 0x40;
  }
  *(undefined1 *)(param_1 + 3) = 1;
  auVar4 = (*(code *)
             PTR__RNvXse_NtNtCs268jdzri8zx_3std2io5stdioNtB5_6StdoutNtB7_5Write5write_01815240)
                     (param_1 + 4,param_2,param_3);
  *(undefined1 *)(param_1 + 3) = 0;
  return auVar4;
}


