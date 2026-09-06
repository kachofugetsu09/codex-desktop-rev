// 00408d60  undefined _RNvXs_NtCs39mte1n7CTo_9node_repl12computer_useNtB4_33ComputerUseElicitationInterceptorNtNtB6_12repl_manager22ElicitationInterceptor9on_result(void)

undefined8 *
_RNvXs_NtCs39mte1n7CTo_9node_repl12computer_useNtB4_33ComputerUseElicitationInterceptorNtNtB6_12repl_manager22ElicitationInterceptor9on_result
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  code *pcVar4;
  int *******pppppppiVar5;
  byte bVar6;
  undefined8 *puVar7;
  int ******ppppppiVar8;
  int *******pppppppiVar9;
  int ******ppppppiVar10;
  int ******ppppppiVar11;
  int ******ppppppiVar12;
  long *plVar13;
  char cVar14;
  int iVar15;
  long lVar16;
  undefined8 uVar17;
  int *piVar18;
  long lVar19;
  int *******pppppppiVar20;
  ulong uVar21;
  ulong uVar22;
  long extraout_RDX;
  long *plVar23;
  int *******pppppppiVar24;
  undefined *puVar25;
  ulong uVar26;
  int *******pppppppiVar27;
  long lVar28;
  long lVar29;
  bool bVar30;
  undefined1 auVar31 [16];
  int ******ppppppiStack_3c0;
  undefined1 uStack_379;
  undefined8 *puStack_378;
  int ******ppppppiStack_370;
  int ******ppppppiStack_368;
  code *pcStack_360;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  int ******ppppppiStack_348;
  int ******ppppppiStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  int ******ppppppiStack_310;
  int ******ppppppiStack_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_258;
  undefined8 uStack_250;
  int ******ppppppiStack_248;
  int ******ppppppiStack_238;
  int ******ppppppiStack_230;
  int ******ppppppiStack_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  int *piStack_1e0;
  int ******ppppppiStack_1d8;
  int ******ppppppiStack_1d0;
  int ******ppppppiStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  int ******ppppppiStack_1b0;
  int ******ppppppiStack_1a8;
  undefined1 auStack_1a0 [168];
  int ******ppppppiStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int ******ppppppiStack_e0;
  undefined1 auStack_d8 [144];
  long lStack_48;
  undefined8 uStack_40;
  
  _RNvNtCs39mte1n7CTo_9node_repl12computer_use25computer_use_request_info(&uStack_320,param_3);
  if (uStack_320 == (int *******)0xffffffffffffffff) {
    *param_1 = 0xffffffffffffffff;
    return param_1;
  }
  uStack_328 = CONCAT44(uStack_2ec,uStack_2f0);
  uStack_338 = CONCAT44(uStack_2fc,uStack_300);
  uStack_330 = CONCAT44(uStack_2f4,uStack_2f8);
  ppppppiStack_348 = ppppppiStack_310;
  ppppppiStack_340 = ppppppiStack_308;
  uStack_358 = (int)uStack_320;
  uStack_354 = uStack_320._4_4_;
  uStack_350 = (undefined4)uStack_318;
  uStack_34c = uStack_318._4_4_;
  piVar18 = *(int **)(param_4 + 8);
  if (*(long *)(param_4 + 0x10) == 6) {
    if ((short)piVar18[1] == 0x7470 && *piVar18 == 0x65636361) {
      bVar6 = 0;
      cVar14 = *(char *)(param_4 + 0x18);
      cVar3 = *(char *)(param_4 + 0x38);
      goto joined_r0x00408e55;
    }
  }
  else if ((*(long *)(param_4 + 0x10) == 7) &&
          (*(int *)((long)piVar18 + 3) == 0x656e696c && *piVar18 == 0x6c636564)) {
    bVar6 = 1;
    cVar14 = *(char *)(param_4 + 0x18);
    cVar3 = *(char *)(param_4 + 0x38);
joined_r0x00408e55:
    if ((cVar3 == '\x05') && (lVar19 = *(long *)(param_4 + 0x40), lVar19 != 0)) {
      ppppppiStack_3c0 = *(int *******)(param_4 + 0x48);
      while( true ) {
        uVar21 = (ulong)*(ushort *)(lVar19 + 0x272);
        lVar29 = (ulong)((uint)*(ushort *)(lVar19 + 0x272) * 8) * 3;
        uVar26 = 0xffffffffffffffff;
        lVar16 = lVar19 + 0x168;
        plVar13 = (long *)(lVar19 + -8);
        do {
          plVar23 = plVar13;
          if (lVar29 == 0) goto code_r0x00408f1f;
          uVar22 = *(ulong *)(lVar16 + 0x10);
          lVar28 = uVar22 - 7;
          if (6 < uVar22) {
            uVar22 = 7;
          }
          iVar15 = (*(code *)PTR_memcmp_01084ac8)(&UNK_00d222c9,*(undefined8 *)(lVar16 + 8),uVar22);
          lVar28 = -lVar28;
          if (iVar15 != 0) {
            lVar28 = (long)iVar15;
          }
          uVar26 = uVar26 + 1;
          lVar29 = lVar29 + -0x18;
          lVar16 = lVar16 + 0x18;
          plVar13 = plVar23 + 4;
        } while ((char)((0 < lVar28) - (lVar28 < 0)) == '\x01');
        uVar21 = uVar26;
        if (0 < lVar28 == lVar28 < 0) break;
code_r0x00408f1f:
        bVar30 = ppppppiStack_3c0 == (int ******)0x0;
        ppppppiStack_3c0 = (int ******)((long)ppppppiStack_3c0 + -1);
        if (bVar30) goto code_r0x00408f8b;
        lVar19 = *(long *)(lVar19 + 0x278 + uVar21 * 8);
      }
      if ((char)plVar23[1] == '\x03') {
        piVar18 = (int *)plVar23[3];
        lVar19 = plVar23[4];
        if (lVar19 == 6) {
          if ((short)piVar18[1] == 0x7379 && *piVar18 == 0x61776c61) goto code_r0x004090a5;
        }
        else if ((lVar19 == 7) &&
                (*(int *)((long)piVar18 + 3) == 0x6e6f6973 && *piVar18 == 0x73736573))
        goto code_r0x004092c2;
      }
    }
code_r0x00408f8b:
    if ((cVar14 == '\x05') && (lVar19 = *(long *)(param_4 + 0x20), lVar19 != 0)) {
      ppppppiStack_3c0 = *(int *******)(param_4 + 0x28);
      while( true ) {
        uVar21 = (ulong)*(ushort *)(lVar19 + 0x272);
        lVar29 = (ulong)((uint)*(ushort *)(lVar19 + 0x272) * 8) * 3;
        uVar26 = 0xffffffffffffffff;
        lVar16 = lVar19 + 0x168;
        plVar13 = (long *)(lVar19 + -8);
        do {
          plVar23 = plVar13;
          if (lVar29 == 0) goto code_r0x00409041;
          uVar22 = *(ulong *)(lVar16 + 0x10);
          lVar28 = uVar22 - 7;
          if (6 < uVar22) {
            uVar22 = 7;
          }
          iVar15 = (*(code *)PTR_memcmp_01084ac8)(&UNK_00d222c9,*(undefined8 *)(lVar16 + 8),uVar22);
          lVar28 = -lVar28;
          if (iVar15 != 0) {
            lVar28 = (long)iVar15;
          }
          uVar26 = uVar26 + 1;
          lVar29 = lVar29 + -0x18;
          lVar16 = lVar16 + 0x18;
          plVar13 = plVar23 + 4;
        } while ((char)((0 < lVar28) - (lVar28 < 0)) == '\x01');
        uVar21 = uVar26;
        if (0 < lVar28 == lVar28 < 0) break;
code_r0x00409041:
        bVar30 = ppppppiStack_3c0 == (int ******)0x0;
        ppppppiStack_3c0 = (int ******)((long)ppppppiStack_3c0 + -1);
        if (bVar30) goto code_r0x00409260;
        lVar19 = *(long *)(lVar19 + 0x278 + uVar21 * 8);
      }
      if ((char)plVar23[1] == '\x03') {
        piVar18 = (int *)plVar23[3];
        lVar19 = plVar23[4];
        if (lVar19 == 7) {
          if (*(int *)((long)piVar18 + 3) == 0x6e6f6973 && *piVar18 == 0x73736573)
          goto code_r0x004092c2;
        }
        else if ((lVar19 == 6) && ((short)piVar18[1] == 0x7379 && *piVar18 == 0x61776c61))
        goto code_r0x004090a5;
      }
    }
  }
