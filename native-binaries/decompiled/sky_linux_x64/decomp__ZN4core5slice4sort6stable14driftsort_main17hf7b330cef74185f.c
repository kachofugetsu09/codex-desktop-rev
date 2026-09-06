// 002b31f0  undefined _ZN4core5slice4sort6stable14driftsort_main17hf7b330cef74185f4E(void)

void _ZN4core5slice4sort6stable14driftsort_main17hf7b330cef74185f4E
               (undefined8 param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined8 auStack_2068 [512];
  undefined8 *puStack_1068;
  ulong uStack_1060;
  ulong uStack_1058;
  undefined8 uStack_1050;
  ulong uStack_1048;
  code *pcStack_1040;
  undefined8 auStack_1030 [512];
  
  auStack_1030[0] = 0;
  uVar5 = param_2 - (param_2 >> 1);
  uVar11 = 500000;
  if (param_2 < 500000) {
    uVar11 = param_2;
  }
  if (uVar11 <= uVar5) {
    uVar11 = uVar5;
  }
  uVar2 = 0x30;
  if (0x30 < uVar11) {
    uVar2 = uVar11;
  }
  if (0x100 < uVar11) {
    uVar10 = uVar2 << 4;
    if (uVar5 >> 0x3c == 0 && uVar10 < 0x7ffffffffffffff9) {
      pcStack_1040 = (code *)&UNK_002b328e;
      auVar12 = (*(code *)PTR_malloc_00380d78)(uVar10);
      puVar7 = auVar12._0_8_;
      if (puVar7 == (undefined8 *)0x0) {
        pcStack_1040 = (code *)&UNK_002b32e3;
        uVar3 = _ZN5alloc7raw_vec12handle_error17hfa86a3a4628bd209E(8,uVar10,auVar12._8_8_,uVar2);
        if (0x100 < uVar11) {
          pcStack_1040 = (code *)&UNK_002b32f8;
          (*(code *)PTR_free_00380de0)(0);
        }
        pcStack_1040 = _ZN4core5slice4sort6stable14driftsort_main17h185cef6696f0e7c3E;
        func_0x00117030(uVar3);
        auStack_2068[0] = 0;
        uVar6 = uVar10 - (uVar10 >> 1);
        uVar5 = 250000;
        if (uVar10 < 250000) {
          uVar5 = uVar10;
        }
        if (uVar5 <= uVar6) {
          uVar5 = uVar6;
        }
        uVar10 = 0x30;
        if (0x30 < uVar5) {
          uVar10 = uVar5;
        }
        puStack_1068 = puVar7;
        uStack_1060 = param_2;
        uStack_1058 = uVar2;
        uStack_1050 = uVar3;
        uStack_1048 = uVar11;
        pcStack_1040 = (code *)&stack0xfffffffffffffff8;
        if (0x80 < uVar5) {
          uVar11 = uVar10 << 5;
          if (uVar6 >> 0x3b == 0 && uVar11 < 0x7ffffffffffffff9) {
            pcStack_1040 = (code *)&stack0xfffffffffffffff8;
            auVar12 = (*(code *)PTR_malloc_00380d78)(uVar11);
            puVar7 = auVar12._0_8_;
            if (puVar7 == (undefined8 *)0x0) {
              plVar4 = (long *)_ZN5alloc7raw_vec12handle_error17hfa86a3a4628bd209E
                                         (8,uVar11,auVar12._8_8_,uVar10);
              if (0x80 < uVar5) {
                (*(code *)PTR_free_00380de0)(0);
              }
              func_0x00117030();
              lVar1 = plVar4[1];
              lVar8 = lVar1;
              for (lVar9 = plVar4[2] + 1; lVar9 != 1; lVar9 = lVar9 + -1) {
                _ZN4core3ptr129drop_in_place_LT_addr2line__unit__ResUnit_LT_gimli__read__endian_slice__EndianSlice_LT_gimli__endianity__LittleEndian_GT__GT__GT_17hd0f6b07d897577aeE
                          (lVar8);
                lVar8 = lVar8 + 0x230;
              }
              if (*plVar4 != 0) {
                (*(code *)PTR_free_00380de0)(lVar1);
                return;
              }
              return;
            }
            goto code_r0x002b33af;
          }
          pcStack_1040 = (code *)&stack0xfffffffffffffff8;
          _ZN5alloc7raw_vec17capacity_overflow17hf54c9c361848e9faE();
        }
        puVar7 = auStack_2068;
code_r0x002b33af:
        _ZN4core5slice4sort6stable5drift4sort17h16e115da45e02a39E();
        if (0x80 < uVar5) {
          (*(code *)PTR_free_00380de0)(puVar7);
        }
        return;
      }
      goto code_r0x002b329f;
    }
    pcStack_1040 = (code *)&UNK_002b326e;
    _ZN5alloc7raw_vec17capacity_overflow17hf54c9c361848e9faE();
  }
  puVar7 = auStack_1030;
code_r0x002b329f:
  pcStack_1040 = (code *)&UNK_002b32b2;
  _ZN4core5slice4sort6stable5drift4sort17hda321a781cfc527bE();
  if (0x100 < uVar11) {
    pcStack_1040 = (code *)&UNK_002b32c4;
    (*(code *)PTR_free_00380de0)(puVar7);
  }
  return;
}


