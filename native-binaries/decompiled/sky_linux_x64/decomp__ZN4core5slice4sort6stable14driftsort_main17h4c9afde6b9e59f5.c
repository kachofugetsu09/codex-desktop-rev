// 002a6f60  undefined _ZN4core5slice4sort6stable14driftsort_main17h4c9afde6b9e59f51E(void)

void _ZN4core5slice4sort6stable14driftsort_main17h4c9afde6b9e59f51E
               (undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 auStack_1050 [32];
  undefined8 uStack_1030;
  ulong uStack_50;
  undefined1 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_1030 = 0;
  uVar8 = param_2 - (param_2 >> 1);
  uVar18 = 250000;
  if (param_2 < 250000) {
    uVar18 = param_2;
  }
  if (uVar18 <= uVar8) {
    uVar18 = uVar8;
  }
  uVar16 = 0x30;
  if (0x30 < uVar18) {
    uVar16 = uVar18;
  }
  if (0x80 < uVar18) {
    uVar17 = uVar16 << 5;
    if (uVar8 >> 0x3b == 0 && uVar17 < 0x7ffffffffffffff9) {
      uStack_38 = param_1;
      puVar9 = (undefined1 *)(*(code *)PTR_malloc_00380d78)(uVar17);
      if (puVar9 == (undefined1 *)0x0) {
        puVar10 = (undefined8 *)_ZN5alloc7raw_vec12handle_error17hfa86a3a4628bd209E(8);
        if (0x80 < uVar18) {
          _ZN4core3ptr73drop_in_place_LT_alloc__vec__Vec_LT_addr2line__line__LineSequence_GT__GT_17h35a0be522a411512E
                    (&uStack_50);
        }
        func_0x00117030();
        lVar11 = 0x20;
        puVar14 = puVar10 + 4;
        puVar13 = puVar10;
        do {
          puVar12 = puVar14;
          uVar18 = puVar13[6];
          if (uVar18 < (ulong)puVar13[2]) {
            uVar2 = *puVar12;
            uVar3 = puVar12[1];
            uVar1 = puVar13[7];
            lVar7 = lVar11;
            do {
              lVar15 = lVar7;
              puVar14 = (undefined8 *)((long)puVar10 + lVar15 + -0x20);
              uVar4 = *puVar14;
              uVar5 = puVar14[1];
              puVar14 = (undefined8 *)((long)puVar10 + lVar15 + -0x10);
              uVar6 = puVar14[1];
              puVar13 = (undefined8 *)((long)puVar10 + lVar15 + 0x10);
              *puVar13 = *puVar14;
              puVar13[1] = uVar6;
              *(undefined8 *)((long)puVar10 + lVar15) = uVar4;
              ((undefined8 *)((long)puVar10 + lVar15))[1] = uVar5;
              puVar14 = puVar10;
              if (lVar15 == 0x20) goto code_r0x002a70b6;
              lVar7 = lVar15 + -0x20;
            } while (uVar18 < *(ulong *)((long)puVar10 + lVar15 + -0x30));
            puVar14 = (undefined8 *)(lVar15 + -0x20 + (long)puVar10);
code_r0x002a70b6:
            *puVar14 = uVar2;
            puVar14[1] = uVar3;
            *(ulong *)((long)puVar10 + lVar15 + -0x10) = uVar18;
            *(undefined8 *)((long)puVar10 + lVar15 + -8) = uVar1;
          }
          lVar11 = lVar11 + 0x20;
          puVar14 = puVar12 + 4;
          puVar13 = puVar12;
          if (puVar12 + 4 == puVar10 + uVar17 * 4) {
            return;
          }
        } while( true );
      }
      uStack_40 = 0;
      uStack_50 = uVar16;
      puStack_48 = puVar9;
      goto code_r0x002a7022;
    }
    _ZN5alloc7raw_vec17capacity_overflow17hf54c9c361848e9faE();
  }
  puVar9 = auStack_1050;
code_r0x002a7022:
  _ZN4core5slice4sort6stable5drift4sort17h121bd15485506c8fE();
  if (0x80 < uVar18) {
    (*(code *)PTR_free_00380de0)(puVar9);
  }
  return;
}


