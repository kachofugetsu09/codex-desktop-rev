// 001bb820  undefined _ZN4core5slice4sort6stable14driftsort_main17h7f51f3c2985affd8E(void)

void _ZN4core5slice4sort6stable14driftsort_main17h7f51f3c2985affd8E
               (undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = param_2 - (param_2 >> 1);
  uVar3 = 0x22e09;
  if (param_2 < 0x22e09) {
    uVar3 = param_2;
  }
  if (uVar3 <= uVar1) {
    uVar3 = uVar1;
  }
  uVar4 = 0x30;
  if (0x30 < uVar3) {
    uVar4 = uVar3;
  }
  if (uVar3 < 0x4a) {
code_r0x001bb881:
    _ZN4core5slice4sort6stable5drift4sort17h39393baa95ea2c81E();
    return;
  }
  if (0x249249249249249 < uVar1) {
    _ZN5alloc7raw_vec17capacity_overflow17hf54c9c361848e9faE();
    goto code_r0x001bb881;
  }
  lVar5 = uVar4 * 0x38;
  if (lVar5 != 0) {
    lVar2 = (*(code *)PTR_malloc_00380d78)(lVar5);
    if (lVar2 != 0) goto code_r0x001bb8e5;
    _ZN5alloc7raw_vec12handle_error17hfa86a3a4628bd209E(8,lVar5);
  }
  lVar2 = 8;
code_r0x001bb8e5:
  _ZN4core5slice4sort6stable5drift4sort17h39393baa95ea2c81E();
  (*(code *)PTR_free_00380de0)(lVar2);
  return;
}


