// 00416960  undefined _RNvMs3_NtCskPe9mFtgPYj_5alloc7raw_vecINtB5_6RawVecTINtNtCs7x1JxYRm7tp_4core6option6OptionjENtNtB7_6string6StringEE8grow_oneCs14svwdtrmj2_24tectonic_engine_spx2html(void)

void _RNvMs3_NtCskPe9mFtgPYj_5alloc7raw_vecINtB5_6RawVecTINtNtCs7x1JxYRm7tp_4core6option6OptionjENtNtB7_6string6StringEE8grow_oneCs14svwdtrmj2_24tectonic_engine_spx2html
               (ulong *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  int aiStack_a0 [2];
  undefined8 *puStack_98;
  long lStack_90;
  undefined *puStack_80;
  int aiStack_78 [2];
  ulong *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_58;
  int aiStack_50 [2];
  ulong *puStack_48;
  undefined8 uStack_40;
  ulong *puStack_38;
  undefined *puStack_30;
  int aiStack_28 [2];
  ulong *puStack_20;
  undefined8 uStack_18;
  
  uVar3 = *param_1 * 2;
  uVar10 = 4;
  if (4 < uVar3) {
    uVar10 = uVar3;
  }
  puStack_30 = &UNK_0041699a;
  _RNvMs4_NtCskPe9mFtgPYj_5alloc7raw_vecNtB5_11RawVecInner11finish_growCs14svwdtrmj2_24tectonic_engine_spx2html_llvm_4308007309237878366
            (aiStack_28,*param_1,param_1[1],uVar10,8,0x28);
  if (aiStack_28[0] != 1) {
    param_1[1] = (ulong)puStack_20;
    *param_1 = uVar10;
    return;
  }
  puStack_30 = &UNK_004169c4;
  (*(code *)PTR__RNvNtCskPe9mFtgPYj_5alloc7raw_vec12handle_error_01815f30)(puStack_20,uStack_18);
  uVar3 = *puStack_20 * 2;
  uVar11 = 4;
  if (4 < uVar3) {
    uVar11 = uVar3;
  }
  puStack_58 = &UNK_00416a0a;
  puStack_38 = param_1;
  puStack_30 = (undefined *)uVar10;
  _RNvMs4_NtCskPe9mFtgPYj_5alloc7raw_vecNtB5_11RawVecInner11finish_growCs14svwdtrmj2_24tectonic_engine_spx2html_llvm_4308007309237878366
            (aiStack_50,*puStack_20,puStack_20[1],uVar11,4,8);
  if (aiStack_50[0] != 1) {
    puStack_20[1] = (ulong)puStack_48;
    *puStack_20 = uVar11;
    return;
  }
  puStack_58 = &UNK_00416a34;
  (*(code *)PTR__RNvNtCskPe9mFtgPYj_5alloc7raw_vec12handle_error_01815f30)(puStack_48,uStack_40);
  uVar3 = *puStack_48 * 2;
  uVar10 = 4;
  if (4 < uVar3) {
    uVar10 = uVar3;
  }
  puStack_80 = &UNK_00416a7a;
  puStack_58 = (undefined *)uVar11;
  _RNvMs4_NtCskPe9mFtgPYj_5alloc7raw_vecNtB5_11RawVecInner11finish_growCs14svwdtrmj2_24tectonic_engine_spx2html_llvm_4308007309237878366
            (aiStack_78,*puStack_48,puStack_48[1],uVar10,4,4);
  if (aiStack_78[0] != 1) {
    puStack_48[1] = (ulong)puStack_70;
    *puStack_48 = uVar10;
    return;
  }
  puStack_80 = &UNK_00416aa4;
  puVar5 = puStack_70;
  (*(code *)PTR__RNvNtCskPe9mFtgPYj_5alloc7raw_vec12handle_error_01815f30)(puStack_70,uStack_68);
  uVar3 = *puVar5 * 2;
  uVar11 = 4;
  if (4 < uVar3) {
    uVar11 = uVar3;
  }
  lVar7 = 2;
  uVar8 = 2;
  uVar3 = uVar11;
  puStack_80 = (undefined *)uVar10;
  _RNvMs4_NtCskPe9mFtgPYj_5alloc7raw_vecNtB5_11RawVecInner11finish_growCs14svwdtrmj2_24tectonic_engine_spx2html_llvm_4308007309237878366
            (aiStack_a0,*puVar5,puVar5[1]);
  if (aiStack_a0[0] != 1) {
    puVar5[1] = (ulong)puStack_98;
    *puVar5 = uVar11;
    return;
  }
  puVar6 = puStack_98;
  auVar12 = (*(code *)PTR__RNvNtCskPe9mFtgPYj_5alloc7raw_vec12handle_error_01815f30)();
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar8;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar3;
  uVar3 = SUB168(auVar1 * auVar2,0);
  uVar9 = 1;
  if (0x8000000000000000U - lVar7 < uVar3 || SUB168(auVar1 * auVar2,8) != 0) {
    lVar7 = 8;
    uVar3 = 0;
    goto code_r0x00416bbc;
  }
  if (lStack_90 == 0) {
    lVar4 = lVar7;
    if (uVar3 != 0) {
      (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_018160c0)();
      lVar4 = (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_018174c8)(uVar3,lVar7);
      goto joined_r0x00416ba0;
    }
  }
  else {
    lVar4 = (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_realloc_01813c00)
                      (auVar12._8_8_,uVar8 * lStack_90,lVar7,uVar3,auVar12._8_8_,uVar8 * lStack_90,
                       auVar12._0_8_,puVar5);
joined_r0x00416ba0:
    if (lVar4 == 0) {
      puVar6[1] = lVar7;
      lVar7 = 0x10;
      goto code_r0x00416bbc;
    }
  }
  puVar6[1] = lVar4;
  lVar7 = 0x10;
  uVar9 = 0;
code_r0x00416bbc:
  *(ulong *)((long)puVar6 + lVar7) = uVar3;
  *puVar6 = uVar9;
  return;
}


