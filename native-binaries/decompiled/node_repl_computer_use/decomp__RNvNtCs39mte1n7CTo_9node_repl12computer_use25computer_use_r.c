// 00405a40  undefined _RNvNtCs39mte1n7CTo_9node_repl12computer_use25computer_use_request_info(void)

void _RNvNtCs39mte1n7CTo_9node_repl12computer_use25computer_use_request_info
               (long *param_1,long param_2)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long extraout_RDX;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  char *pcVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  bool bVar23;
  undefined1 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_80;
  long lStack_50;
  undefined8 *puStack_48;
  long lStack_40;
  long lStack_38;
  
  if (*(char *)(param_2 + 0x38) != '\x05') {
    *param_1 = -1;
    return;
  }
  lVar15 = *(long *)(param_2 + 0x40);
  if (lVar15 != 0) {
    lVar18 = *(long *)(param_2 + 0x48);
    lStack_38 = param_2 + 0x40;
    lVar16 = lVar15;
    lStack_80 = lVar18;
    while( true ) {
      uVar21 = (ulong)*(ushort *)(lVar16 + 0x272);
      lVar19 = (ulong)((uint)*(ushort *)(lVar16 + 0x272) * 8) * 3;
      uVar20 = 0xffffffffffffffff;
      lVar3 = lVar16 + 0x168;
      plVar5 = (long *)(lVar16 + -8);
      do {
        plVar14 = plVar5;
        if (lVar19 == 0) goto code_r0x00405b35;
        uVar6 = *(ulong *)(lVar3 + 0x10);
        lVar9 = uVar6 - 0xc;
        if (0xb < uVar6) {
          uVar6 = 0xc;
        }
        iVar2 = (*(code *)PTR_memcmp_01084ac8)(&UNK_00d22640,*(undefined8 *)(lVar3 + 8),uVar6);
        lVar9 = -lVar9;
        if (iVar2 != 0) {
          lVar9 = (long)iVar2;
        }
        uVar20 = uVar20 + 1;
        lVar19 = lVar19 + -0x18;
        lVar3 = lVar3 + 0x18;
        plVar5 = plVar14 + 4;
      } while ((char)((0 < lVar9) - (lVar9 < 0)) == '\x01');
      uVar21 = uVar20;
      if (0 < lVar9 == lVar9 < 0) break;
code_r0x00405b35:
      bVar23 = lStack_80 == 0;
      lStack_80 = lStack_80 + -1;
      if (bVar23) goto code_r0x00405b92;
      lVar16 = *(long *)(lVar16 + 0x278 + uVar21 * 8);
    }
    if ((((char)plVar14[1] == '\x03') && (plVar14[4] == 0xc)) &&
       (lVar16 = lVar15, lStack_80 = lVar18,
       (int)((long *)plVar14[3])[1] == 0x6573752d && *(long *)plVar14[3] == 0x72657475706d6f63))
    goto code_r0x00405bc3;
  }
code_r0x00405b92:
  *param_1 = -1;
  return;
