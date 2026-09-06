// 004033a0  undefined _RNvMsd_Cs43GvdauwMgQ_8smallvecINtB5_8SmallVecAhj40_E21reserve_one_uncheckedCs72o0HLIKWBT_8tectonic(void)

undefined8
_RNvMsd_Cs43GvdauwMgQ_8smallvecINtB5_8SmallVecAhj40_E21reserve_one_uncheckedCs72o0HLIKWBT_8tectonic
          (long param_1)

{
  long lVar1;
  undefined8 in_RAX;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_50 [24];
  undefined *puStack_38;
  undefined1 auStack_28 [8];
  
  uVar2 = *(ulong *)(param_1 + 0x48);
  if ((uVar2 < 0x41) || (uVar2 = *(ulong *)(param_1 + 8), uVar2 != 0xffffffffffffffff)) {
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar4 = 0xffffffffffffffff >> (~(byte)lVar1 & 0x3f);
    if (uVar2 == 0) {
      uVar4 = 0;
    }
    if (uVar4 != 0xffffffffffffffff) {
      auVar5 = _RNvMsd_Cs43GvdauwMgQ_8smallvecINtB5_8SmallVecAhj40_E8try_growCs72o0HLIKWBT_8tectonic_llvm_8818779079761765746
                         (param_1,uVar4 + 1);
      if (auVar5._0_8_ == -1) {
        return in_RAX;
      }
      goto code_r0x004033fb;
    }
  }
  auVar5 = (*(code *)PTR__RNvNtCs7x1JxYRm7tp_4core6option13expect_failed_01812700)
                     (anon_59bad85d762e64a1e7a41763bef55ebb_2_llvm_8818779079761765746,0x11,
                      anon_59bad85d762e64a1e7a41763bef55ebb_59_llvm_8818779079761765746);
code_r0x004033fb:
  if (auVar5._0_8_ == 0) {
    auVar5 = (*(code *)PTR__RNvNtCs7x1JxYRm7tp_4core9panicking5panic_01814c68)
                       (anon_59bad85d762e64a1e7a41763bef55ebb_2_llvm_8818779079761765746,0x11,
                        anon_59bad85d762e64a1e7a41763bef55ebb_3_llvm_8818779079761765746);
  }
  uVar2 = auVar5._0_8_;
  (*(code *)PTR__RNvNtCskPe9mFtgPYj_5alloc5alloc18handle_alloc_error_01818890)(uVar2,auVar5._8_8_);
  if ((uVar2 & 1) == 0) {
    puStack_38 = &UNK_00403452;
    (*(code *)PTR__RNvNvNtCskPe9mFtgPYj_5alloc3fmt6format12format_inner_01813bc8)
              (auStack_28,anon_59bad85d762e64a1e7a41763bef55ebb_55_llvm_8818779079761765746);
    puStack_38 = &UNK_0040345a;
    uVar3 = _RINvMNtCskAih3DnBuhX_6anyhow5errorNtB5_5Error3msgNtNtCskPe9mFtgPYj_5alloc6string6StringECs72o0HLIKWBT_8tectonic
                      (auStack_28);
    return uVar3;
  }
  (*(code *)PTR__RNvMs2_NtCs268jdzri8zx_3std9backtraceNtB5_9Backtrace7capture_01812e58)(auStack_50);
  uVar3 = _RINvMNtCskAih3DnBuhX_6anyhow5errorNtB5_5Error9constructINtNtB5_7wrapper12MessageErrorReEECs72o0HLIKWBT_8tectonic_llvm_510972233521359556
                    (anon_59bad85d762e64a1e7a41763bef55ebb_55_llvm_8818779079761765746,uVar2 >> 1,
                     auStack_50);
  return uVar3;
}


