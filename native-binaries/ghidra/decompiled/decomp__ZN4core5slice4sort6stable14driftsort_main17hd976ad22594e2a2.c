// 00144ac0  undefined _ZN4core5slice4sort6stable14driftsort_main17hd976ad22594e2a29E(void)

void _ZN4core5slice4sort6stable14driftsort_main17hd976ad22594e2a29E
               (undefined8 param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = param_2 - (param_2 >> 1);
  uVar4 = 0x51615;
  if (param_2 < 0x51615) {
    uVar4 = param_2;
  }
  if (uVar4 <= uVar2) {
    uVar4 = uVar2;
  }
  uVar5 = 0x30;
  if (0x30 < uVar4) {
    uVar5 = uVar4;
  }
  if (uVar4 < 0xab) {
code_r0x00144b24:
    _ZN4core5slice4sort6stable5drift4sort17hc80d05cb611b05abE();
    return;
  }
  if (0x555555555555555 < uVar2) {
    _ZN5alloc7raw_vec17capacity_overflow17hf54c9c361848e9faE();
    goto code_r0x00144b24;
  }
  lVar1 = uVar5 * 0x18;
  if (lVar1 != 0) {
    lVar3 = (*(code *)PTR_malloc_00380d78)(lVar1);
    if (lVar3 != 0) goto code_r0x00144b90;
    _ZN5alloc7raw_vec12handle_error17hfa86a3a4628bd209E(8,lVar1);
  }
  lVar3 = 8;
code_r0x00144b90:
  _ZN4core5slice4sort6stable5drift4sort17hc80d05cb611b05abE();
  (*(code *)PTR_free_00380de0)(lVar3);
  return;
}


