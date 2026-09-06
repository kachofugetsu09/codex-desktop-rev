// 00416560  undefined _RINvNvMs2_NtCskPe9mFtgPYj_5alloc7raw_vecINtB8_11RawVecInnerpE7reserve21do_reserve_and_handleNtNtBa_5alloc6GlobalECs14svwdtrmj2_24tectonic_engine_spx2html(void)

void _RINvNvMs2_NtCskPe9mFtgPYj_5alloc7raw_vecINtB8_11RawVecInnerpE7reserve21do_reserve_and_handleNtNtBa_5alloc6GlobalECs14svwdtrmj2_24tectonic_engine_spx2html
               (ulong *param_1,ulong param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  ulong extraout_RDX;
  ulong uVar2;
  undefined4 *puVar3;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_70 [56];
  ulong uStack_38;
  ulong *puStack_30;
  int aiStack_28 [2];
  ulong uStack_20;
  undefined4 *puStack_18;
  
  if (param_5 != 0) goto code_r0x00416577;
  do {
    param_1 = (ulong *)0x0;
    puStack_30 = (ulong *)&UNK_00416577;
    (*(code *)PTR__RNvNtCskPe9mFtgPYj_5alloc7raw_vec12handle_error_01815f30)();
    param_3 = extraout_RDX;
code_r0x00416577:
  } while (CARRY8(param_3,param_2));
  uVar1 = *param_1 * 2;
  if (uVar1 < param_3 + param_2) {
    uVar1 = param_3 + param_2;
  }
  uVar2 = 8;
  if (param_5 != 1) {
    uVar2 = (ulong)(param_5 < 0x401) * 3 + 1;
  }
  if (uVar2 < uVar1) {
    uVar2 = uVar1;
  }
  puStack_30 = (ulong *)&UNK_004165c4;
  _RNvMs4_NtCskPe9mFtgPYj_5alloc7raw_vecNtB5_11RawVecInner11finish_growCs14svwdtrmj2_24tectonic_engine_spx2html_llvm_4308007309237878366
            (aiStack_28,*param_1,param_1[1],uVar2,param_4);
  if (aiStack_28[0] != 1) {
    param_1[1] = uStack_20;
    *param_1 = uVar2;
    return;
  }
  puStack_30 = (ulong *)&UNK_004165ee;
  puVar3 = puStack_18;
  (*(code *)PTR__RNvNtCskPe9mFtgPYj_5alloc7raw_vec12handle_error_01815f30)();
  uStack_38 = uVar2;
  puStack_30 = param_1;
  (*(code *)PTR__RNvMs2_NtCs268jdzri8zx_3std9backtraceNtB5_9Backtrace7capture_01812e58)(&uStack_b0);
  uStack_b0 = *puVar3;
  uStack_ac = puVar3[1];
  uStack_a8 = puVar3[2];
  uStack_a4 = puVar3[3];
  uStack_a0 = puVar3[4];
  uStack_9c = puVar3[5];
  uStack_98 = puVar3[6];
  uStack_94 = puVar3[7];
  uStack_90 = puVar3[8];
  uStack_8c = puVar3[9];
  uStack_88 = puVar3[10];
  uStack_84 = puVar3[0xb];
  _RINvMNtCskAih3DnBuhX_6anyhow5errorNtB5_5Error9constructINtB3_12ContextErrorNtCs2UldOmkgpX7_15tectonic_errors16AnnotatedMessageNtNtNtCs268jdzri8zx_3std2io5error5ErrorEECs14svwdtrmj2_24tectonic_engine_spx2html_llvm_7000139736538535534
            (&uStack_b0,auStack_70);
  return;
}


