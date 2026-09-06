// 00405170  undefined _RNvNtCs39mte1n7CTo_9node_repl12computer_use19table_app_is_listed(void)

long _RNvNtCs39mte1n7CTo_9node_repl12computer_use19table_app_is_listed
               (long *param_1,undefined8 param_2,ulong param_3,long param_4,char *param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  long *plVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  long lStack_48;
  
  if ((param_1 != (long *)0x0) && (lVar7 = *param_1, lVar7 != 0)) {
    lStack_48 = param_1[1];
    while( true ) {
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x272);
      lVar11 = (ulong)((uint)*(ushort *)(lVar7 + 0x272) * 8) * 3;
      uVar15 = 0xffffffffffffffff;
      lVar16 = lVar7 + 0x168;
      pcVar12 = (char *)(lVar7 + -6);
      do {
        pcVar9 = pcVar12;
        if (lVar11 == 0) goto code_r0x00405245;
        lVar6 = lVar16 + 0x18;
        uVar3 = *(ulong *)(lVar16 + 0x10);
        uVar10 = uVar3;
        if (param_3 < uVar3) {
          uVar10 = param_3;
        }
        iVar5 = (*(code *)PTR_memcmp_01084ac8)(param_2,*(undefined8 *)(lVar16 + 8),uVar10);
        lVar17 = param_3 - uVar3;
        if (iVar5 != 0) {
          lVar17 = (long)iVar5;
        }
        uVar15 = uVar15 + 1;
        lVar11 = lVar11 + -0x18;
        lVar16 = lVar6;
        pcVar12 = pcVar9 + 0x20;
      } while ((char)((0 < lVar17) - (lVar17 < 0)) == '\x01');
      uVar8 = uVar15;
      if (0 < lVar17 == lVar17 < 0) break;
code_r0x00405245:
      bVar18 = lStack_48 == 0;
      lStack_48 = lStack_48 + -1;
      if (bVar18) {
        return 0;
      }
      lVar7 = *(long *)(lVar7 + 0x278 + uVar8 * 8);
    }
    if ((pcVar9[0x20] == '\a') && (*(long *)(pcVar9 + 0x16) != 0)) {
      lVar7 = *(long *)(pcVar9 + 0xe);
      lVar16 = *(long *)(pcVar9 + 0x16) * 0x20;
      if ((char *)0xf < param_5) {
        lVar11 = 0;
        goto code_r0x004053cf;
      }
      lVar16 = lVar16 + lVar7;
      do {
        if (*(char *)(lVar7 + 0x1a) == '\x02') {
          auVar19 = _RINvMNtCs7x1JxYRm7tp_4core3stre12trim_matchesNvMNtNtB5_4char7methodsc13is_whitespaceECs39mte1n7CTo_9node_repl
                              (*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10));
          pcVar12 = auVar19._8_8_;
          lVar17 = auVar19._0_8_;
          if ((lVar17 != 0) && (pcVar12 != (char *)0x0)) {
            if ((long)pcVar12 < 0) {
              (*(code *)PTR__RNvNtCskPe9mFtgPYj_5alloc7raw_vec12handle_error_01084288)(0,lVar11);
              do {
                (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_01084ef0)
                          (lVar6,pcVar12,1);
                while( true ) {
                  do {
                    do {
                      lVar11 = lVar11 + 0x20;
                      if (lVar16 == lVar11) {
                        return 0;
                      }
code_r0x004053cf:
                    } while (*(char *)(lVar7 + 0x1a + lVar11) != '\x02');
                    auVar19 = _RINvMNtCs7x1JxYRm7tp_4core3stre12trim_matchesNvMNtNtB5_4char7methodsc13is_whitespaceECs39mte1n7CTo_9node_repl
                                        (*(undefined8 *)(lVar7 + 8 + lVar11),
                                         *(undefined8 *)(lVar7 + 0x10 + lVar11));
                    pcVar12 = auVar19._8_8_;
                  } while ((auVar19._0_8_ == 0) || (pcVar12 == (char *)0x0));
                  if ((long)pcVar12 < 0) {
                    (*(code *)PTR__RNvNtCskPe9mFtgPYj_5alloc7raw_vec12handle_error_01084288)
                              (0,lVar6);
                    goto code_r0x0040547b;
                  }
                  _RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2();
                  lVar6 = (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_01085810)
                                    (pcVar12,1);
                  if (lVar6 == 0) goto code_r0x00405490;
                  (*(code *)PTR_memcpy_01081c18)(lVar6,auVar19._0_8_,pcVar12);
                  if (pcVar12 != param_5) break;
                  cVar4 = _RINvMNtNtCs7x1JxYRm7tp_4core5slice5asciiSh27eq_ignore_ascii_case_chunksKj10_ECs39mte1n7CTo_9node_repl
                                    (lVar6,param_5,param_4);
                  (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_01084ef0)
                            (lVar6,param_5,1);
                  if (cVar4 != '\0') {
                    return 1;
                  }
                }
              } while( true );
            }
            _RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2();
            lVar11 = (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_01085810)(pcVar12,1);
            if (lVar11 == 0) {
code_r0x00405490:
              plVar13 = (long *)0x1;
              lVar7 = (*(code *)PTR__RNvNtCskPe9mFtgPYj_5alloc7raw_vec12handle_error_01084288)();
              if (*pcVar12 == '\x03') {
                auVar19 = _RINvMNtCs7x1JxYRm7tp_4core3stre12trim_matchesNvMNtNtB5_4char7methodsc13is_whitespaceECs39mte1n7CTo_9node_repl
                                    (*(undefined8 *)(pcVar12 + 0x10),*(undefined8 *)(pcVar12 + 0x18)
                                    );
                lVar11 = auVar19._8_8_;
                lVar7 = auVar19._0_8_;
                if ((lVar7 != 0) && (lVar11 != 0)) {
                  if (lVar11 < 0) {
                    uVar14 = 0;
                  }
                  else {
                    (*(code *)
                      PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01084408
                    )();
                    uVar14 = 1;
                    lVar16 = (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_01085810)
                                       (lVar11,1);
                    if (lVar16 != 0) {
                      lVar7 = (*(code *)PTR_memcpy_01081c18)(lVar16,lVar7,lVar11);
                      *plVar13 = lVar11;
                      plVar13[1] = lVar16;
                      plVar13[2] = lVar11;
                      return lVar7;
                    }
                  }
                  lVar7 = (*(code *)PTR__RNvNtCskPe9mFtgPYj_5alloc7raw_vec12handle_error_01084288)
                                    (uVar14,lVar11);
                }
              }
              *plVar13 = -1;
              return lVar7;
            }
            memcpy(lVar11,lVar17,pcVar12);
            if (pcVar12 == param_5) {
              pcVar9 = (char *)0x0;
              do {
                if (param_5 == pcVar9) {
code_r0x0040547b:
                  (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_01084ef0)(lVar11);
                  return 1;
                }
                pbVar1 = (byte *)(pcVar9 + lVar11);
                pbVar2 = (byte *)(pcVar9 + param_4);
                pcVar9 = pcVar9 + 1;
              } while ((byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1) ==
                       (byte)(((byte)(*pbVar2 + 0xbf) < 0x1a) << 5 | *pbVar2));
            }
            _RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc(lVar11,pcVar12,1);
            lVar6 = lVar17;
          }
        }
        lVar7 = lVar7 + 0x20;
        if (lVar7 == lVar16) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}