code_r0x00405bc3:
  uVar21 = (ulong)*(ushort *)(lVar16 + 0x272);
  lVar19 = (ulong)((uint)*(ushort *)(lVar16 + 0x272) * 8) * 3;
  uVar20 = 0xffffffffffffffff;
  lVar3 = lVar16 + 0x168;
  plVar5 = (long *)(lVar16 + -8);
  do {
    plVar14 = plVar5;
    lVar9 = lVar15;
    if (lVar19 == 0) goto code_r0x00405c61;
    uVar6 = *(ulong *)(lVar3 + 0x10);
    lVar10 = uVar6 - 9;
    if (8 < uVar6) {
      uVar6 = 9;
    }
    iVar2 = (*(code *)PTR_memcmp_01084ac8)(&UNK_00d2264c,*(undefined8 *)(lVar3 + 8),uVar6);
    lVar10 = -lVar10;
    if (iVar2 != 0) {
      lVar10 = (long)iVar2;
    }
    uVar20 = uVar20 + 1;
    lVar19 = lVar19 + -0x18;
    lVar3 = lVar3 + 0x18;
    plVar5 = plVar14 + 4;
  } while ((char)((0 < lVar10) - (lVar10 < 0)) == '\x01');
  uVar21 = uVar20;
  if (0 < lVar10 == lVar10 < 0) {
    lStack_80 = lVar18;
    if (((char)plVar14[1] == '\x03') && (plVar14[4] == 0x15)) {
      pcVar12 = (char *)plVar14[3];
      auVar26[0] = -(pcVar12[5] == UNK_00c73b30);
      auVar26[1] = -(pcVar12[6] == UNK_00c73b31);
      auVar26[2] = -(pcVar12[7] == UNK_00c73b32);
      auVar26[3] = -(pcVar12[8] == UNK_00c73b33);
      auVar26[4] = -(pcVar12[9] == UNK_00c73b34);
      auVar26[5] = -(pcVar12[10] == UNK_00c73b35);
      auVar26[6] = -(pcVar12[0xb] == UNK_00c73b36);
      auVar26[7] = -(pcVar12[0xc] == UNK_00c73b37);
      auVar26[8] = -(pcVar12[0xd] == UNK_00c73b38);
      auVar26[9] = -(pcVar12[0xe] == UNK_00c73b39);
      auVar26[10] = -(pcVar12[0xf] == UNK_00c73b3a);
      auVar26[0xb] = -(pcVar12[0x10] == UNK_00c73b3b);
      auVar26[0xc] = -(pcVar12[0x11] == UNK_00c73b3c);
      auVar26[0xd] = -(pcVar12[0x12] == UNK_00c73b3d);
      auVar26[0xe] = -(pcVar12[0x13] == UNK_00c73b3e);
      auVar26[0xf] = -(pcVar12[0x14] == UNK_00c73b3f);
      auVar25[0] = -(*pcVar12 == UNK_00c73b40);
      auVar25[1] = -(pcVar12[1] == UNK_00c73b41);
      auVar25[2] = -(pcVar12[2] == UNK_00c73b42);
      auVar25[3] = -(pcVar12[3] == UNK_00c73b43);
      auVar25[4] = -(pcVar12[4] == UNK_00c73b44);
      auVar25[5] = -(pcVar12[5] == UNK_00c73b45);
      auVar25[6] = -(pcVar12[6] == UNK_00c73b46);
      auVar25[7] = -(pcVar12[7] == UNK_00c73b47);
      auVar25[8] = -(pcVar12[8] == UNK_00c73b48);
      auVar25[9] = -(pcVar12[9] == UNK_00c73b49);
      auVar25[10] = -(pcVar12[10] == UNK_00c73b4a);
      auVar25[0xb] = -(pcVar12[0xb] == UNK_00c73b4b);
      auVar25[0xc] = -(pcVar12[0xc] == UNK_00c73b4c);
      auVar25[0xd] = -(pcVar12[0xd] == UNK_00c73b4d);
      auVar25[0xe] = -(pcVar12[0xe] == UNK_00c73b4e);
      auVar25[0xf] = -(pcVar12[0xf] == UNK_00c73b4f);
      auVar25 = auVar25 & auVar26;
      if ((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar25[0xf] >> 7) << 0xf) == 0xffff) {
        (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01084408)();
        puVar4 = (undefined8 *)
                 (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_01085810)(0xe,1);
        if (puVar4 != (undefined8 *)0x0) {
          *(undefined8 *)((long)puVar4 + 6) = 0x6f696475612d7265;
          *puVar4 = 0x72657475706d6f63;
          lVar16 = 0xe;
          lVar19 = 0xe;
          goto code_r0x00405deb;
        }
        lVar15 = 0xe;
        plVar5 = (long *)(*(code *)PTR__RNvNtCskPe9mFtgPYj_5alloc7raw_vec12handle_error_01084288)(1)
        ;
        if (lVar10 != 0) {
          (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_01084ef0)
                    (&UNK_00d2264c,lVar10,1);
          lVar15 = lVar10;
        }
        _Unwind_Resume();
        lVar18 = lVar15;
        lStack_e8 = extraout_RDX;
        if (lVar15 == 0) goto code_r0x004067e7;
        goto code_r0x00406032;
      }
    }
    goto code_r0x00405cd6;
  }
code_r0x00405c61:
  bVar23 = lStack_80 == 0;
  lVar19 = lStack_80 + -1;
  lStack_80 = lVar18;
  if (bVar23) goto code_r0x00405cd6;
  lVar16 = *(long *)(lVar16 + 0x278 + uVar21 * 8);
  lStack_80 = lVar19;
  goto code_r0x00405bc3;