code_r0x00409260:
  *param_1 = 0xffffffffffffffff;
  goto code_r0x0040926d;
code_r0x004092c2:
  bVar30 = false;
  goto code_r0x004092c4;
code_r0x00409da5:
  (*(code *)PTR__RNvNtCskPe9mFtgPYj_5alloc7raw_vec12handle_error_01084288)
            (uStack_318,ppppppiStack_310);
  goto code_r0x00409ddd;
code_r0x004090a5:
  bVar30 = true;
  if (bVar6 == 0) {
    if ((char)uStack_328 != '\x01') goto code_r0x00409260;
    if (((((int *******)ppppppiStack_348 == (int *******)0xe) &&
         (pbVar1 = (byte *)CONCAT44(uStack_34c,uStack_350),
         (byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1) == 99)) &&
        ((byte)(((byte)(pbVar1[1] + 0xbf) < 0x1a) << 5 | pbVar1[1]) == 0x6f)) &&
       (((byte)(((byte)(pbVar1[2] + 0xbf) < 0x1a) << 5 | pbVar1[2]) == 0x6d &&
        ((byte)(((byte)(pbVar1[3] + 0xbf) < 0x1a) << 5 | pbVar1[3]) == 0x70)))) {
      if ((((byte)(((byte)(pbVar1[4] + 0xbf) < 0x1a) << 5 | pbVar1[4]) == 0x75) &&
          (((byte)(((byte)(pbVar1[5] + 0xbf) < 0x1a) << 5 | pbVar1[5]) == 0x74 &&
           ((byte)(((byte)(pbVar1[6] + 0xbf) < 0x1a) << 5 | pbVar1[6]) == 0x65)))) &&
         (((byte)(((byte)(pbVar1[7] + 0xbf) < 0x1a) << 5 | pbVar1[7]) == 0x72 &&
          (((((byte)(((byte)(pbVar1[8] + 0xbf) < 0x1a) << 5 | pbVar1[8]) == 0x2d &&
             ((byte)(((byte)(pbVar1[9] + 0xbf) < 0x1a) << 5 | pbVar1[9]) == 0x61)) &&
            ((byte)(((byte)(pbVar1[10] + 0xbf) < 0x1a) << 5 | pbVar1[10]) == 0x75)) &&
           (((byte)(((byte)(pbVar1[0xb] + 0xbf) < 0x1a) << 5 | pbVar1[0xb]) == 100 &&
            ((byte)(((byte)(pbVar1[0xc] + 0xbf) < 0x1a) << 5 | pbVar1[0xc]) == 0x69)))))))) {
        bVar30 = true;
        if ((byte)(((byte)(pbVar1[0xd] + 0xbf) < 0x1a) << 5 | pbVar1[0xd]) == 0x6f)
        goto code_r0x00409260;
      }
      else {
        bVar30 = true;
      }
    }
  }
