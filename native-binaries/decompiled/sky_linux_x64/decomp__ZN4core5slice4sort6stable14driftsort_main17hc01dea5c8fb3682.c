// 002abfd0  undefined _ZN4core5slice4sort6stable14driftsort_main17hc01dea5c8fb3682eE(void)

void _ZN4core5slice4sort6stable14driftsort_main17hc01dea5c8fb3682eE
               (undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  undefined8 auStack_1030 [512];
  
  auStack_1030[0] = 0;
  uVar8 = param_2 - (param_2 >> 1);
  uVar15 = 250000;
  if (param_2 < 250000) {
    uVar15 = param_2;
  }
  if (uVar15 <= uVar8) {
    uVar15 = uVar8;
  }
  uVar5 = 0x30;
  if (0x30 < uVar15) {
    uVar5 = uVar15;
  }
  if (0x80 < uVar15) {
    uVar13 = uVar5 << 5;
    if (uVar8 >> 0x3b == 0 && uVar13 < 0x7ffffffffffffff9) {
      auVar16 = (*(code *)PTR_malloc_00380d78)(uVar13);
      puVar10 = auVar16._0_8_;
      if (puVar10 == (undefined8 *)0x0) {
        puVar6 = (ulong *)_ZN5alloc7raw_vec12handle_error17hfa86a3a4628bd209E
                                    (8,uVar13,auVar16._8_8_,uVar5);
        if (0x80 < uVar15) {
          (*(code *)PTR_free_00380de0)(0);
        }
        func_0x00117030();
        lVar7 = 0;
        puVar14 = puVar6;
        puVar9 = puVar6 + 4;
        do {
          uVar15 = puVar14[6];
          uVar8 = puVar14[4];
          if ((uVar15 < puVar14[2]) || ((uVar15 == puVar14[2] && (uVar8 < *puVar14)))) {
            uVar5 = puVar14[5];
            uVar1 = puVar14[7];
            uVar2 = *puVar14;
            uVar3 = puVar14[1];
            uVar4 = puVar14[3];
            puVar9[2] = puVar14[2];
            puVar9[3] = uVar4;
            *puVar9 = uVar2;
            puVar9[1] = uVar3;
            lVar11 = lVar7;
            puVar12 = puVar6;
            if (puVar14 != puVar6) {
              do {
                puVar12 = (ulong *)((long)puVar6 + lVar11);
                puVar14 = (ulong *)((long)puVar6 + lVar11 + -0x20);
                uVar2 = *(ulong *)((long)puVar6 + lVar11 + -0x10);
                if ((uVar2 <= uVar15) && ((uVar15 != uVar2 || (*puVar14 <= uVar8)))) break;
                uVar2 = *puVar14;
                uVar3 = *(ulong *)((long)puVar6 + lVar11 + -0x18);
                uVar4 = *(ulong *)((long)puVar6 + lVar11 + -8);
                puVar12[2] = *(ulong *)((long)puVar6 + lVar11 + -0x10);
                puVar12[3] = uVar4;
                *puVar12 = uVar2;
                puVar12[1] = uVar3;
                lVar11 = lVar11 + -0x20;
                puVar12 = puVar6;
              } while (lVar11 != 0);
            }
            *puVar12 = uVar8;
            puVar12[1] = uVar5;
            puVar12[2] = uVar15;
            puVar12[3] = uVar1;
          }
          puVar12 = puVar9 + 4;
          lVar7 = lVar7 + 0x20;
          puVar14 = puVar9;
          puVar9 = puVar12;
          if (puVar12 == puVar6 + uVar13 * 4) {
            return;
          }
        } while( true );
      }
      goto code_r0x002ac07f;
    }
    _ZN5alloc7raw_vec17capacity_overflow17hf54c9c361848e9faE();
  }
  puVar10 = auStack_1030;
code_r0x002ac07f:
  _ZN4core5slice4sort6stable5drift4sort17h5965171a6871693eE();
  if (0x80 < uVar15) {
    (*(code *)PTR_free_00380de0)(puVar10);
  }
  return;
}