code_r0x00406032:
  uVar1 = *(ushort *)(lVar18 + 0x272);
  lVar16 = (ulong)((uint)uVar1 * 8) * 3;
  uVar21 = 0xffffffffffffffff;
  lVar19 = lVar18 + 0x168;
  puVar4 = (undefined8 *)(lVar18 + -8);
  do {
    puVar8 = puVar4;
    uVar20 = (ulong)uVar1;
    lVar9 = extraout_RDX;
    lVar3 = lVar15;
    if (lVar16 == 0) goto code_r0x004060c5;
    uVar20 = *(ulong *)(lVar19 + 0x10);
    lVar10 = uVar20 - 0xf;
    if (0xe < uVar20) {
      uVar20 = 0xf;
    }
    iVar2 = (*(code *)PTR_memcmp_01084ac8)(&UNK_00d22213,*(undefined8 *)(lVar19 + 8),uVar20);
    lVar10 = -lVar10;
    if (iVar2 != 0) {
      lVar10 = (long)iVar2;
    }
    uVar21 = uVar21 + 1;
    lVar16 = lVar16 + -0x18;
    lVar19 = lVar19 + 0x18;
    puVar4 = puVar8 + 4;
  } while ((char)((0 < lVar10) - (lVar10 < 0)) == '\x01');
  uVar20 = uVar21;
  if (0 < lVar10 == lVar10 < 0) {
    if (*(char *)(puVar8 + 1) == '\x03') {
      auVar25 = _RINvMNtCs7x1JxYRm7tp_4core3stre12trim_matchesNvMNtNtB5_4char7methodsc13is_whitespaceECs39mte1n7CTo_9node_repl
                          (puVar8[3],puVar8[4]);
      if ((auVar25._0_8_ != 0) && (auVar25._8_8_ != 0)) goto code_r0x004065d7;
    }
    goto code_r0x00406161;
  }
code_r0x004060c5:
  bVar23 = lStack_e8 == 0;
  lStack_e8 = lStack_e8 + -1;
  if (bVar23) goto code_r0x00406161;
  lVar18 = *(long *)(lVar18 + 0x278 + uVar20 * 8);
  goto code_r0x00406032;
code_r0x00406161:
  uVar21 = (ulong)*(ushort *)(lVar3 + 0x272);
  lVar18 = (ulong)((uint)*(ushort *)(lVar3 + 0x272) * 8) * 3;
  uVar20 = 0xffffffffffffffff;
  lVar16 = lVar3 + 0x168;
  puVar4 = (undefined8 *)(lVar3 + -8);
  do {
    puVar8 = puVar4;
    lVar19 = lVar15;
    if (lVar18 == 0) goto code_r0x00406145;
    uVar6 = *(ulong *)(lVar16 + 0x10);
    uVar7 = 0xe;
    if (uVar6 < 0xe) {
      uVar7 = uVar6;
    }
    iVar2 = (*(code *)PTR_memcmp_01084ac8)(&UNK_00d22660,*(undefined8 *)(lVar16 + 8),uVar7);
    lVar10 = -(uVar6 - 0xe);
    if (iVar2 != 0) {
      lVar10 = (long)iVar2;
    }
    uVar20 = uVar20 + 1;
    lVar18 = lVar18 + -0x18;
    lVar16 = lVar16 + 0x18;
    puVar4 = puVar8 + 4;
  } while ((char)((0 < lVar10) - (lVar10 < 0)) == '\x01');
  uVar21 = uVar20;
  if (0 < lVar10 == lVar10 < 0) {
    lStack_e8 = extraout_RDX;
    if (*(char *)(puVar8 + 1) == '\x03') {
      auVar25 = _RINvMNtCs7x1JxYRm7tp_4core3stre12trim_matchesNvMNtNtB5_4char7methodsc13is_whitespaceECs39mte1n7CTo_9node_repl
                          (puVar8[3],puVar8[4]);
      if ((auVar25._0_8_ != 0) && (auVar25._8_8_ != 0)) goto code_r0x004065d7;
    }
    goto code_r0x0040622b;
  }
code_r0x00406145:
  bVar23 = lVar9 == 0;
  lVar9 = lVar9 + -1;
  lStack_e8 = extraout_RDX;
  if (bVar23) goto code_r0x0040622b;
  lVar3 = *(long *)(lVar3 + 0x278 + uVar21 * 8);
  goto code_r0x00406161;
code_r0x0040622b:
  uVar1 = *(ushort *)(lVar19 + 0x272);
  lVar18 = (ulong)((uint)uVar1 * 8) * 3;
  uVar21 = 0xffffffffffffffff;
  lVar16 = lVar19 + 0x168;
  puVar4 = (undefined8 *)(lVar19 + -8);
  do {
    puVar8 = puVar4;
    uVar20 = (ulong)uVar1;
    lVar3 = lVar15;
    if (lVar18 == 0) goto code_r0x004062c5;
    uVar20 = *(ulong *)(lVar16 + 0x10);
    lVar9 = uVar20 - 9;
    if (8 < uVar20) {
      uVar20 = 9;
    }
    iVar2 = (*(code *)PTR_memcmp_01084ac8)(&UNK_00d22222,*(undefined8 *)(lVar16 + 8),uVar20);
    lVar9 = -lVar9;
    if (iVar2 != 0) {
      lVar9 = (long)iVar2;
    }
    uVar21 = uVar21 + 1;
    lVar18 = lVar18 + -0x18;
    lVar16 = lVar16 + 0x18;
    puVar4 = puVar8 + 4;
  } while ((char)((0 < lVar9) - (lVar9 < 0)) == '\x01');
  uVar20 = uVar21;
  if (0 < lVar9 == lVar9 < 0) {
    lStack_e8 = extraout_RDX;
    if (*(char *)(puVar8 + 1) == '\x03') {
      auVar25 = _RINvMNtCs7x1JxYRm7tp_4core3stre12trim_matchesNvMNtNtB5_4char7methodsc13is_whitespaceECs39mte1n7CTo_9node_repl
                          (puVar8[3],puVar8[4]);
      if ((auVar25._0_8_ != 0) && (auVar25._8_8_ != 0)) goto code_r0x004065d7;
    }
    goto code_r0x00406321;
  }
