// 002b3300  undefined _ZN4core5slice4sort6stable14driftsort_main17h185cef6696f0e7c3E(void)

void _ZN4core5slice4sort6stable14driftsort_main17h185cef6696f0e7c3E
               (undefined8 param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined8 auStack_1030 [512];
  
  auStack_1030[0] = 0;
  uVar4 = param_2 - (param_2 >> 1);
  uVar9 = 250000;
  if (param_2 < 250000) {
    uVar9 = param_2;
  }
  if (uVar9 <= uVar4) {
    uVar9 = uVar4;
  }
  uVar2 = 0x30;
  if (0x30 < uVar9) {
    uVar2 = uVar9;
  }
  if (0x80 < uVar9) {
    uVar8 = uVar2 << 5;
    if (uVar4 >> 0x3b == 0 && uVar8 < 0x7ffffffffffffff9) {
      auVar10 = (*(code *)PTR_malloc_00380d78)(uVar8);
      puVar5 = auVar10._0_8_;
      if (puVar5 == (undefined8 *)0x0) {
        plVar3 = (long *)_ZN5alloc7raw_vec12handle_error17hfa86a3a4628bd209E
                                   (8,uVar8,auVar10._8_8_,uVar2);
        if (0x80 < uVar9) {
          (*(code *)PTR_free_00380de0)(0);
        }
        func_0x00117030();
        lVar1 = plVar3[1];
        lVar6 = lVar1;
        for (lVar7 = plVar3[2] + 1; lVar7 != 1; lVar7 = lVar7 + -1) {
          _ZN4core3ptr129drop_in_place_LT_addr2line__unit__ResUnit_LT_gimli__read__endian_slice__EndianSlice_LT_gimli__endianity__LittleEndian_GT__GT__GT_17hd0f6b07d897577aeE
                    (lVar6);
          lVar6 = lVar6 + 0x230;
        }
        if (*plVar3 != 0) {
          (*(code *)PTR_free_00380de0)(lVar1);
          return;
        }
        return;
      }
      goto code_r0x002b33af;
    }
    _ZN5alloc7raw_vec17capacity_overflow17hf54c9c361848e9faE();
  }
  puVar5 = auStack_1030;
code_r0x002b33af:
  _ZN4core5slice4sort6stable5drift4sort17h16e115da45e02a39E();
  if (0x80 < uVar9) {
    (*(code *)PTR_free_00380de0)(puVar5);
  }
  return;
}


