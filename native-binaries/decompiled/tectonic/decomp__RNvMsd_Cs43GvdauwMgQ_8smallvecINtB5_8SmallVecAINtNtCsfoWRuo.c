// 00403150  undefined _RNvMsd_Cs43GvdauwMgQ_8smallvecINtB5_8SmallVecAINtNtCsfoWRuo2WL5W_18tracing_subscriber8registry7SpanRefNtNtBL_7sharded8RegistryEj10_E21reserve_one_uncheckedCs72o0HLIKWBT_8tectonic(void)

undefined8 *
_RNvMsd_Cs43GvdauwMgQ_8smallvecINtB5_8SmallVecAINtNtCsfoWRuo2WL5W_18tracing_subscriber8registry7SpanRefNtNtBL_7sharded8RegistryEj10_E21reserve_one_uncheckedCs72o0HLIKWBT_8tectonic
          (undefined1 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *unaff_RBX;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_R14;
  ulong uVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_98 [24];
  undefined *puStack_80;
  undefined1 auStack_70 [8];
  undefined8 *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar8 = *(ulong *)((long)param_1 + 0x288);
  uVar3 = uVar8;
  if ((uVar8 < 0x11) || (uVar3 = *(ulong *)((long)param_1 + 8), uVar3 != 0xffffffffffffffff)) {
    lVar2 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar4 = 0xffffffffffffffff >> (~(byte)lVar2 & 0x3f);
    if (uVar3 == 0) {
      uVar4 = 0;
    }
    if (uVar4 == 0xffffffffffffffff) goto code_r0x00403358;
    uVar3 = uVar4 + 1;
    bVar9 = uVar8 < 0x11;
    uVar7 = *(ulong *)((long)param_1 + 8);
    if (bVar9) {
      uVar7 = uVar8;
    }
    puVar1 = (undefined8 *)((long)param_1 + 8);
    auVar10._8_8_ = uVar4;
    auVar10._0_8_ = puVar1;
    unaff_RBX = *(undefined8 **)((long)param_1 + 0x10);
    if (bVar9) {
      unaff_RBX = puVar1;
    }
    uVar5 = 0x10;
    if (!bVar9) {
      uVar5 = uVar8;
    }
    if (uVar3 < uVar7) goto code_r0x00403371;
    uVar6 = uVar5;
    if (uVar4 < 0x10) {
      if (uVar8 < 0x11) {
        return puVar1;
      }
      *(undefined8 *)param_1 = 0;
      puStack_50 = (undefined8 *)&UNK_00403201;
      (*(code *)PTR_memcpy_018136a0)(puVar1,unaff_RBX,uVar7 * 0x28);
      *(ulong *)((long)param_1 + 0x288) = uVar7;
      uVar6 = uVar5 * 8;
      if (uVar8 < 0x333333333333334) goto code_r0x0040328e;
      uStack_40 = 0;
      param_1 = anon_59bad85d762e64a1e7a41763bef55ebb_53_llvm_8818779079761765746;
      puStack_50 = (undefined8 *)&UNK_00403259;
      lStack_38 = uVar5 * 0x28;
      auVar10 = (*(code *)PTR__RNvNtCs7x1JxYRm7tp_4core6result13unwrap_failed_01818178)
                          (anon_59bad85d762e64a1e7a41763bef55ebb_53_llvm_8818779079761765746,0x2b,
                           &uStack_40,&UNK_01659600,&UNK_016592f0);
    }
    if (uVar3 == uVar6) {
      return auVar10._0_8_;
    }
    if (0x333333333333332 < auVar10._8_8_) {
code_r0x00403275:
      puStack_50 = (undefined8 *)&UNK_0040328e;
      (*(code *)PTR__RNvNtCs7x1JxYRm7tp_4core9panicking5panic_01814c68)
                (anon_59bad85d762e64a1e7a41763bef55ebb_2_llvm_8818779079761765746,0x11,
                 anon_59bad85d762e64a1e7a41763bef55ebb_3_llvm_8818779079761765746);
code_r0x0040328e:
      puVar1 = (undefined8 *)
               (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_01816b68)(unaff_RBX);
      return puVar1;
    }
    unaff_R14 = uVar3 * 0x28;
    puStack_48 = (undefined8 *)param_1;
    if (uVar8 < 0x11) {
      puStack_50 = (undefined8 *)&UNK_004032c6;
      (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_018160c0)();
      puStack_50 = (undefined8 *)&UNK_004032d4;
      lVar2 = (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_018174c8)(unaff_R14,8);
      if (lVar2 != 0) {
        puStack_50 = (undefined8 *)&UNK_004032f8;
        (*(code *)PTR_memcpy_018136a0)(lVar2,unaff_RBX,uVar7 * 0x28);
code_r0x0040332f:
        *puStack_48 = 1;
        puStack_48[1] = uVar7;
        puStack_48[2] = lVar2;
        puStack_48[0x51] = uVar3;
        return puStack_48;
      }
    }
    else {
      if (0x333333333333333 < uVar8) goto code_r0x00403275;
      puStack_50 = (undefined8 *)&UNK_00403327;
      lVar2 = (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_realloc_01813c00)
                        (unaff_RBX,uVar6 * 0x28,8,unaff_R14);
      uVar8 = 0;
      if (lVar2 != 0) goto code_r0x0040332f;
    }
  }
  else {
code_r0x00403358:
    puStack_50 = (undefined8 *)&UNK_00403371;
    (*(code *)PTR__RNvNtCs7x1JxYRm7tp_4core6option13expect_failed_01812700)
              (anon_59bad85d762e64a1e7a41763bef55ebb_2_llvm_8818779079761765746,0x11,
               anon_59bad85d762e64a1e7a41763bef55ebb_59_llvm_8818779079761765746);
code_r0x00403371:
    puStack_50 = (undefined8 *)&UNK_0040338a;
    (*(code *)PTR__RNvNtCs7x1JxYRm7tp_4core9panicking5panic_01814c68)
              (anon_c6912e7cb57c03cc7f15665697e39e3a_13_llvm_7718113126134969349,0x20,&UNK_01659678)
    ;
  }
  lVar2 = 8;
  puStack_50 = (undefined8 *)&UNK_00403398;
  puStack_50 = (undefined8 *)
               (*(code *)PTR__RNvNtCskPe9mFtgPYj_5alloc5alloc18handle_alloc_error_01818890)
                         (8,unaff_R14);
  uVar3 = *(ulong *)(lVar2 + 0x48);
  if ((uVar3 < 0x41) || (uVar3 = *(ulong *)(lVar2 + 8), uVar3 != 0xffffffffffffffff)) {
    lVar2 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar4 = 0xffffffffffffffff >> (~(byte)lVar2 & 0x3f);
    if (uVar3 == 0) {
      uVar4 = 0;
    }
    if (uVar4 != 0xffffffffffffffff) {
      puStack_58 = (undefined8 *)&UNK_004033da;
      auVar10 = _RNvMsd_Cs43GvdauwMgQ_8smallvecINtB5_8SmallVecAhj40_E8try_growCs72o0HLIKWBT_8tectonic_llvm_8818779079761765746
                          ();
      if (auVar10._0_8_ == -1) {
        return puStack_50;
      }
      goto code_r0x004033fb;
    }
  }
  puStack_58 = (undefined8 *)&UNK_004033fb;
  auVar10 = (*(code *)PTR__RNvNtCs7x1JxYRm7tp_4core6option13expect_failed_01812700)
                      (anon_59bad85d762e64a1e7a41763bef55ebb_2_llvm_8818779079761765746,0x11,
                       anon_59bad85d762e64a1e7a41763bef55ebb_59_llvm_8818779079761765746);
code_r0x004033fb:
  if (auVar10._0_8_ == 0) {
    puStack_58 = (undefined8 *)&UNK_00403419;
    auVar10 = (*(code *)PTR__RNvNtCs7x1JxYRm7tp_4core9panicking5panic_01814c68)
                        (anon_59bad85d762e64a1e7a41763bef55ebb_2_llvm_8818779079761765746,0x11,
                         anon_59bad85d762e64a1e7a41763bef55ebb_3_llvm_8818779079761765746);
  }
  uVar3 = auVar10._0_8_;
  puStack_58 = (undefined8 *)&UNK_00403425;
  (*(code *)PTR__RNvNtCskPe9mFtgPYj_5alloc5alloc18handle_alloc_error_01818890)(uVar3,auVar10._8_8_);
  if ((uVar3 & 1) != 0) {
    puStack_68 = unaff_RBX;
    lStack_60 = unaff_R14;
    puStack_58 = (undefined8 *)uVar8;
    (*(code *)PTR__RNvMs2_NtCs268jdzri8zx_3std9backtraceNtB5_9Backtrace7capture_01812e58)
              (auStack_98);
    puVar1 = (undefined8 *)
             _RINvMNtCskAih3DnBuhX_6anyhow5errorNtB5_5Error9constructINtNtB5_7wrapper12MessageErrorReEECs72o0HLIKWBT_8tectonic_llvm_510972233521359556
                       (anon_59bad85d762e64a1e7a41763bef55ebb_55_llvm_8818779079761765746,uVar3 >> 1
                        ,auStack_98);
    return puVar1;
  }
  puStack_80 = &UNK_00403452;
  puStack_58 = unaff_RBX;
  (*(code *)PTR__RNvNvNtCskPe9mFtgPYj_5alloc3fmt6format12format_inner_01813bc8)
            (auStack_70,anon_59bad85d762e64a1e7a41763bef55ebb_55_llvm_8818779079761765746);
  puStack_80 = &UNK_0040345a;
  puVar1 = (undefined8 *)
           _RINvMNtCskAih3DnBuhX_6anyhow5errorNtB5_5Error3msgNtNtCskPe9mFtgPYj_5alloc6string6StringECs72o0HLIKWBT_8tectonic
                     (auStack_70);
  return puVar1;
}