code_r0x004062c5:
  bVar23 = lStack_e8 == 0;
  lVar18 = lStack_e8 + -1;
  lStack_e8 = extraout_RDX;
  if (bVar23) goto code_r0x00406321;
  lVar19 = *(long *)(lVar19 + 0x278 + uVar20 * 8);
  lStack_e8 = lVar18;
  goto code_r0x0040622b;
code_r0x00406321:
  uVar1 = *(ushort *)(lVar3 + 0x272);
  lVar18 = (ulong)((uint)uVar1 * 8) * 3;
  uVar21 = 0xffffffffffffffff;
  lVar16 = lVar3 + 0x168;
  puVar4 = (undefined8 *)(lVar3 + -8);
  do {
    puVar8 = puVar4;
    uVar20 = (ulong)uVar1;
    lVar19 = lVar15;
    if (lVar18 == 0) goto code_r0x004063b5;
    uVar20 = *(ulong *)(lVar16 + 0x10);
    lVar9 = uVar20 - 8;
    if (7 < uVar20) {
      uVar20 = 8;
    }
    iVar2 = (*(code *)PTR_memcmp_01084ac8)(&UNK_00c9beb8,*(undefined8 *)(lVar16 + 8),uVar20);
    lVar9 = -lVar9;
    if (iVar2 != 0) {
      lVar9 = (long)iVar2;
    }
    uVar21 = uVar21 + 1;
    lVar18 = lVar18 + -0x18;
    lVar16 = lVar16 + 0x18;
    puVar4 = puVar8 + 4;
  } while ((char)((0 < lVar9) - (lVar9 < 0)) == '\x01');
  uVar20 = uVar21;
  if (0 < lVar9 == lVar9 < 0) {
    lStack_e8 = extraout_RDX;
    if (*(char *)(puVar8 + 1) == '\x03') {
      auVar25 = _RINvMNtCs7x1JxYRm7tp_4core3stre12trim_matchesNvMNtNtB5_4char7methodsc13is_whitespaceECs39mte1n7CTo_9node_repl
                          (puVar8[3],puVar8[4]);
      if ((auVar25._0_8_ != 0) && (auVar25._8_8_ != 0)) goto code_r0x004065d7;
    }
    goto code_r0x00406411;
  }
code_r0x004063b5:
  bVar23 = lStack_e8 == 0;
  lVar18 = lStack_e8 + -1;
  lStack_e8 = extraout_RDX;
  if (bVar23) goto code_r0x00406411;
  lVar3 = *(long *)(lVar3 + 0x278 + uVar20 * 8);
  lStack_e8 = lVar18;
  goto code_r0x00406321;
code_r0x00406411:
  uVar1 = *(ushort *)(lVar19 + 0x272);
  lVar18 = (ulong)((uint)uVar1 * 8) * 3;
  uVar21 = 0xffffffffffffffff;
  lVar16 = lVar19 + 0x168;
  puVar4 = (undefined8 *)(lVar19 + -8);
  do {
    puVar8 = puVar4;
    uVar20 = (ulong)uVar1;
    lVar3 = lVar15;
    if (lVar18 == 0) goto code_r0x004064a5;
    uVar20 = *(ulong *)(lVar16 + 0x10);
    lVar9 = uVar20 - 10;
    if (9 < uVar20) {
      uVar20 = 10;
    }
    iVar2 = (*(code *)PTR_memcmp_01084ac8)(&UNK_00d2222b,*(undefined8 *)(lVar16 + 8),uVar20);
    lVar9 = -lVar9;
    if (iVar2 != 0) {
      lVar9 = (long)iVar2;
    }
    uVar21 = uVar21 + 1;
    lVar18 = lVar18 + -0x18;
    lVar16 = lVar16 + 0x18;
    puVar4 = puVar8 + 4;
  } while ((char)((0 < lVar9) - (lVar9 < 0)) == '\x01');
  uVar20 = uVar21;
  if (0 < lVar9 == lVar9 < 0) {
    lStack_e8 = extraout_RDX;
    if (*(char *)(puVar8 + 1) == '\x03') {
      auVar25 = _RINvMNtCs7x1JxYRm7tp_4core3stre12trim_matchesNvMNtNtB5_4char7methodsc13is_whitespaceECs39mte1n7CTo_9node_repl
                          (puVar8[3],puVar8[4]);
      if ((auVar25._0_8_ != 0) && (auVar25._8_8_ != 0)) goto code_r0x004065d7;
    }
    goto code_r0x00406501;
  }