code_r0x004092c4:
  _RNvNtCs39mte1n7CTo_9node_repl12computer_use23computer_use_state_path(&uStack_320);
  ppppppiVar10 = ppppppiStack_310;
  pppppppiVar9 = (int *******)uStack_318;
  if ((int)uStack_320 == 1) {
    *param_1 = uStack_318;
    param_1[1] = ppppppiStack_310;
    param_1[2] = ppppppiStack_308;
    goto code_r0x0040926d;
  }
  if (bVar30) {
    ppppppiStack_3c0 = (int ******)uStack_318;
    ppppppiStack_370 = ppppppiStack_308;
    pppppppiVar24 = (int *******)ppppppiStack_310;
code_r0x00409389:
    (*(code *)PTR__RNvNtNtCs268jdzri8zx_3std3sys2fs8metadata_01084d48)(&uStack_320,pppppppiVar24);
    if ((int)uStack_320 == 1) {
      _RINvNtCs7x1JxYRm7tp_4core3ptr9drop_glueNtNtNtCs268jdzri8zx_3std2io5error5ErrorECs39mte1n7CTo_9node_repl
                (uStack_318);
      (*(code *)PTR__RNvMs7_NtCsleeWMjgK1Yj_9toml_edit8documentNtB5_11DocumentMut3new_010867c0)
                (&uStack_1c0);
code_r0x004095e7:
      pppppppiVar20 = uStack_1c0;
      uStack_258 = (int *******)uStack_1b8;
      uStack_250 = (int *******)ppppppiStack_1b0;
      ppppppiStack_248 = ppppppiStack_1a8;
      if (uStack_1c0 == (int *******)0xffffffffffffffff) goto code_r0x004096a5;
      (*(code *)PTR_memcpy_01081c18)(auStack_d8,auStack_1a0,0xa8);
      uStack_f0 = (undefined4)uStack_258;
      uStack_ec = uStack_258._4_4_;
      uStack_e8 = (undefined4)uStack_250;
      uStack_e4 = uStack_250._4_4_;
      ppppppiStack_e0 = ppppppiStack_248;
      ppppppiStack_f8 = (int ******)pppppppiVar20;
      uVar17 = (*(code *)
                 PTR__RNvMs7_NtCsleeWMjgK1Yj_9toml_edit8documentNtB5_11DocumentMut12as_table_mut_01085e50
               )(&ppppppiStack_f8);
      (*(code *)PTR__RNvMs0_NtCsleeWMjgK1Yj_9toml_edit5tableNtB5_5Table5entry_01084550)
                (&uStack_320,uVar17,&UNK_00c9b204,4);
      piVar18 = (int *)_RINvMs7_NtCsleeWMjgK1Yj_9toml_edit5tableNtB6_5Entry14or_insert_withNCNvNtCs39mte1n7CTo_9node_repl12computer_use27computer_use_apps_table_mut0EB19_
                                 (&uStack_320);
      if (*piVar18 == 10) {
        pppppppiVar20 = (int *******)(piVar18 + 2);
code_r0x00409745:
        ppppppiVar8 = ppppppiStack_348;
        puVar25 = &UNK_00d2267e;
        pppppppiVar27 = (int *******)&UNK_00d22677;
        if (bVar6 != 0) {
          pppppppiVar27 = (int *******)&UNK_00d2267e;
          puVar25 = &UNK_00d22677;
        }
        pppppppiVar5 = (int *******)CONCAT44(uStack_34c,uStack_350);
        piVar18 = (int *)(*(code *)
                           PTR__RNvXs6_NtCsleeWMjgK1Yj_9toml_edit5tableNtB5_5TableNtB5_9TableLike7get_mut_01081c88
                         )(pppppppiVar20,puVar25,(ulong)bVar6 + 6);
        if ((piVar18 != (int *)0x0) && (*piVar18 == 7)) {
          uStack_318 = (code *)ppppppiVar8;
          uStack_320 = pppppppiVar5;
          _RINvMs_NtCskPe9mFtgPYj_5alloc3vecINtB5_3VecNtNtCsleeWMjgK1Yj_9toml_edit4item4ItemE6retainNCINvMs0_NtBJ_5arrayNtB1y_5Array6retainNCNvNtCs39mte1n7CTo_9node_repl12computer_use21remove_app_from_table0E0EB28_
                    (piVar18 + 8,&uStack_320);
        }
        ppppppiStack_230 = (int ******)((ulong)bVar6 ^ 7);
        ppppppiStack_238 = (int ******)pppppppiVar27;
        (*(code *)PTR__RNvMs0_NtCsleeWMjgK1Yj_9toml_edit5tableNtB5_5Table5entry_01084550)
                  (&uStack_320,pppppppiVar20,pppppppiVar27,ppppppiStack_230);
        piVar18 = (int *)_RINvMs7_NtCsleeWMjgK1Yj_9toml_edit5tableNtB6_5Entry14or_insert_withNCNvNtCs39mte1n7CTo_9node_repl12computer_use19append_app_to_table0EB19_
                                   (&uStack_320);
        if (*piVar18 == 7) {
          auVar31 = (*(code *)PTR__RNvMs0_NtCsleeWMjgK1Yj_9toml_edit5arrayNtB5_5Array4iter_01082f88)
                              (piVar18 + 2);
          puStack_378 = auVar31._8_8_;
          uVar17 = auVar31._0_8_;
          pcVar4 = (code *)puStack_378[3];
          piStack_1e0 = piVar18;
          if (ppppppiVar8 < (int *******)0x10) {
            while (piVar18 = (int *)(*pcVar4)(uVar17), piVar18 != (int *)0x0) {
              if (*piVar18 == 2) {
                auVar31 = _RINvMNtCs7x1JxYRm7tp_4core3stre12trim_matchesNvMNtNtB5_4char7methodsc13is_whitespaceECs39mte1n7CTo_9node_repl
                                    (*(undefined8 *)(piVar18 + 4),*(undefined8 *)(piVar18 + 6));
                pppppppiVar20 = auVar31._8_8_;
                if ((auVar31._0_8_ != 0) && (pppppppiVar20 != (int *******)0x0)) {
                  _RNvMs4_NtCskPe9mFtgPYj_5alloc7raw_vecNtB5_11RawVecInner15try_allocate_inCs39mte1n7CTo_9node_repl
                            (&uStack_320,pppppppiVar20,0,1,1);
                  ppppppiVar11 = ppppppiStack_310;
                  pppppppiVar27 = (int *******)uStack_318;
                  if ((int)uStack_320 == 1) goto code_r0x00409da5;
                  (*(code *)PTR_memcpy_01081c18)(ppppppiStack_310,auVar31._0_8_,pppppppiVar20);
                  if (pppppppiVar20 == (int *******)ppppppiVar8) {
                    pppppppiVar20 = (int *******)0x0;
                    do {
                      if ((int *******)ppppppiVar8 == pppppppiVar20) {
                        (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_01084ef0)
                                  (ppppppiVar11,pppppppiVar27,1);
                        goto code_r0x00409b45;
                      }
                      pbVar2 = (byte *)((long)ppppppiVar11 + (long)pppppppiVar20);
                      pbVar1 = (byte *)((long)pppppppiVar5 + (long)pppppppiVar20);
                      pppppppiVar20 = (int *******)((long)pppppppiVar20 + 1);
                    } while ((byte)(((byte)(*pbVar2 + 0xbf) < 0x1a) << 5 | *pbVar2) ==
                             (byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1));
                  }
                  (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_01084ef0)
                            (ppppppiVar11,pppppppiVar27,1);
                }
              }
            }
code_r0x00409a9e:
            puVar7 = puStack_378;
            if ((code *)*puStack_378 != (code *)0x0) {
              (*(code *)*puStack_378)(uVar17);
            }
            lVar19 = puVar7[1];
            if (lVar19 != 0) {
              (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_01084ef0)
                        (uVar17,lVar19,puVar7[2]);
            }
            (*(code *)
              PTR__RNvXs2_NtCsleeWMjgK1Yj_9toml_edit5valueNtB5_5ValueINtNtCs7x1JxYRm7tp_4core7convert4FromReE4from_010824d0
            )(&uStack_320,pppppppiVar5,ppppppiVar8);
            piVar18 = piStack_1e0;
            lVar19 = *(long *)(piStack_1e0 + 0xc);
            if (lVar19 == *(long *)(piStack_1e0 + 8)) {
              (*(code *)
                PTR__RNvMs3_NtCskPe9mFtgPYj_5alloc7raw_vecINtB5_6RawVecNtNtCsleeWMjgK1Yj_9toml_edit4item4ItemE8grow_oneBQ__01080ba0
              )(piStack_1e0 + 8);
            }
            (*(code *)PTR_memcpy_01081c18)(lVar19 * 0xb0 + *(long *)(piVar18 + 10),&uStack_320,0xb0)
            ;
            *(long *)(piVar18 + 0xc) = lVar19 + 1;
            pppppppiVar20 = (int *******)ppppppiStack_370;
          }
          else {
            do {
              while( true ) {
                do {
                  do {
                    piVar18 = (int *)(*pcVar4)(uVar17);
                    if (piVar18 == (int *)0x0) goto code_r0x00409a9e;
                  } while (*piVar18 != 2);
                  auVar31 = _RINvMNtCs7x1JxYRm7tp_4core3stre12trim_matchesNvMNtNtB5_4char7methodsc13is_whitespaceECs39mte1n7CTo_9node_repl
                                      (*(undefined8 *)(piVar18 + 4),*(undefined8 *)(piVar18 + 6));
                  pppppppiVar20 = auVar31._8_8_;
                } while ((auVar31._0_8_ == 0) || (pppppppiVar20 == (int *******)0x0));
                _RNvMs4_NtCskPe9mFtgPYj_5alloc7raw_vecNtB5_11RawVecInner15try_allocate_inCs39mte1n7CTo_9node_repl
                          (&uStack_320,pppppppiVar20,0,1,1);
                ppppppiVar11 = ppppppiStack_310;
                pppppppiVar27 = (int *******)uStack_318;
                if ((char)uStack_320 != '\0') goto code_r0x00409da5;
                (*(code *)PTR_memcpy_01081c18)(ppppppiStack_310,auVar31._0_8_,pppppppiVar20);
                if (pppppppiVar20 == (int *******)ppppppiVar8) break;
                (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_01084ef0)
                          (ppppppiVar11,pppppppiVar27,1);
              }
              cVar14 = _RINvMNtNtCs7x1JxYRm7tp_4core5slice5asciiSh27eq_ignore_ascii_case_chunksKj10_ECs39mte1n7CTo_9node_repl
                                 (ppppppiVar11,ppppppiVar8,pppppppiVar5,ppppppiVar8);
              (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_01084ef0)
                        (ppppppiVar11,pppppppiVar27,1);
            } while (cVar14 == '\0');
code_r0x00409b45:
            puVar7 = puStack_378;
            if ((code *)*puStack_378 != (code *)0x0) {
              (*(code *)*puStack_378)(uVar17);
            }
            pppppppiVar20 = (int *******)ppppppiStack_370;
            lVar19 = puVar7[1];
            if (lVar19 != 0) {
              (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_01084ef0)
                        (uVar17,lVar19,puVar7[2]);
            }
          }
        }
        else {
          uStack_320 = (int *******)&UNK_01033d08;
          uStack_318 = _RNvXs1i_NtCs7x1JxYRm7tp_4core3fmtReNtB6_7Display3fmtCs39mte1n7CTo_9node_repl
          ;
          ppppppiStack_310 = (int ******)&ppppppiStack_238;
          ppppppiStack_308 =
               (int ******)
               _RNvXs1i_NtCs7x1JxYRm7tp_4core3fmtReNtB6_7Display3fmtCs39mte1n7CTo_9node_repl;
          (*(code *)PTR__RNvNvNtCskPe9mFtgPYj_5alloc3fmt6format12format_inner_01082008)
                    (&uStack_1c0,&UNK_00c7d493,&uStack_320);
          pppppppiVar20 = (int *******)ppppppiStack_370;
          if (uStack_1c0 != (int *******)0xffffffffffffffff) {
            param_1[2] = ppppppiStack_1b0;
            *(undefined4 *)param_1 = (undefined4)uStack_1c0;
            *(undefined4 *)((long)param_1 + 4) = uStack_1c0._4_4_;
            *(undefined4 *)(param_1 + 1) = (undefined4)uStack_1b8;
            *(undefined4 *)((long)param_1 + 0xc) = uStack_1b8._4_4_;
            goto code_r0x00409990;
          }
        }
        lVar19 = (*(code *)PTR__RNvMs16_NtCs268jdzri8zx_3std4pathNtB6_4Path6parent_010824d8)
                           (pppppppiVar24,pppppppiVar20);
        if (lVar19 == 0) {
code_r0x00409c02:
          uStack_1c0 = (int *******)0x0;
          uStack_1b8 = (code *)0x1;
          ppppppiStack_1b0 = (int ******)0x0;
          ppppppiStack_310 = (int ******)0x60000020;
          uStack_320 = (int *******)&uStack_1c0;
          uStack_318 = (code *)&UNK_01034518;
          cVar14 = (*(code *)
                     PTR__RNvXNtCsleeWMjgK1Yj_9toml_edit6encodeNtNtB4_8document11DocumentMutNtNtCs7x1JxYRm7tp_4core3fmt7Display3fmt_01085980
                   )(&ppppppiStack_f8,&uStack_320);
          if (cVar14 != '\0') {
            (*(code *)PTR__RNvNtCs7x1JxYRm7tp_4core6result13unwrap_failed_01086330)
                      (&UNK_00d228ea,0x37,&uStack_379,&UNK_01033dc8,&UNK_01034548);
code_r0x00409ddd:
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          ppppppiStack_228 = ppppppiStack_1b0;
          ppppppiStack_238 = (int ******)uStack_1c0;
          ppppppiStack_230 = (int ******)uStack_1b8;
          pppppppiVar20 =
               (int *******)
               _RINvNtCs268jdzri8zx_3std2fs5writeRNtNtB4_4path4PathNtNtCskPe9mFtgPYj_5alloc6string6StringECs39mte1n7CTo_9node_repl
                         (pppppppiVar24,ppppppiStack_370,&ppppppiStack_238);
          if (pppppppiVar20 != (int *******)0x0) {
            uStack_1b8 = 
            _RNvXs5_NtNtCs268jdzri8zx_3std2io5errorNtB5_5ErrorNtNtCs7x1JxYRm7tp_4core3fmt7Display3fmt
            ;
            ppppppiStack_238 = (int ******)pppppppiVar20;
            uStack_1c0 = &ppppppiStack_238;
            (*(code *)PTR__RNvNvNtCskPe9mFtgPYj_5alloc3fmt6format12format_inner_01082008)
                      (&uStack_320,&UNK_00c7d33c,&uStack_1c0);
            _RINvNtCs7x1JxYRm7tp_4core3ptr9drop_glueNtNtNtCs268jdzri8zx_3std2io5error5ErrorECs39mte1n7CTo_9node_repl
                      (ppppppiStack_238);
            goto code_r0x00409cf5;
          }
          *param_1 = 0xffffffffffffffff;
        }
        else {
          uStack_320 = (int *******)CONCAT35(uStack_320._5_3_,0x1000001ff);
          pppppppiVar20 =
               (int *******)
               (*(code *)PTR__RNvMsD_NtCs268jdzri8zx_3std2fsNtB5_10DirBuilder7__create_010830c8)
                         (&uStack_320,lVar19);
          if (pppppppiVar20 == (int *******)0x0) goto code_r0x00409c02;
          uStack_1c0 = &ppppppiStack_238;
          uStack_1b8 = 
          _RNvXs5_NtNtCs268jdzri8zx_3std2io5errorNtB5_5ErrorNtNtCs7x1JxYRm7tp_4core3fmt7Display3fmt;
          ppppppiStack_238 = (int ******)pppppppiVar20;
          (*(code *)PTR__RNvNvNtCskPe9mFtgPYj_5alloc3fmt6format12format_inner_01082008)
                    (&uStack_320,&UNK_00c7d30a,&uStack_1c0);
          _RINvNtCs7x1JxYRm7tp_4core3ptr9drop_glueNtNtNtCs268jdzri8zx_3std2io5error5ErrorECs39mte1n7CTo_9node_repl
                    (ppppppiStack_238);
code_r0x00409cf5:
          param_1[2] = ppppppiStack_310;
          *(int *)param_1 = (int)uStack_320;
          *(undefined4 *)((long)param_1 + 4) = uStack_320._4_4_;
          *(undefined4 *)(param_1 + 1) = (undefined4)uStack_318;
          *(undefined4 *)((long)param_1 + 0xc) = uStack_318._4_4_;
        }
        _RINvNtCs7x1JxYRm7tp_4core3ptr9drop_glueNtNtCsleeWMjgK1Yj_9toml_edit4item4ItemECs39mte1n7CTo_9node_repl_llvm_13720879441590287736
                  (&ppppppiStack_f8);
      }
      else {
        uStack_320 = (int *******)&UNK_01033d08;
        uStack_318 = _RNvXs1i_NtCs7x1JxYRm7tp_4core3fmtReNtB6_7Display3fmtCs39mte1n7CTo_9node_repl;
        (*(code *)PTR__RNvNvNtCskPe9mFtgPYj_5alloc3fmt6format12format_inner_01082008)
                  (&uStack_1c0,&UNK_00c7d363,&uStack_320);
        pppppppiVar20 = (int *******)uStack_1b8;
        if (uStack_1c0 == (int *******)0xffffffffffffffff) goto code_r0x00409745;
        *param_1 = uStack_1c0;
        param_1[1] = uStack_1b8;
        param_1[2] = ppppppiStack_1b0;
code_r0x00409990:
        _RINvNtCs7x1JxYRm7tp_4core3ptr9drop_glueNtNtCsleeWMjgK1Yj_9toml_edit4item4ItemECs39mte1n7CTo_9node_repl_llvm_13720879441590287736
                  (&ppppppiStack_f8);
      }
      if ((-1 < lStack_48) && (lStack_48 != 0)) {
        (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_01084ef0)(uStack_40,lStack_48,1);
      }
    }
    else {
      (*(code *)PTR__RNvNvNtCs268jdzri8zx_3std2fs14read_to_string5inner_01086450)
                (&ppppppiStack_238,pppppppiVar24,ppppppiStack_370);
      ppppppiVar12 = ppppppiStack_228;
      ppppppiVar11 = ppppppiStack_230;
      ppppppiVar8 = ppppppiStack_238;
      if ((int *******)ppppppiStack_238 != (int *******)0xffffffffffffffff) {
        _RINvMNtCs7x1JxYRm7tp_4core3stre12trim_matchesNvMNtNtB5_4char7methodsc13is_whitespaceECs39mte1n7CTo_9node_repl
                  (ppppppiStack_230,ppppppiStack_228);
        if (extraout_RDX == 0) {
          (*(code *)PTR__RNvMs7_NtCsleeWMjgK1Yj_9toml_edit8documentNtB5_11DocumentMut3new_010867c0)
                    (&uStack_320);
code_r0x004095b1:
          (*(code *)PTR_memcpy_01081c18)(&uStack_1c0,&uStack_320,200);
        }
        else {
          (*(code *)
            PTR__RNvXs9_NtCsleeWMjgK1Yj_9toml_edit8documentNtB5_11DocumentMutNtNtNtCs7x1JxYRm7tp_4core3str6traits7FromStr8from_str_01086028
          )(&uStack_320,ppppppiVar11,ppppppiVar12);
          if ((int)uStack_320 != -1) goto code_r0x004095b1;
          uStack_1e8 = uStack_2c8;
          uStack_1f8 = uStack_2d8;
          uStack_1f0 = uStack_2d0;
          uStack_208 = uStack_2e8;
          uStack_204 = uStack_2e4;
          uStack_200 = uStack_2e0;
          uStack_1fc = uStack_2dc;
          uStack_218 = uStack_2f8;
          uStack_214 = uStack_2f4;
          uStack_210 = uStack_2f0;
          uStack_20c = uStack_2ec;
          ppppppiStack_228 = ppppppiStack_308;
          uStack_220 = uStack_300;
          uStack_21c = uStack_2fc;
          ppppppiStack_238 = (int ******)uStack_318;
          ppppppiStack_230 = ppppppiStack_310;
          pcStack_360 = 
          _RNvXs_NtCsleeWMjgK1Yj_9toml_edit5errorNtB4_9TomlErrorNtNtCs7x1JxYRm7tp_4core3fmt7Display3fmt
          ;
          ppppppiStack_368 = (int ******)&ppppppiStack_238;
          (*(code *)PTR__RNvNvNtCskPe9mFtgPYj_5alloc3fmt6format12format_inner_01082008)
                    (&ppppppiStack_1d8,&UNK_00c7d39f,&ppppppiStack_368);
          _RINvNtCs7x1JxYRm7tp_4core3ptr9drop_glueNtNtCsleeWMjgK1Yj_9toml_edit5error9TomlErrorECs39mte1n7CTo_9node_repl
                    (&ppppppiStack_238);
          uStack_1b8 = (code *)ppppppiStack_1d8;
          ppppppiStack_1b0 = ppppppiStack_1d0;
          ppppppiStack_1a8 = ppppppiStack_1c8;
          uStack_1c0 = (int *******)0xffffffffffffffff;
        }
        if ((int *******)ppppppiVar8 != (int *******)0x0) {
          (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_01084ef0)
                    (ppppppiVar11,ppppppiVar8,1);
        }
        goto code_r0x004095e7;
      }
      ppppppiStack_368 = ppppppiStack_230;
      ppppppiStack_1d8 = (int ******)&ppppppiStack_368;
      ppppppiStack_1d0 =
           (int ******)
           _RNvXs5_NtNtCs268jdzri8zx_3std2io5errorNtB5_5ErrorNtNtCs7x1JxYRm7tp_4core3fmt7Display3fmt
      ;
      (*(code *)PTR__RNvNvNtCskPe9mFtgPYj_5alloc3fmt6format12format_inner_01082008)
                (&uStack_320,&UNK_00c7d379,&ppppppiStack_1d8);
      _RINvNtCs7x1JxYRm7tp_4core3ptr9drop_glueNtNtNtCs268jdzri8zx_3std2io5error5ErrorECs39mte1n7CTo_9node_repl
                (ppppppiStack_368);
      uStack_1b8 = (code *)uStack_320;
      ppppppiStack_1b0 = (int ******)uStack_318;
      ppppppiStack_1a8 = ppppppiStack_310;
code_r0x004096a5:
      param_1[2] = ppppppiStack_1a8;
      uStack_258._0_4_ = SUB84(uStack_1b8,0);
      uStack_258._4_4_ = (undefined4)((ulong)uStack_1b8 >> 0x20);
      uStack_250._0_4_ = SUB84(ppppppiStack_1b0,0);
      uStack_250._4_4_ = (undefined4)((ulong)ppppppiStack_1b0 >> 0x20);
      *(undefined4 *)param_1 = (undefined4)uStack_258;
      *(undefined4 *)((long)param_1 + 4) = uStack_258._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_250;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_250._4_4_;
      uStack_258 = (int *******)uStack_1b8;
      uStack_250 = (int *******)ppppppiStack_1b0;
      ppppppiStack_248 = ppppppiStack_1a8;
    }
    if ((int *******)ppppppiStack_3c0 != (int *******)0x0) {
      (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_01084ef0)
                (pppppppiVar24,ppppppiStack_3c0,1);
    }
    if (bVar30 || pppppppiVar9 == (int *******)0x0) goto code_r0x0040926d;
  }
  else {
    if (((int *******)ppppppiStack_340 != (int *******)0xffffffffffffffff) &&
       (_RNvNtCs39mte1n7CTo_9node_repl12computer_use39resolve_computer_use_session_state_path
                  (&uStack_320,ppppppiStack_310,ppppppiStack_308,uStack_338,uStack_330),
       uStack_320 != (int *******)0xffffffffffffffff)) {
      ppppppiStack_3c0 = (int ******)uStack_320;
      ppppppiStack_370 = ppppppiStack_310;
      pppppppiVar24 = (int *******)uStack_318;
      goto code_r0x00409389;
    }
    *param_1 = 0xffffffffffffffff;
    if (pppppppiVar9 == (int *******)0x0) goto code_r0x0040926d;
  }
  (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_01084ef0)(ppppppiVar10,pppppppiVar9,1);
code_r0x0040926d:
  if (CONCAT44(uStack_354,uStack_358) != 0) {
    (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_01084ef0)
              (CONCAT44(uStack_34c,uStack_350),CONCAT44(uStack_354,uStack_358),1);
  }
  if (((int *******)ppppppiStack_340 != (int *******)0xffffffffffffffff) &&
     ((int *******)ppppppiStack_340 != (int *******)0x0)) {
    (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_01084ef0)
              (uStack_338,ppppppiStack_340,1);
  }
  return param_1;
}


