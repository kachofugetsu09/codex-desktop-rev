// 002af2b0  undefined _ZN4core5slice4sort6stable14driftsort_main17hf6a6e7bd174670adE(void)

void _ZN4core5slice4sort6stable14driftsort_main17hf6a6e7bd174670adE
               (undefined8 param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined8 auStack_1030 [512];
  
  auStack_1030[0] = 0;
  uVar3 = param_2 - (param_2 >> 1);
  uVar5 = 0x51615;
  if (param_2 < 0x51615) {
    uVar5 = param_2;
  }
  if (uVar5 <= uVar3) {
    uVar5 = uVar3;
  }
  uVar2 = 0x30;
  if (0x30 < uVar5) {
    uVar2 = uVar5;
  }
  if (uVar5 < 0xab) {
    puVar4 = auStack_1030;
  }
  else {
    if (0x555555555555555 < uVar3) {
      uVar2 = _ZN5alloc7raw_vec17capacity_overflow17hf54c9c361848e9faE();
    }
    lVar1 = uVar2 * 0x18;
    if (lVar1 != 0) {
      auVar6 = (*(code *)PTR_malloc_00380d78)(lVar1);
      puVar4 = auVar6._0_8_;
      if (puVar4 != (undefined8 *)0x0) goto code_r0x002af371;
      _ZN5alloc7raw_vec12handle_error17hfa86a3a4628bd209E(8,lVar1,auVar6._8_8_,uVar2);
    }
    puVar4 = (undefined8 *)0x8;
  }
code_r0x002af371:
  _ZN4core5slice4sort6stable5drift4sort17hee7c3c997b399486E();
  if (0xaa < uVar5) {
    (*(code *)PTR_free_00380de0)(puVar4);
  }
  return;
}