code_r0x004064a5:
  bVar23 = lStack_e8 == 0;
  lVar18 = lStack_e8 + -1;
  lStack_e8 = extraout_RDX;
  if (bVar23) goto code_r0x00406501;
  lVar19 = *(long *)(lVar19 + 0x278 + uVar20 * 8);
  lStack_e8 = lVar18;
  goto code_r0x00406411;
code_r0x00406501:
  uVar1 = *(ushort *)(lVar3 + 0x272);
  lVar18 = (ulong)((uint)uVar1 * 8) * 3;
  uVar21 = 0xffffffffffffffff;
  lVar16 = lVar3 + 0x168;
  puVar4 = (undefined8 *)(lVar3 + -8);
  do {
    puVar8 = puVar4;
    uVar20 = (ulong)uVar1;
    lStack_e0 = extraout_RDX;
    if (lVar18 == 0) goto code_r0x00406591;
    uVar20 = *(ulong *)(lVar16 + 0x10);
    lVar19 = uVar20 - 9;
    if (8 < uVar20) {
      uVar20 = 9;
    }
    iVar2 = (*(code *)PTR_memcmp_01084ac8)(&UNK_00d2266e,*(undefined8 *)(lVar16 + 8),uVar20);
    lVar19 = -lVar19;
    if (iVar2 != 0) {
      lVar19 = (long)iVar2;
    }
    uVar21 = uVar21 + 1;
    lVar18 = lVar18 + -0x18;
    lVar16 = lVar16 + 0x18;
    puVar4 = puVar8 + 4;
  } while ((char)((0 < lVar19) - (lVar19 < 0)) == '\x01');
  uVar20 = uVar21;
  if (0 < lVar19 == lVar19 < 0) {
    if (*(char *)(puVar8 + 1) == '\x03') {
      auVar25 = _RINvMNtCs7x1JxYRm7tp_4core3stre12trim_matchesNvMNtNtB5_4char7methodsc13is_whitespaceECs39mte1n7CTo_9node_repl
                          (puVar8[3],puVar8[4]);
      if ((auVar25._0_8_ != 0) && (auVar25._8_8_ != 0)) {
code_r0x004065d7:
        lVar15 = auVar25._8_8_;
        uVar17 = auVar25._0_8_;
        if (-1 < lVar15) goto code_r0x004065eb;
        uVar22 = 0;
        do {
          uVar17 = (*(code *)PTR__RNvNtCskPe9mFtgPYj_5alloc7raw_vec12handle_error_01084288)
                             (uVar22,lVar15);
code_r0x004065eb:
          (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01084408)
                    ();
          uVar22 = 1;
          lVar18 = (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_01085810)(lVar15,1);
        } while (lVar18 == 0);
        (*(code *)PTR_memcpy_01081c18)(lVar18,uVar17,lVar15);
        *plVar5 = lVar15;
        plVar5[1] = lVar18;
        plVar5[2] = lVar15;
        return;
      }
    }
    goto code_r0x00406640;
  }
code_r0x00406591:
  bVar23 = lStack_e8 == 0;
  lStack_e8 = lStack_e8 + -1;
  if (bVar23) goto code_r0x00406640;
  lVar3 = *(long *)(lVar3 + 0x278 + uVar20 * 8);
  goto code_r0x00406501;
code_r0x00406640:
  uVar1 = *(ushort *)(lVar15 + 0x272);
  lVar18 = (ulong)((uint)uVar1 * 8) * 3;
  uVar21 = 0xffffffffffffffff;
  lVar16 = lVar15 + 0x168;
  plVar14 = (long *)(lVar15 + -0x10);
  do {
    plVar13 = plVar14;
    uVar20 = (ulong)uVar1;
    if (lVar18 == 0) goto code_r0x004066e5;
    uVar20 = *(ulong *)(lVar16 + 0x10);
    lVar19 = uVar20 - 0x15;
    if (0x14 < uVar20) {
      uVar20 = 0x15;
    }
    iVar2 = (*(code *)PTR_memcmp_01084ac8)(&UNK_00d222b4,*(undefined8 *)(lVar16 + 8),uVar20);
    lVar19 = -lVar19;
    if (iVar2 != 0) {
      lVar19 = (long)iVar2;
    }
    plVar14 = plVar13 + 4;
    uVar21 = uVar21 + 1;
    lVar18 = lVar18 + -0x18;
    lVar16 = lVar16 + 0x18;
  } while ((char)((0 < lVar19) - (lVar19 < 0)) == '\x01');
  uVar20 = uVar21;
  if (0 < lVar19 == lVar19 < 0) {
    if ((char)plVar13[2] == '\x05') {
      lStack_d8 = plVar13[3];
      if (lStack_d8 == 0) goto code_r0x00406a47;
      lStack_e0 = *plVar14;
      lVar15 = lStack_d8;
      goto code_r0x0040672e;
    }
code_r0x004067e7:
    *plVar5 = -1;
    return;
  }
