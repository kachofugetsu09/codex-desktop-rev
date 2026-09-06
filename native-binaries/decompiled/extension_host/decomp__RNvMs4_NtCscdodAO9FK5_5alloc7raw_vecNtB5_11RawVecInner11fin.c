// 00133e10  undefined _RNvMs4_NtCscdodAO9FK5_5alloc7raw_vecNtB5_11RawVecInner11finish_growCs1oEx7o4003C_14extension_host(void)

void _RNvMs4_NtCscdodAO9FK5_5alloc7raw_vecNtB5_11RawVecInner11finish_growCs1oEx7o4003C_14extension_host
               (undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_5;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_4;
  uVar3 = SUB168(auVar1 * auVar2,0);
  uVar5 = 1;
  if (0x7ffffffffffffff8 < uVar3 || SUB168(auVar1 * auVar2,8) != 0) {
    lVar4 = 8;
    uVar3 = 0;
    goto code_r0x00133ead;
  }
  if (param_2 == 0) {
    if (uVar3 != 0) {
      (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_001d3078)();
      lVar4 = (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_001d3080)(uVar3,8);
      goto joined_r0x00133e8b;
    }
    lVar4 = 8;
  }
  else {
    lVar4 = (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_realloc_001d30a0)
                      (param_3,param_5 * param_2,8,uVar3);
joined_r0x00133e8b:
    if (lVar4 == 0) {
      param_1[1] = 8;
      lVar4 = 0x10;
      goto code_r0x00133ead;
    }
  }
  param_1[1] = lVar4;
  lVar4 = 0x10;
  uVar5 = 0;
code_r0x00133ead:
  *(ulong *)((long)param_1 + lVar4) = uVar3;
  *param_1 = uVar5;
  return;
}


