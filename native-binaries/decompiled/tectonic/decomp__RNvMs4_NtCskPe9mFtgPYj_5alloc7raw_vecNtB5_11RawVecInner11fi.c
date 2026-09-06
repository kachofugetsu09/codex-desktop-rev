// 00416b20  undefined _RNvMs4_NtCskPe9mFtgPYj_5alloc7raw_vecNtB5_11RawVecInner11finish_growCs14svwdtrmj2_24tectonic_engine_spx2html.llvm.4308007309237878366(void)

void _RNvMs4_NtCskPe9mFtgPYj_5alloc7raw_vecNtB5_11RawVecInner11finish_growCs14svwdtrmj2_24tectonic_engine_spx2html_llvm_4308007309237878366
               (undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
               ulong param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_6;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_4;
  uVar3 = SUB168(auVar1 * auVar2,0);
  uVar5 = 1;
  if (0x8000000000000000U - param_5 < uVar3 || SUB168(auVar1 * auVar2,8) != 0) {
    lVar4 = 8;
    uVar3 = 0;
    goto code_r0x00416bbc;
  }
  if (param_2 == 0) {
    lVar4 = param_5;
    if (uVar3 != 0) {
      (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_018160c0)();
      lVar4 = (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_018174c8)(uVar3,param_5);
      goto joined_r0x00416ba0;
    }
  }
  else {
    lVar4 = (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_realloc_01813c00)
                      (param_3,param_6 * param_2,param_5,uVar3);
joined_r0x00416ba0:
    if (lVar4 == 0) {
      param_1[1] = param_5;
      lVar4 = 0x10;
      goto code_r0x00416bbc;
    }
  }
  param_1[1] = lVar4;
  lVar4 = 0x10;
  uVar5 = 0;
code_r0x00416bbc:
  *(ulong *)((long)param_1 + lVar4) = uVar3;
  *param_1 = uVar5;
  return;
}