code_r0x004066e5:
  bVar23 = lStack_e0 == 0;
  lStack_e0 = lStack_e0 + -1;
  if (bVar23) goto code_r0x004067e7;
  lVar15 = *(long *)(lVar15 + 0x278 + uVar20 * 8);
  goto code_r0x00406640;
code_r0x00405cd6:
  uVar21 = (ulong)*(ushort *)(lVar9 + 0x272);
  lVar16 = (ulong)((uint)*(ushort *)(lVar9 + 0x272) * 8) * 3;
  uVar20 = 0xffffffffffffffff;
  lVar19 = lVar9 + 0x168;
  pcVar12 = (char *)(lVar9 + -0x20);
  do {
    pcVar11 = pcVar12;
    lVar3 = lVar15;
    if (lVar16 == 0) goto code_r0x00405d71;
    uVar6 = *(ulong *)(lVar19 + 0x10);
    lVar10 = uVar6 - 0xb;
    if (10 < uVar6) {
      uVar6 = 0xb;
    }
    iVar2 = (*(code *)PTR_memcmp_01084ac8)(&UNK_00d22655,*(undefined8 *)(lVar19 + 8),uVar6);
    lVar10 = -lVar10;
    if (iVar2 != 0) {
      lVar10 = (long)iVar2;
    }
    pcVar12 = pcVar11 + 0x20;
    uVar20 = uVar20 + 1;
    lVar16 = lVar16 + -0x18;
    lVar19 = lVar19 + 0x18;
  } while ((char)((0 < lVar10) - (lVar10 < 0)) == '\x01');
  uVar21 = uVar20;
  if (0 < lVar10 == lVar10 < 0) {
    lStack_80 = lVar18;
    if ((*pcVar12 == '\x05') &&
       (lVar16 = _RINvMsi_NtNtNtCskPe9mFtgPYj_5alloc11collections5btree3mapINtB6_8BTreeMapNtNtBc_6string6StringNtNtCs39mte1n7CTo_9node_repl13sandbox_state20FilesystemPermissionE3geteEB1x_
                           (pcVar11 + 0x28,&UNK_00d222b1,3), lVar16 != 0)) goto code_r0x00405dc5;
    goto code_r0x00405e5f;
  }
code_r0x00405d71:
  bVar23 = lStack_80 == 0;
  lVar16 = lStack_80 + -1;
  lStack_80 = lVar18;
  if (bVar23) goto code_r0x00405e5f;
  lVar9 = *(long *)(lVar9 + 0x278 + uVar21 * 8);
  lStack_80 = lVar16;
  goto code_r0x00405cd6;
code_r0x00405e5f:
  uVar1 = *(ushort *)(lVar3 + 0x272);
  lVar16 = lVar3 + -0x20;
  lVar19 = (ulong)((uint)uVar1 * 8) * 3;
  uVar21 = 0xffffffffffffffff;
  lVar9 = lVar3 + 0x168;
  do {
    uVar20 = (ulong)uVar1;
    if (lVar19 == 0) goto code_r0x00405ef5;
    uVar20 = *(ulong *)(lVar9 + 0x10);
    lVar10 = uVar20 - 3;
    if (2 < uVar20) {
      uVar20 = 3;
    }
    iVar2 = (*(code *)PTR_memcmp_01084ac8)(&UNK_00d222b1,*(undefined8 *)(lVar9 + 8),uVar20);
    lVar10 = -lVar10;
    if (iVar2 != 0) {
      lVar10 = (long)iVar2;
    }
    lVar16 = lVar16 + 0x20;
    uVar21 = uVar21 + 1;
    lVar19 = lVar19 + -0x18;
    lVar9 = lVar9 + 0x18;
  } while ((char)((0 < lVar10) - (lVar10 < 0)) == '\x01');
  uVar20 = uVar21;
  if (0 < lVar10 == lVar10 < 0) goto code_r0x00405dc5;
code_r0x00405ef5:
  if (lStack_80 == 0) goto code_r0x00405b92;
  lVar3 = *(long *)(lVar3 + 0x278 + uVar20 * 8);
  lStack_80 = lStack_80 + -1;
  goto code_r0x00405e5f;
