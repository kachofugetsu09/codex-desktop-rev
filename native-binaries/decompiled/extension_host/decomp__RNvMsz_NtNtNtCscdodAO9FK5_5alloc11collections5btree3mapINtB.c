// 00133f30  undefined _RNvMsz_NtNtNtCscdodAO9FK5_5alloc11collections5btree3mapINtB5_8IntoIterNtNtBb_6string6StringNtNtCsgz2V7y4M3Xr_10serde_json5value5ValueE10dying_nextCs1oEx7o4003C_14extension_host.llvm.18402832646499948387(void)

void _RNvMsz_NtNtNtCscdodAO9FK5_5alloc11collections5btree3mapINtB5_8IntoIterNtNtBb_6string6StringNtNtCsgz2V7y4M3Xr_10serde_json5value5ValueE10dying_nextCs1oEx7o4003C_14extension_host_llvm_18402832646499948387
               (ulong *param_1,long *param_2)

{
  ulong uVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  bool bVar16;
  
  if (param_2[8] == 0) {
    lVar3 = *param_2;
    lVar4 = param_2[1];
    lVar9 = param_2[2];
    uVar13 = param_2[3];
    *param_2 = 0;
    puVar7 = PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_001d3048;
    if (lVar3 == 1) {
      if (lVar4 == 0) {
        if (uVar13 != 0) {
          uVar12 = uVar13;
          if ((uVar13 & 7) != 0) {
            uVar12 = 0;
            do {
              lVar9 = *(long *)(lVar9 + 0x278);
              uVar12 = uVar12 + 1;
            } while ((uVar13 & 7) != uVar12);
            uVar12 = uVar13 - uVar12;
          }
          if (7 < uVar13) {
            do {
              lVar9 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *
                                                  )(lVar9 + 0x278) + 0x278) + 0x278) + 0x278) +
                                                  0x278) + 0x278) + 0x278) + 0x278);
              uVar12 = uVar12 - 8;
            } while (uVar12 != 0);
          }
        }
        lVar3 = *(long *)(lVar9 + 0x160);
        lVar4 = lVar9;
        lVar9 = 0;
      }
      else {
        lVar3 = *(long *)(lVar4 + 0x160);
      }
      while (lVar6 = lVar3, lVar6 != 0) {
        bVar16 = lVar9 == 0;
        lVar9 = lVar9 + 1;
        uVar11 = 0x2d8;
        if (bVar16) {
          uVar11 = 0x278;
        }
        (*(code *)puVar7)(lVar4,uVar11,8);
        lVar4 = lVar6;
        lVar3 = *(long *)(lVar6 + 0x160);
      }
      uVar11 = 0x2d8;
      if (lVar9 == 0) {
        uVar11 = 0x278;
      }
      (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_001d3048)(lVar4,uVar11,8);
    }
    *param_1 = 0;
    return;
  }
  param_2[8] = param_2[8] + -1;
  if ((int)*param_2 != 1) {
    (*(code *)PTR__RNvNtCs4NRVxsYgnAr_4core6option13unwrap_failed_001d30c0)(&UNK_001cf388);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar13 = param_2[1];
  if (uVar13 == 0) {
    uVar13 = param_2[2];
    uVar12 = param_2[3];
    if (uVar12 != 0) {
      uVar14 = uVar12;
      if ((uVar12 & 7) != 0) {
        uVar14 = 0;
        do {
          uVar13 = *(ulong *)(uVar13 + 0x278);
          uVar14 = uVar14 + 1;
        } while ((uVar12 & 7) != uVar14);
        uVar14 = uVar12 - uVar14;
      }
      if (7 < uVar12) {
        do {
          uVar13 = *(ulong *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(
                                                  uVar13 + 0x278) + 0x278) + 0x278) + 0x278) + 0x278
                                                  ) + 0x278) + 0x278) + 0x278);
          uVar14 = uVar14 - 8;
        } while (uVar14 != 0);
      }
    }
    *param_2 = 1;
    param_2[1] = uVar13;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  puVar7 = PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_001d3048;
  uVar12 = param_2[2];
  uVar14 = param_2[3];
  uVar10 = (ulong)*(ushort *)(uVar13 + 0x272);
  if (uVar10 <= uVar14) {
    do {
      uVar15 = *(ulong *)(uVar13 + 0x160);
      if (uVar15 == 0) {
        uVar11 = 0x2d8;
        if (uVar12 == 0) {
          uVar11 = 0x278;
        }
        (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_001d3048)(uVar13,uVar11,8);
        (*(code *)PTR__RNvNtCs4NRVxsYgnAr_4core6option13unwrap_failed_001d30c0)(&UNK_001cf3a0);
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uVar1 = uVar12 + 1;
      uVar2 = *(ushort *)(uVar13 + 0x270);
      uVar14 = (ulong)uVar2;
      uVar11 = 0x2d8;
      if (uVar12 == 0) {
        uVar11 = 0x278;
      }
      (*(code *)puVar7)(uVar13,uVar11,8);
      uVar12 = uVar1;
      uVar13 = uVar15;
    } while (*(ushort *)(uVar15 + 0x272) <= uVar2);
  }
  if (uVar12 == 0) {
    lVar9 = uVar14 + 1;
    uVar10 = uVar13;
  }
  else {
    puVar8 = (ulong *)(uVar13 + uVar14 * 8 + 0x280);
    uVar15 = uVar12;
    if ((uVar12 & 7) != 0) {
      uVar15 = 0;
      do {
        uVar10 = *puVar8;
        puVar8 = (ulong *)(uVar10 + 0x278);
        uVar15 = uVar15 + 1;
      } while ((uVar12 & 7) != uVar15);
      uVar15 = uVar12 - uVar15;
    }
    lVar9 = 0;
    if (7 < uVar12) {
      do {
        lVar9 = 0;
        uVar10 = *(ulong *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*puVar8 +
                                                                                       0x278) +
                                                                             0x278) + 0x278) + 0x278
                                                         ) + 0x278) + 0x278) + 0x278);
        puVar8 = (ulong *)(uVar10 + 0x278);
        uVar15 = uVar15 - 8;
      } while (uVar15 != 0);
    }
  }
  param_2[1] = uVar10;
  param_2[2] = 0;
  param_2[3] = lVar9;
  *param_1 = uVar13;
  param_1[1] = uVar12;
  param_1[2] = uVar14;
  return;
}


