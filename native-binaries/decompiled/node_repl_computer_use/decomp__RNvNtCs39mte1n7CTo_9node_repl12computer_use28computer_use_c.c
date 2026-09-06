// 00406000  undefined _RNvNtCs39mte1n7CTo_9node_repl12computer_use28computer_use_conversation_id(void)

void _RNvNtCs39mte1n7CTo_9node_repl12computer_use28computer_use_conversation_id
               (long *param_1,long param_2,long param_3)

{
  ushort uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  long lStack_60;
  long lStack_58;
  long lStack_50;
  
  lVar13 = param_2;
  lStack_60 = param_3;
  if (param_2 != 0) {
    while( true ) {
      uVar1 = *(ushort *)(lVar13 + 0x272);
      lVar8 = (ulong)((uint)uVar1 * 8) * 3;
      uVar12 = 0xffffffffffffffff;
      lVar17 = lVar13 + 0x168;
      puVar3 = (undefined8 *)(lVar13 + -8);
      do {
        puVar7 = puVar3;
        uVar5 = (ulong)uVar1;
        lVar14 = param_3;
        lVar16 = param_2;
        if (lVar8 == 0) goto code_r0x004060c5;
        uVar5 = *(ulong *)(lVar17 + 0x10);
        lVar15 = uVar5 - 0xf;
        if (0xe < uVar5) {
          uVar5 = 0xf;
        }
        iVar4 = (*(code *)PTR_memcmp_01084ac8)(&UNK_00d22213,*(undefined8 *)(lVar17 + 8),uVar5);
        lVar15 = -lVar15;
        if (iVar4 != 0) {
          lVar15 = (long)iVar4;
        }
        uVar12 = uVar12 + 1;
        lVar8 = lVar8 + -0x18;
        lVar17 = lVar17 + 0x18;
        puVar3 = puVar7 + 4;
      } while ((char)((0 < lVar15) - (lVar15 < 0)) == '\x01');
      uVar5 = uVar12;
      if (0 < lVar15 == lVar15 < 0) break;
code_r0x004060c5:
      bVar19 = lStack_60 == 0;
      lStack_60 = lStack_60 + -1;
      if (bVar19) goto code_r0x00406161;
      lVar13 = *(long *)(lVar13 + 0x278 + uVar5 * 8);
    }
    if (*(char *)(puVar7 + 1) == '\x03') {
      auVar20 = _RINvMNtCs7x1JxYRm7tp_4core3stre12trim_matchesNvMNtNtB5_4char7methodsc13is_whitespaceECs39mte1n7CTo_9node_repl
                          (puVar7[3],puVar7[4]);
      if ((auVar20._0_8_ != 0) && (auVar20._8_8_ != 0)) goto code_r0x004065d7;
    }
code_r0x00406161:
    do {
      uVar12 = (ulong)*(ushort *)(lVar16 + 0x272);
      lVar13 = (ulong)((uint)*(ushort *)(lVar16 + 0x272) * 8) * 3;
      uVar5 = 0xffffffffffffffff;
      lVar8 = lVar16 + 0x168;
      puVar3 = (undefined8 *)(lVar16 + -8);
      do {
        puVar7 = puVar3;
        lVar17 = param_2;
        if (lVar13 == 0) goto code_r0x00406145;
        uVar2 = *(ulong *)(lVar8 + 0x10);
        uVar6 = 0xe;
        if (uVar2 < 0xe) {
          uVar6 = uVar2;
        }
        iVar4 = (*(code *)PTR_memcmp_01084ac8)(&UNK_00d22660,*(undefined8 *)(lVar8 + 8),uVar6);
        lVar15 = -(uVar2 - 0xe);
        if (iVar4 != 0) {
          lVar15 = (long)iVar4;
        }
        uVar5 = uVar5 + 1;
        lVar13 = lVar13 + -0x18;
        lVar8 = lVar8 + 0x18;
        puVar3 = puVar7 + 4;
      } while ((char)((0 < lVar15) - (lVar15 < 0)) == '\x01');
      uVar12 = uVar5;
      if (0 < lVar15 == lVar15 < 0) {
        lStack_60 = param_3;
        if (*(char *)(puVar7 + 1) == '\x03') {
          auVar20 = _RINvMNtCs7x1JxYRm7tp_4core3stre12trim_matchesNvMNtNtB5_4char7methodsc13is_whitespaceECs39mte1n7CTo_9node_repl
                              (puVar7[3],puVar7[4]);
          if ((auVar20._0_8_ != 0) && (auVar20._8_8_ != 0)) goto code_r0x004065d7;
        }
        goto code_r0x0040622b;
      }
code_r0x00406145:
      lStack_60 = param_3;
      if (lVar14 == 0) goto code_r0x0040622b;
      lVar14 = lVar14 + -1;
      lVar16 = *(long *)(lVar16 + 0x278 + uVar12 * 8);
    } while( true );
  }
code_r0x004067e7:
  *param_1 = -1;
  return;
code_r0x0040622b:
  uVar1 = *(ushort *)(lVar17 + 0x272);
  lVar13 = (ulong)((uint)uVar1 * 8) * 3;
  uVar12 = 0xffffffffffffffff;
  lVar8 = lVar17 + 0x168;
  puVar3 = (undefined8 *)(lVar17 + -8);
  do {
    puVar7 = puVar3;
    uVar5 = (ulong)uVar1;
    lVar14 = param_2;
    if (lVar13 == 0) goto code_r0x004062c5;
    uVar5 = *(ulong *)(lVar8 + 0x10);
    lVar16 = uVar5 - 9;
    if (8 < uVar5) {
      uVar5 = 9;
    }
    iVar4 = (*(code *)PTR_memcmp_01084ac8)(&UNK_00d22222,*(undefined8 *)(lVar8 + 8),uVar5);
    lVar16 = -lVar16;
    if (iVar4 != 0) {
      lVar16 = (long)iVar4;
    }
    uVar12 = uVar12 + 1;
    lVar13 = lVar13 + -0x18;
    lVar8 = lVar8 + 0x18;
    puVar3 = puVar7 + 4;
  } while ((char)((0 < lVar16) - (lVar16 < 0)) == '\x01');
  uVar5 = uVar12;
  if (0 < lVar16 == lVar16 < 0) {
    lStack_60 = param_3;
    if (*(char *)(puVar7 + 1) == '\x03') {
      auVar20 = _RINvMNtCs7x1JxYRm7tp_4core3stre12trim_matchesNvMNtNtB5_4char7methodsc13is_whitespaceECs39mte1n7CTo_9node_repl
                          (puVar7[3],puVar7[4]);
      if ((auVar20._0_8_ != 0) && (auVar20._8_8_ != 0)) goto code_r0x004065d7;
    }
    goto code_r0x00406321;
  }
code_r0x004062c5:
  bVar19 = lStack_60 == 0;
  lVar13 = lStack_60 + -1;
  lStack_60 = param_3;
  if (bVar19) goto code_r0x00406321;
  lVar17 = *(long *)(lVar17 + 0x278 + uVar5 * 8);
  lStack_60 = lVar13;
  goto code_r0x0040622b;
code_r0x00406321:
  uVar1 = *(ushort *)(lVar14 + 0x272);
  lVar13 = (ulong)((uint)uVar1 * 8) * 3;
  uVar12 = 0xffffffffffffffff;
  lVar8 = lVar14 + 0x168;
  puVar3 = (undefined8 *)(lVar14 + -8);
  do {
    puVar7 = puVar3;
    uVar5 = (ulong)uVar1;
    lVar17 = param_2;
    if (lVar13 == 0) goto code_r0x004063b5;
    uVar5 = *(ulong *)(lVar8 + 0x10);
    lVar16 = uVar5 - 8;
    if (7 < uVar5) {
      uVar5 = 8;
    }
    iVar4 = (*(code *)PTR_memcmp_01084ac8)(&UNK_00c9beb8,*(undefined8 *)(lVar8 + 8),uVar5);
    lVar16 = -lVar16;
    if (iVar4 != 0) {
      lVar16 = (long)iVar4;
    }
    uVar12 = uVar12 + 1;
    lVar13 = lVar13 + -0x18;
    lVar8 = lVar8 + 0x18;
    puVar3 = puVar7 + 4;
  } while ((char)((0 < lVar16) - (lVar16 < 0)) == '\x01');
  uVar5 = uVar12;
  if (0 < lVar16 == lVar16 < 0) {
    lStack_60 = param_3;
    if (*(char *)(puVar7 + 1) == '\x03') {
      auVar20 = _RINvMNtCs7x1JxYRm7tp_4core3stre12trim_matchesNvMNtNtB5_4char7methodsc13is_whitespaceECs39mte1n7CTo_9node_repl
                          (puVar7[3],puVar7[4]);
      if ((auVar20._0_8_ != 0) && (auVar20._8_8_ != 0)) goto code_r0x004065d7;
    }
    goto code_r0x00406411;
  }
code_r0x004063b5:
  bVar19 = lStack_60 == 0;
  lVar13 = lStack_60 + -1;
  lStack_60 = param_3;
  if (bVar19) goto code_r0x00406411;
  lVar14 = *(long *)(lVar14 + 0x278 + uVar5 * 8);
  lStack_60 = lVar13;
  goto code_r0x00406321;
code_r0x00406411:
  uVar1 = *(ushort *)(lVar17 + 0x272);
  lVar13 = (ulong)((uint)uVar1 * 8) * 3;
  uVar12 = 0xffffffffffffffff;
  lVar8 = lVar17 + 0x168;
  puVar3 = (undefined8 *)(lVar17 + -8);
  do {
    puVar7 = puVar3;
    uVar5 = (ulong)uVar1;
    lVar14 = param_2;
    if (lVar13 == 0) goto code_r0x004064a5;
    uVar5 = *(ulong *)(lVar8 + 0x10);
    lVar16 = uVar5 - 10;
    if (9 < uVar5) {
      uVar5 = 10;
    }
    iVar4 = (*(code *)PTR_memcmp_01084ac8)(&UNK_00d2222b,*(undefined8 *)(lVar8 + 8),uVar5);
    lVar16 = -lVar16;
    if (iVar4 != 0) {
      lVar16 = (long)iVar4;
    }
    uVar12 = uVar12 + 1;
    lVar13 = lVar13 + -0x18;
    lVar8 = lVar8 + 0x18;
    puVar3 = puVar7 + 4;
  } while ((char)((0 < lVar16) - (lVar16 < 0)) == '\x01');
  uVar5 = uVar12;
  if (0 < lVar16 == lVar16 < 0) {
    lStack_60 = param_3;
    if (*(char *)(puVar7 + 1) == '\x03') {
      auVar20 = _RINvMNtCs7x1JxYRm7tp_4core3stre12trim_matchesNvMNtNtB5_4char7methodsc13is_whitespaceECs39mte1n7CTo_9node_repl
                          (puVar7[3],puVar7[4]);
      if ((auVar20._0_8_ != 0) && (auVar20._8_8_ != 0)) goto code_r0x004065d7;
    }
    goto code_r0x00406501;
  }
code_r0x004064a5:
  bVar19 = lStack_60 == 0;
  lVar13 = lStack_60 + -1;
  lStack_60 = param_3;
  if (bVar19) goto code_r0x00406501;
  lVar17 = *(long *)(lVar17 + 0x278 + uVar5 * 8);
  lStack_60 = lVar13;
  goto code_r0x00406411;
code_r0x00406501:
  uVar1 = *(ushort *)(lVar14 + 0x272);
  lVar13 = (ulong)((uint)uVar1 * 8) * 3;
  uVar12 = 0xffffffffffffffff;
  lVar8 = lVar14 + 0x168;
  puVar3 = (undefined8 *)(lVar14 + -8);
  do {
    puVar7 = puVar3;
    uVar5 = (ulong)uVar1;
    lStack_58 = param_3;
    if (lVar13 == 0) goto code_r0x00406591;
    uVar5 = *(ulong *)(lVar8 + 0x10);
    lVar17 = uVar5 - 9;
    if (8 < uVar5) {
      uVar5 = 9;
    }
    iVar4 = (*(code *)PTR_memcmp_01084ac8)(&UNK_00d2266e,*(undefined8 *)(lVar8 + 8),uVar5);
    lVar17 = -lVar17;
    if (iVar4 != 0) {
      lVar17 = (long)iVar4;
    }
    uVar12 = uVar12 + 1;
    lVar13 = lVar13 + -0x18;
    lVar8 = lVar8 + 0x18;
    puVar3 = puVar7 + 4;
  } while ((char)((0 < lVar17) - (lVar17 < 0)) == '\x01');
  uVar5 = uVar12;
  if (0 < lVar17 == lVar17 < 0) {
    if (*(char *)(puVar7 + 1) == '\x03') {
      auVar20 = _RINvMNtCs7x1JxYRm7tp_4core3stre12trim_matchesNvMNtNtB5_4char7methodsc13is_whitespaceECs39mte1n7CTo_9node_repl
                          (puVar7[3],puVar7[4]);
      if ((auVar20._0_8_ != 0) && (auVar20._8_8_ != 0)) {
code_r0x004065d7:
        lVar13 = auVar20._8_8_;
        uVar11 = auVar20._0_8_;
        if (-1 < lVar13) goto code_r0x004065eb;
        uVar18 = 0;
        do {
          uVar11 = (*(code *)PTR__RNvNtCskPe9mFtgPYj_5alloc7raw_vec12handle_error_01084288)
                             (uVar18,lVar13);
code_r0x004065eb:
          (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01084408)
                    ();
          uVar18 = 1;
          lVar8 = (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_01085810)(lVar13,1);
        } while (lVar8 == 0);
        (*(code *)PTR_memcpy_01081c18)(lVar8,uVar11,lVar13);
        *param_1 = lVar13;
        param_1[1] = lVar8;
        param_1[2] = lVar13;
        return;
      }
    }
    goto code_r0x00406640;
  }
code_r0x00406591:
  bVar19 = lStack_60 == 0;
  lStack_60 = lStack_60 + -1;
  if (bVar19) goto code_r0x00406640;
  lVar14 = *(long *)(lVar14 + 0x278 + uVar5 * 8);
  goto code_r0x00406501;
code_r0x00406640:
  uVar1 = *(ushort *)(param_2 + 0x272);
  lVar13 = (ulong)((uint)uVar1 * 8) * 3;
  uVar12 = 0xffffffffffffffff;
  lVar8 = param_2 + 0x168;
  plVar10 = (long *)(param_2 + -0x10);
  do {
    plVar9 = plVar10;
    uVar5 = (ulong)uVar1;
    if (lVar13 == 0) goto code_r0x004066e5;
    uVar5 = *(ulong *)(lVar8 + 0x10);
    lVar17 = uVar5 - 0x15;
    if (0x14 < uVar5) {
      uVar5 = 0x15;
    }
    iVar4 = (*(code *)PTR_memcmp_01084ac8)(&UNK_00d222b4,*(undefined8 *)(lVar8 + 8),uVar5);
    lVar17 = -lVar17;
    if (iVar4 != 0) {
      lVar17 = (long)iVar4;
    }
    plVar10 = plVar9 + 4;
    uVar12 = uVar12 + 1;
    lVar13 = lVar13 + -0x18;
    lVar8 = lVar8 + 0x18;
  } while ((char)((0 < lVar17) - (lVar17 < 0)) == '\x01');
  uVar5 = uVar12;
  if (0 < lVar17 == lVar17 < 0) {
    if ((char)plVar9[2] == '\x05') {
      lStack_50 = plVar9[3];
      if (lStack_50 == 0) goto code_r0x00406a47;
      lStack_58 = *plVar10;
      lVar13 = lStack_50;
      goto code_r0x0040672e;
    }
    goto code_r0x004067e7;
  }
code_r0x004066e5:
  bVar19 = lStack_58 == 0;
  lStack_58 = lStack_58 + -1;
  if (bVar19) goto code_r0x004067e7;
  param_2 = *(long *)(param_2 + 0x278 + uVar5 * 8);
  goto code_r0x00406640;
code_r0x0040672e:
  uVar1 = *(ushort *)(lVar13 + 0x272);
  lVar8 = (ulong)((uint)uVar1 * 8) * 3;
  uVar12 = 0xffffffffffffffff;
  lVar17 = lVar13 + 0x168;
  puVar3 = (undefined8 *)(lVar13 + -8);
  do {
    puVar7 = puVar3;
    uVar5 = (ulong)uVar1;
    if (lVar8 == 0) goto code_r0x004067c5;
    uVar5 = *(ulong *)(lVar17 + 0x10);
    lVar14 = uVar5 - 0xf;
    if (0xe < uVar5) {
      uVar5 = 0xf;
    }
    iVar4 = (*(code *)PTR_memcmp_01084ac8)(&UNK_00d22213,*(undefined8 *)(lVar17 + 8),uVar5);
    lVar14 = -lVar14;
    if (iVar4 != 0) {
      lVar14 = (long)iVar4;
    }
    uVar12 = uVar12 + 1;
    lVar8 = lVar8 + -0x18;
    lVar17 = lVar17 + 0x18;
    puVar3 = puVar7 + 4;
  } while ((char)((0 < lVar14) - (lVar14 < 0)) == '\x01');
  uVar5 = uVar12;
  if (0 < lVar14 != lVar14 < 0) {
code_r0x004067c5:
    bVar19 = lStack_58 == 0;
    lStack_58 = lStack_58 + -1;
    if (bVar19) goto code_r0x00406829;
    lVar13 = *(long *)(lVar13 + 0x278 + uVar5 * 8);
    goto code_r0x0040672e;
  }
  if (*(char *)(puVar7 + 1) == '\x03') {
    auVar20 = _RINvMNtCs7x1JxYRm7tp_4core3stre12trim_matchesNvMNtNtB5_4char7methodsc13is_whitespaceECs39mte1n7CTo_9node_repl
                        (puVar7[3],puVar7[4]);
    if ((auVar20._0_8_ != 0) && (auVar20._8_8_ != 0)) goto code_r0x00406a33;
    lStack_50 = plVar9[3];
  }
code_r0x00406829:
  if (lStack_50 != 0) {
    lStack_58 = *plVar10;
    lVar13 = lStack_50;
    while( true ) {
      uVar1 = *(ushort *)(lVar13 + 0x272);
      lVar8 = (ulong)((uint)uVar1 * 8) * 3;
      uVar12 = 0xffffffffffffffff;
      lVar17 = lVar13 + 0x168;
      puVar3 = (undefined8 *)(lVar13 + -8);
      do {
        puVar7 = puVar3;
        uVar5 = (ulong)uVar1;
        if (lVar8 == 0) goto code_r0x004068e5;
        uVar5 = *(ulong *)(lVar17 + 0x10);
        lVar14 = uVar5 - 9;
        if (8 < uVar5) {
          uVar5 = 9;
        }
        iVar4 = (*(code *)PTR_memcmp_01084ac8)(&UNK_00d22222,*(undefined8 *)(lVar17 + 8),uVar5);
        lVar14 = -lVar14;
        if (iVar4 != 0) {
          lVar14 = (long)iVar4;
        }
        uVar12 = uVar12 + 1;
        lVar8 = lVar8 + -0x18;
        lVar17 = lVar17 + 0x18;
        puVar3 = puVar7 + 4;
      } while ((char)((0 < lVar14) - (lVar14 < 0)) == '\x01');
      uVar5 = uVar12;
      if (0 < lVar14 == lVar14 < 0) break;
code_r0x004068e5:
      bVar19 = lStack_58 == 0;
      lStack_58 = lStack_58 + -1;
      if (bVar19) goto code_r0x00406933;
      lVar13 = *(long *)(lVar13 + 0x278 + uVar5 * 8);
    }
    if (*(char *)(puVar7 + 1) == '\x03') {
      auVar20 = _RINvMNtCs7x1JxYRm7tp_4core3stre12trim_matchesNvMNtNtB5_4char7methodsc13is_whitespaceECs39mte1n7CTo_9node_repl
                          (puVar7[3],puVar7[4]);
      if ((auVar20._0_8_ != 0) && (auVar20._8_8_ != 0)) goto code_r0x00406a33;
      lStack_50 = plVar9[3];
    }
code_r0x00406933:
    if (lStack_50 != 0) {
      lStack_58 = *plVar10;
      while( true ) {
        uVar1 = *(ushort *)(lStack_50 + 0x272);
        lVar13 = (ulong)((uint)uVar1 * 8) * 3;
        uVar12 = 0xffffffffffffffff;
        lVar8 = lStack_50 + 0x168;
        puVar3 = (undefined8 *)(lStack_50 + -8);
        do {
          puVar7 = puVar3;
          uVar5 = (ulong)uVar1;
          if (lVar13 == 0) goto code_r0x004069f1;
          uVar5 = *(ulong *)(lVar8 + 0x10);
          lVar17 = uVar5 - 10;
          if (9 < uVar5) {
            uVar5 = 10;
          }
          iVar4 = (*(code *)PTR_memcmp_01084ac8)(&UNK_00d2222b,*(undefined8 *)(lVar8 + 8),uVar5);
          lVar17 = -lVar17;
          if (iVar4 != 0) {
            lVar17 = (long)iVar4;
          }
          uVar12 = uVar12 + 1;
          lVar13 = lVar13 + -0x18;
          lVar8 = lVar8 + 0x18;
          puVar3 = puVar7 + 4;
        } while ((char)((0 < lVar17) - (lVar17 < 0)) == '\x01');
        uVar5 = uVar12;
        if (0 < lVar17 == lVar17 < 0) break;
code_r0x004069f1:
        bVar19 = lStack_58 == 0;
        lStack_58 = lStack_58 + -1;
        if (bVar19) goto code_r0x00406a47;
        lStack_50 = *(long *)(lStack_50 + 0x278 + uVar5 * 8);
      }
      if (*(char *)(puVar7 + 1) == '\x03') {
        auVar20 = _RINvMNtCs7x1JxYRm7tp_4core3stre12trim_matchesNvMNtNtB5_4char7methodsc13is_whitespaceECs39mte1n7CTo_9node_repl
                            (puVar7[3],puVar7[4]);
        if ((auVar20._0_8_ != 0) && (auVar20._8_8_ != 0)) {
code_r0x00406a33:
          lVar13 = auVar20._8_8_;
          if (lVar13 < 0) {
            uVar11 = 0;
          }
          else {
            (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01084408
            )();
            uVar11 = 1;
            lVar8 = (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_01085810)(lVar13,1);
            if (lVar8 != 0) {
              (*(code *)PTR_memcpy_01081c18)(lVar8,auVar20._0_8_,lVar13);
              *param_1 = lVar13;
              param_1[1] = lVar8;
              param_1[2] = lVar13;
              return;
            }
          }
          (*(code *)PTR__RNvNtCskPe9mFtgPYj_5alloc7raw_vec12handle_error_01084288)(uVar11,lVar13);
        }
      }
    }
  }
code_r0x00406a47:
  *param_1 = -1;
  return;
}