code_r0x0040672e:
  uVar1 = *(ushort *)(lVar15 + 0x272);
  lVar18 = (ulong)((uint)uVar1 * 8) * 3;
  uVar21 = 0xffffffffffffffff;
  lVar16 = lVar15 + 0x168;
  puVar4 = (undefined8 *)(lVar15 + -8);
  do {
    puVar8 = puVar4;
    uVar20 = (ulong)uVar1;
    if (lVar18 == 0) goto code_r0x004067c5;
    uVar20 = *(ulong *)(lVar16 + 0x10);
    lVar19 = uVar20 - 0xf;
    if (0xe < uVar20) {
      uVar20 = 0xf;
    }
    iVar2 = (*(code *)PTR_memcmp_01084ac8)(&UNK_00d22213,*(undefined8 *)(lVar16 + 8),uVar20);
    lVar19 = -lVar19;
    if (iVar2 != 0) {
      lVar19 = (long)iVar2;
    }
    uVar21 = uVar21 + 1;
    lVar18 = lVar18 + -0x18;
    lVar16 = lVar16 + 0x18;
    puVar4 = puVar8 + 4;
  } while ((char)((0 < lVar19) - (lVar19 < 0)) == '\x01');
  uVar20 = uVar21;
  if (0 < lVar19 != lVar19 < 0) {
code_r0x004067c5:
    bVar23 = lStack_e0 == 0;
    lStack_e0 = lStack_e0 + -1;
    if (bVar23) goto code_r0x00406829;
    lVar15 = *(long *)(lVar15 + 0x278 + uVar20 * 8);
    goto code_r0x0040672e;
  }
  if (*(char *)(puVar8 + 1) == '\x03') {
    auVar25 = _RINvMNtCs7x1JxYRm7tp_4core3stre12trim_matchesNvMNtNtB5_4char7methodsc13is_whitespaceECs39mte1n7CTo_9node_repl
                        (puVar8[3],puVar8[4]);
    if ((auVar25._0_8_ != 0) && (auVar25._8_8_ != 0)) goto code_r0x00406a33;
    lStack_d8 = plVar13[3];
  }
code_r0x00406829:
  if (lStack_d8 != 0) {
    lStack_e0 = *plVar14;
    lVar15 = lStack_d8;
    while( true ) {
      uVar1 = *(ushort *)(lVar15 + 0x272);
      lVar18 = (ulong)((uint)uVar1 * 8) * 3;
      uVar21 = 0xffffffffffffffff;
      lVar16 = lVar15 + 0x168;
      puVar4 = (undefined8 *)(lVar15 + -8);
      do {
        puVar8 = puVar4;
        uVar20 = (ulong)uVar1;
        if (lVar18 == 0) goto code_r0x004068e5;
        uVar20 = *(ulong *)(lVar16 + 0x10);
        lVar19 = uVar20 - 9;
        if (8 < uVar20) {
          uVar20 = 9;
        }
        iVar2 = (*(code *)PTR_memcmp_01084ac8)(&UNK_00d22222,*(undefined8 *)(lVar16 + 8),uVar20);
        lVar19 = -lVar19;
        if (iVar2 != 0) {
          lVar19 = (long)iVar2;
        }
        uVar21 = uVar21 + 1;
        lVar18 = lVar18 + -0x18;
        lVar16 = lVar16 + 0x18;
        puVar4 = puVar8 + 4;
      } while ((char)((0 < lVar19) - (lVar19 < 0)) == '\x01');
      uVar20 = uVar21;
      if (0 < lVar19 == lVar19 < 0) break;
code_r0x004068e5:
      bVar23 = lStack_e0 == 0;
      lStack_e0 = lStack_e0 + -1;
      if (bVar23) goto code_r0x00406933;
      lVar15 = *(long *)(lVar15 + 0x278 + uVar20 * 8);
    }
    if (*(char *)(puVar8 + 1) == '\x03') {
      auVar25 = _RINvMNtCs7x1JxYRm7tp_4core3stre12trim_matchesNvMNtNtB5_4char7methodsc13is_whitespaceECs39mte1n7CTo_9node_repl
                          (puVar8[3],puVar8[4]);
      if ((auVar25._0_8_ != 0) && (auVar25._8_8_ != 0)) goto code_r0x00406a33;
      lStack_d8 = plVar13[3];
    }
code_r0x00406933:
    if (lStack_d8 != 0) {
      lStack_e0 = *plVar14;
      while( true ) {
        uVar1 = *(ushort *)(lStack_d8 + 0x272);
        lVar15 = (ulong)((uint)uVar1 * 8) * 3;
        uVar21 = 0xffffffffffffffff;
        lVar18 = lStack_d8 + 0x168;
        puVar4 = (undefined8 *)(lStack_d8 + -8);
        do {
          puVar8 = puVar4;
          uVar20 = (ulong)uVar1;
          if (lVar15 == 0) goto code_r0x004069f1;
          uVar20 = *(ulong *)(lVar18 + 0x10);
          lVar16 = uVar20 - 10;
          if (9 < uVar20) {
            uVar20 = 10;
          }
          iVar2 = (*(code *)PTR_memcmp_01084ac8)(&UNK_00d2222b,*(undefined8 *)(lVar18 + 8),uVar20);
          lVar16 = -lVar16;
          if (iVar2 != 0) {
            lVar16 = (long)iVar2;
          }
          uVar21 = uVar21 + 1;
          lVar15 = lVar15 + -0x18;
          lVar18 = lVar18 + 0x18;
          puVar4 = puVar8 + 4;
        } while ((char)((0 < lVar16) - (lVar16 < 0)) == '\x01');
        uVar20 = uVar21;
        if (0 < lVar16 == lVar16 < 0) break;
code_r0x004069f1:
        bVar23 = lStack_e0 == 0;
        lStack_e0 = lStack_e0 + -1;
        if (bVar23) goto code_r0x00406a47;
        lStack_d8 = *(long *)(lStack_d8 + 0x278 + uVar20 * 8);
      }
      if (*(char *)(puVar8 + 1) == '\x03') {
        auVar25 = _RINvMNtCs7x1JxYRm7tp_4core3stre12trim_matchesNvMNtNtB5_4char7methodsc13is_whitespaceECs39mte1n7CTo_9node_repl
                            (puVar8[3],puVar8[4]);
        if ((auVar25._0_8_ != 0) && (auVar25._8_8_ != 0)) {
code_r0x00406a33:
          lVar15 = auVar25._8_8_;
          if (lVar15 < 0) {
            uVar17 = 0;
          }
          else {
            (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01084408
            )();
            uVar17 = 1;
            lVar18 = (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_01085810)(lVar15,1);
            if (lVar18 != 0) {
              (*(code *)PTR_memcpy_01081c18)(lVar18,auVar25._0_8_,lVar15);
              *plVar5 = lVar15;
              plVar5[1] = lVar18;
              plVar5[2] = lVar15;
              return;
            }
          }
          (*(code *)PTR__RNvNtCskPe9mFtgPYj_5alloc7raw_vec12handle_error_01084288)(uVar17,lVar15);
        }
      }
    }
  }
