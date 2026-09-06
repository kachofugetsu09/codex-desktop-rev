// 0040f9a0  undefined _RNvMs3_NtCskPe9mFtgPYj_5alloc7raw_vecINtB5_6RawVecNtNtCsl1aTsAD2QWw_8tectonic6config10BundleInfoE8grow_oneBQ_(void)

void _RNvMs3_NtCskPe9mFtgPYj_5alloc7raw_vecINtB5_6RawVecNtNtCsl1aTsAD2QWw_8tectonic6config10BundleInfoE8grow_oneBQ_
               (ulong *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  int aiStack_28 [2];
  undefined8 *puStack_20;
  long lStack_18;
  
  uVar3 = *param_1 * 2;
  uVar9 = 4;
  if (4 < uVar3) {
    uVar9 = uVar3;
  }
  lVar6 = 8;
  uVar7 = 0x18;
  uVar3 = uVar9;
  _RNvMs4_NtCskPe9mFtgPYj_5alloc7raw_vecNtB5_11RawVecInner11finish_growCsl1aTsAD2QWw_8tectonic_llvm_7568602861474463854
            (aiStack_28,*param_1,param_1[1]);
  if (aiStack_28[0] != 1) {
    param_1[1] = (ulong)puStack_20;
    *param_1 = uVar9;
    return;
  }
  puVar5 = puStack_20;
  auVar10 = (*(code *)PTR__RNvNtCskPe9mFtgPYj_5alloc7raw_vec12handle_error_01815f30)();
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar7;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar3;
  uVar3 = SUB168(auVar1 * auVar2,0);
  uVar8 = 1;
  if (0x8000000000000000U - lVar6 < uVar3 || SUB168(auVar1 * auVar2,8) != 0) {
    lVar6 = 8;
    uVar3 = 0;
    goto code_r0x0040faac;
  }
  if (lStack_18 == 0) {
    lVar4 = lVar6;
    if (uVar3 != 0) {
      (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_018160c0)();
      lVar4 = (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_018174c8)(uVar3,lVar6);
      goto joined_r0x0040fa90;
    }
  }
  else {
    lVar4 = (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_realloc_01813c00)
                      (auVar10._8_8_,uVar7 * lStack_18,lVar6,uVar3,auVar10._8_8_,uVar7 * lStack_18,
                       auVar10._0_8_,param_1);
joined_r0x0040fa90:
    if (lVar4 == 0) {
      puVar5[1] = lVar6;
      lVar6 = 0x10;
      goto code_r0x0040faac;
    }
  }
  puVar5[1] = lVar4;
  lVar6 = 0x10;
  uVar8 = 0;
code_r0x0040faac:
  *(ulong *)((long)puVar5 + lVar6) = uVar3;
  *puVar5 = uVar8;
  return;
}