code_r0x00406a47:
  *plVar5 = -1;
  return;
code_r0x00405dc5:
  _RNvNtCs39mte1n7CTo_9node_repl12computer_use22non_empty_string_value(&lStack_50,lVar16);
  lVar16 = lStack_50;
  puVar4 = puStack_48;
  lVar19 = lStack_40;
  if (lStack_50 == -1) goto code_r0x00405b92;
code_r0x00405deb:
  pcVar12 = (char *)_RINvMsi_NtNtNtCskPe9mFtgPYj_5alloc11collections5btree3mapINtB6_8BTreeMapNtNtBc_6string6StringNtNtCs39mte1n7CTo_9node_repl13sandbox_state20FilesystemPermissionE3geteEB1x_
                              (lStack_38,&UNK_00d222c9,7);
  if (pcVar12 != (char *)0x0) {
    if (*pcVar12 == '\x04') {
      lStack_50 = *(long *)(pcVar12 + 0x10);
      puStack_48 = (undefined8 *)(*(long *)(pcVar12 + 0x18) * 0x20 + lStack_50);
      uVar24 = _RINvXs2J_NtNtCs7x1JxYRm7tp_4core5slice4iterINtB7_4IterNtNtCs1Ii18fn1Uai_10serde_json5value5ValueENtNtNtNtBb_4iter6traits8iterator8Iterator3anyNCNvNtCs39mte1n7CTo_9node_repl12computer_use25computer_use_request_infos0_0EB2m_
                         (&lStack_50);
      goto code_r0x00405f46;
    }
    if ((*pcVar12 == '\x03') && (*(long *)(pcVar12 + 0x18) == 6)) {
      uVar24 = (short)(*(int **)(pcVar12 + 0x10))[1] == 0x7379 &&
               **(int **)(pcVar12 + 0x10) == 0x61776c61;
      goto code_r0x00405f46;
    }
  }
  uVar24 = 0;
code_r0x00405f46:
  _RNvNtCs39mte1n7CTo_9node_repl12computer_use28computer_use_conversation_id
            (&lStack_50,lVar15,lVar18);
  param_1[5] = lStack_40;
  param_1[3] = lStack_50;
  param_1[4] = (long)puStack_48;
  *param_1 = lVar16;
  param_1[1] = (long)puVar4;
  param_1[2] = lVar19;
  *(undefined1 *)(param_1 + 6) = uVar24;
  return;
}


