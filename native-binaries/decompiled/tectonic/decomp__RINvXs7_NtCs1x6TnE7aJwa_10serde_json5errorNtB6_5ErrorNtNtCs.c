// 00416c10  undefined _RINvXs7_NtCs1x6TnE7aJwa_10serde_json5errorNtB6_5ErrorNtNtCsa0iawoYldi8_10serde_core3ser5Error6customNtNtCs7x1JxYRm7tp_4core3fmt9ArgumentsECs14svwdtrmj2_24tectonic_engine_spx2html(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
_RINvXs7_NtCs1x6TnE7aJwa_10serde_json5errorNtB6_5ErrorNtNtCsa0iawoYldi8_10serde_core3ser5Error6customNtNtCs7x1JxYRm7tp_4core3fmt9ArgumentsECs14svwdtrmj2_24tectonic_engine_spx2html
          (ulong param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  char *pcVar1;
  char cVar2;
  ushort uVar3;
  byte bVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  undefined8 extraout_RDX;
  long lVar12;
  ulong uVar13;
  undefined1 (*pauVar14) [16];
  ulong uVar15;
  uint uVar16;
  long *plVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
  bool bVar23;
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulong uStack_28;
  long lStack_20;
  ulong uStack_18;
  undefined1 auVar25 [15];
  
  if ((param_1 & 1) == 0) {
    (*(code *)PTR__RNvNvNtCskPe9mFtgPYj_5alloc3fmt6format12format_inner_01813bc8)
              (&uStack_28,&UNK_01237904,param_1);
code_r0x00416c7e:
    uVar5 = (*(code *)PTR__RNvNtCs1x6TnE7aJwa_10serde_json5error10make_error_01818988)(&uStack_28);
    return uVar5;
  }
  param_1 = param_1 >> 1;
  uStack_28 = param_1;
  uStack_18 = param_1;
  if (param_1 == 0) {
    lStack_20 = 1;
    goto code_r0x00416c7e;
  }
  (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_018160c0)();
  lStack_20 = (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_018174c8)(param_1,1);
  if (lStack_20 != 0) {
    (*(code *)PTR_memcpy_018136a0)(lStack_20,&UNK_01237904,param_1);
    goto code_r0x00416c7e;
  }
  plVar17 = (long *)0x1;
  (*(code *)PTR__RNvNtCskPe9mFtgPYj_5alloc7raw_vec12handle_error_01815f30)();
  auVar24 = _UNK_0112cb90;
  uVar7 = plVar17[3];
  uVar13 = param_1 + uVar7;
  if (CARRY8(param_1,uVar7)) goto code_r0x00416dd1;
  uVar20 = plVar17[1];
  uVar19 = uVar20 + 1;
  uVar8 = (uVar19 & 0xfffffffffffffff8) - (uVar19 >> 3);
  if (uVar20 < 8) {
    uVar8 = uVar20;
  }
  if (uVar8 >> 1 < uVar13) {
    uVar7 = uVar8 + 1;
    if (uVar8 + 1 <= uVar13) {
      uVar7 = uVar13;
    }
    if (uVar7 < 0xf) {
      uVar13 = 4;
      if (3 < uVar7) {
        uVar13 = (ulong)((uint)uVar7 & 8) + 8;
      }
code_r0x00416da9:
      uVar20 = uVar13 * 0x20;
      uVar7 = uVar13 + 0x10;
      uVar19 = uVar7 + uVar20;
      if (uVar19 < 0x7ffffffffffffff1 && !CARRY8(uVar7,uVar20)) {
        (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_018160c0)();
        lVar6 = (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_018174c8)(uVar19,0x10);
        if (lVar6 == 0) {
          uVar5 = (*(code *)
                    PTR__RNvMNtCslxmoZqXxa5O_9hashbrown3rawNtB2_11Fallibility9alloc_err_018170c8)
                            (param_4 & 0xff,0x10,uVar19);
          return uVar5;
        }
        pauVar22 = (undefined1 (*) [16])(lVar6 + uVar20);
        uVar19 = uVar13 - 1;
        uVar20 = (uVar13 & 0xfffffffffffffff8) - (uVar13 >> 3);
        if (uVar13 < 9) {
          uVar20 = uVar19;
        }
        (*(code *)PTR_memset_01816048)(pauVar22,0xff,uVar7);
        lVar6 = plVar17[3];
        if (lVar6 == 0) {
          pauVar14 = (undefined1 (*) [16])*plVar17;
          lVar6 = 0;
        }
        else {
          pauVar14 = (undefined1 (*) [16])*plVar17;
          auVar24 = *pauVar14;
          uVar18 = ~(uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar24[0xf] >> 7) << 0xf);
          lVar12 = 0;
          pauVar21 = pauVar14;
          do {
            if ((short)uVar18 == 0) {
              do {
                auVar24 = pauVar21[1];
                pauVar21 = pauVar21 + 1;
                uVar18 = (ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar24[0xf] >> 7) << 0xf) ^ 0xffff;
                lVar12 = lVar12 + 0x10;
              } while (uVar18 == 0);
            }
            uVar16 = 0;
            for (uVar9 = uVar18; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
              uVar16 = uVar16 + 1;
            }
            uVar7 = _RINvYNtNtNtCs268jdzri8zx_3std4hash6random11RandomStateNtNtCs7x1JxYRm7tp_4core4hash11BuildHasher8hash_oneRNtNtCs14svwdtrmj2_24tectonic_engine_spx2html4html7ElementEB1J_
                              (extraout_RDX,pauVar14 + ((ulong)uVar16 + lVar12) * -2 + -2);
            uVar13 = uVar7 & uVar19;
            auVar24 = *(undefined1 (*) [16])(*pauVar22 + uVar13);
            uVar3 = (ushort)(SUB161(auVar24 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar24[0xf] >> 7) << 0xf;
            uVar9 = (uint)uVar3;
            if (uVar3 == 0) {
              lVar11 = 0x10;
              do {
                uVar13 = uVar13 + lVar11 & uVar19;
                auVar24 = *(undefined1 (*) [16])(*pauVar22 + uVar13);
                lVar11 = lVar11 + 0x10;
                uVar9 = (uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar24[0xf] >> 7) << 0xf);
              } while (uVar9 == 0);
            }
            uVar10 = 0;
            for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
              uVar10 = uVar10 + 1;
            }
            uVar13 = uVar10 + uVar13 & uVar19;
            if (-1 < (char)(*pauVar22)[uVar13]) {
              auVar24 = *pauVar22;
              uVar9 = 0;
              for (uVar10 = (uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                                           (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                                           (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                                           (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                                           (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                                           (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                                           (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                                           (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                                           (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                                           (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                                           (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                                           (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                                           (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                                           (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                                           (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                                          (ushort)(byte)(auVar24[0xf] >> 7) << 0xf);
                  (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                uVar9 = uVar9 + 1;
              }
              uVar13 = (ulong)uVar9;
            }
            uVar18 = uVar18 - 1 & uVar18;
            lVar6 = lVar6 + -1;
            bVar4 = (byte)(uVar7 >> 0x39);
            (*pauVar22)[uVar13] = bVar4;
            pauVar22[1][uVar13 - 0x10 & uVar19] = bVar4;
            pauVar14 = (undefined1 (*) [16])*plVar17;
            uVar7 = ~((ulong)uVar16 + lVar12);
            auVar24 = pauVar14[uVar7 * 2];
            uVar5 = *(undefined8 *)(pauVar14[uVar7 * 2 + 1] + 8);
            *(undefined8 *)pauVar22[~uVar13 * 2 + 1] = *(undefined8 *)pauVar14[uVar7 * 2 + 1];
            *(undefined8 *)(pauVar22[~uVar13 * 2 + 1] + 8) = uVar5;
            pauVar22[~uVar13 * 2] = auVar24;
          } while (lVar6 != 0);
          lVar6 = plVar17[3];
        }
        *plVar17 = (long)pauVar22;
        lVar12 = plVar17[1];
        plVar17[1] = uVar19;
        plVar17[2] = uVar20 - lVar6;
        plVar17[3] = lVar6;
        if (lVar12 != 0) {
          lVar11 = lVar12 * 0x20 + 0x20;
          lVar6 = lVar12 + lVar11 + 0x11;
          if (lVar6 != 0) {
            (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_01816b68)
                      ((long)pauVar14 - lVar11,lVar6,0x10);
          }
        }
        goto code_r0x0041721e;
      }
    }
    else if (uVar7 < 0x2000000000000000) {
      uVar7 = (uVar7 * 8) / 7 - 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      uVar7 = 0xffffffffffffffff >> (~(byte)lVar6 & 0x3f);
      if (uVar7 < 0x7ffffffffffffff) {
        uVar13 = uVar7 + 1;
        goto code_r0x00416da9;
      }
    }
code_r0x00416dd1:
    uVar5 = (*(code *)
              PTR__RNvMNtCslxmoZqXxa5O_9hashbrown3rawNtB2_11Fallibility17capacity_overflow_018182d8)
                      (param_4 & 0xff);
  }
  else {
    if (uVar19 == 0) {
      uVar13 = 0;
    }
    else {
      lVar6 = *plVar17;
      uVar7 = ((uVar19 >> 4) + 1) - (ulong)((uVar19 & 0xf) == 0);
      if (uVar7 == 1) {
        lVar12 = 0;
code_r0x00417004:
        pcVar1 = (char *)(lVar6 + lVar12);
        auVar25 = SUB1615((undefined1  [16])0x0,1);
        auVar24[0] = -(*pcVar1 < '\0');
        auVar24[1] = -(pcVar1[1] < '\0');
        auVar24[2] = -(pcVar1[2] < '\0');
        auVar24[3] = -(pcVar1[3] < '\0');
        auVar24[4] = -(pcVar1[4] < '\0');
        auVar24[5] = -(pcVar1[5] < '\0');
        auVar24[6] = -(pcVar1[6] < '\0');
        auVar24[7] = -(pcVar1[7] < '\0');
        auVar24[8] = -(pcVar1[8] < '\0');
        auVar24[9] = -(pcVar1[9] < auVar25[8]);
        auVar24[10] = -(pcVar1[10] < auVar25[9]);
        auVar24[0xb] = -(pcVar1[0xb] < auVar25[10]);
        auVar24[0xc] = -(pcVar1[0xc] < auVar25[0xb]);
        auVar24[0xd] = -(pcVar1[0xd] < auVar25[0xc]);
        auVar24[0xe] = -(pcVar1[0xe] < auVar25[0xd]);
        auVar24[0xf] = -(pcVar1[0xf] < auVar25[0xe]);
        *(undefined1 (*) [16])(lVar6 + lVar12) = auVar24 | _UNK_0112cb90;
      }
      else {
        uVar13 = uVar7 & 0x1ffffffffffffffe;
        lVar12 = 0;
        do {
          pcVar1 = (char *)(lVar6 + lVar12);
          auVar25 = SUB1615((undefined1  [16])0x0,1);
          auVar26[0] = -(*pcVar1 < '\0');
          auVar26[1] = -(pcVar1[1] < '\0');
          auVar26[2] = -(pcVar1[2] < '\0');
          auVar26[3] = -(pcVar1[3] < '\0');
          auVar26[4] = -(pcVar1[4] < '\0');
          auVar26[5] = -(pcVar1[5] < '\0');
          auVar26[6] = -(pcVar1[6] < '\0');
          auVar26[7] = -(pcVar1[7] < '\0');
          auVar26[8] = -(pcVar1[8] < '\0');
          auVar26[9] = -(pcVar1[9] < auVar25[8]);
          auVar26[10] = -(pcVar1[10] < auVar25[9]);
          auVar26[0xb] = -(pcVar1[0xb] < auVar25[10]);
          auVar26[0xc] = -(pcVar1[0xc] < auVar25[0xb]);
          auVar26[0xd] = -(pcVar1[0xd] < auVar25[0xc]);
          auVar26[0xe] = -(pcVar1[0xe] < auVar25[0xd]);
          auVar26[0xf] = -(pcVar1[0xf] < auVar25[0xe]);
          *(undefined1 (*) [16])(lVar6 + lVar12) = auVar26 | auVar24;
          pcVar1 = (char *)(lVar6 + 0x10 + lVar12);
          auVar25 = SUB1615((undefined1  [16])0x0,1);
          auVar27[0] = -(*pcVar1 < '\0');
          auVar27[1] = -(pcVar1[1] < '\0');
          auVar27[2] = -(pcVar1[2] < '\0');
          auVar27[3] = -(pcVar1[3] < '\0');
          auVar27[4] = -(pcVar1[4] < '\0');
          auVar27[5] = -(pcVar1[5] < '\0');
          auVar27[6] = -(pcVar1[6] < '\0');
          auVar27[7] = -(pcVar1[7] < '\0');
          auVar27[8] = -(pcVar1[8] < '\0');
          auVar27[9] = -(pcVar1[9] < auVar25[8]);
          auVar27[10] = -(pcVar1[10] < auVar25[9]);
          auVar27[0xb] = -(pcVar1[0xb] < auVar25[10]);
          auVar27[0xc] = -(pcVar1[0xc] < auVar25[0xb]);
          auVar27[0xd] = -(pcVar1[0xd] < auVar25[0xc]);
          auVar27[0xe] = -(pcVar1[0xe] < auVar25[0xd]);
          auVar27[0xf] = -(pcVar1[0xf] < auVar25[0xe]);
          *(undefined1 (*) [16])(lVar6 + 0x10 + lVar12) = auVar27 | auVar24;
          lVar12 = lVar12 + 0x20;
          uVar13 = uVar13 - 2;
        } while (uVar13 != 0);
        if ((uVar7 & 1) != 0) goto code_r0x00417004;
      }
      if (uVar19 < 0x10) {
        uVar13 = 0x10;
        uVar7 = uVar19;
      }
      else {
        uVar7 = 0x10;
        uVar13 = uVar19;
      }
      (*(code *)PTR_memmove_01817f08)(uVar13 + lVar6,lVar6,uVar7);
      uVar7 = 0;
      do {
        lVar6 = *plVar17;
        if (SBORROW1('\0',*(char *)(lVar6 + uVar7))) {
          pauVar22 = (undefined1 (*) [16])(~uVar7 * 0x20 + lVar6);
          while( true ) {
            uVar8 = _RINvYNtNtNtCs268jdzri8zx_3std4hash6random11RandomStateNtNtCs7x1JxYRm7tp_4core4hash11BuildHasher8hash_oneRNtNtCs14svwdtrmj2_24tectonic_engine_spx2html4html7ElementEB1J_
                              (extraout_RDX,lVar6 + uVar7 * -0x20 + -0x20);
            pauVar14 = (undefined1 (*) [16])*plVar17;
            uVar13 = plVar17[1];
            uVar15 = uVar13 & uVar8;
            auVar24 = *(undefined1 (*) [16])(*pauVar14 + uVar15);
            uVar3 = (ushort)(SUB161(auVar24 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar24[0xf] >> 7) << 0xf;
            uVar18 = (uint)uVar3;
            uVar19 = uVar15;
            if (uVar3 == 0) {
              lVar6 = 0x10;
              do {
                uVar19 = uVar19 + lVar6 & uVar13;
                auVar24 = *(undefined1 (*) [16])(*pauVar14 + uVar19);
                lVar6 = lVar6 + 0x10;
                uVar18 = (uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar24[0xf] >> 7) << 0xf);
              } while (uVar18 == 0);
            }
            uVar16 = 0;
            for (; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x80000000) {
              uVar16 = uVar16 + 1;
            }
            uVar19 = uVar16 + uVar19 & uVar13;
            if (-1 < (char)(*pauVar14)[uVar19]) {
              auVar24 = *pauVar14;
              uVar18 = 0;
              for (uVar16 = (uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                                           (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                                           (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                                           (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                                           (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                                           (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                                           (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                                           (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                                           (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                                           (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                                           (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                                           (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                                           (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                                           (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                                           (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                                          (ushort)(byte)(auVar24[0xf] >> 7) << 0xf);
                  (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
                uVar18 = uVar18 + 1;
              }
              uVar19 = (ulong)uVar18;
            }
            bVar4 = (byte)(uVar8 >> 0x38);
            if (((uVar19 - uVar15 ^ uVar7 - uVar15) & uVar13) < 0x10) {
              bVar4 = bVar4 >> 1;
              (*pauVar14)[uVar7] = bVar4;
              *(byte *)(*plVar17 + 0x10 + (uVar13 & uVar7 - 0x10)) = bVar4;
              goto code_r0x00417197;
            }
            pauVar21 = pauVar14 + ~uVar19 * 2;
            cVar2 = (*pauVar14)[uVar19];
            bVar4 = bVar4 >> 1;
            (*pauVar14)[uVar19] = bVar4;
            *(byte *)(*plVar17 + 0x10 + (uVar19 - 0x10 & uVar13)) = bVar4;
            if (cVar2 == -1) break;
            uVar5 = *(undefined8 *)*pauVar22;
            *(undefined8 *)*pauVar22 = *(undefined8 *)*pauVar21;
            *(undefined8 *)*pauVar21 = uVar5;
            uVar5 = *(undefined8 *)(*pauVar22 + 8);
            *(undefined8 *)(*pauVar22 + 8) = *(undefined8 *)(*pauVar21 + 8);
            *(undefined8 *)(*pauVar21 + 8) = uVar5;
            uVar5 = *(undefined8 *)pauVar22[1];
            *(undefined8 *)pauVar22[1] = *(undefined8 *)pauVar21[1];
            *(undefined8 *)pauVar21[1] = uVar5;
            uVar5 = *(undefined8 *)(pauVar22[1] + 8);
            *(undefined8 *)(pauVar22[1] + 8) = *(undefined8 *)(pauVar21[1] + 8);
            *(undefined8 *)(pauVar21[1] + 8) = uVar5;
            lVar6 = *plVar17;
          }
          uVar13 = plVar17[1];
          *(undefined1 *)(*plVar17 + uVar7) = 0xff;
          *(undefined1 *)(*plVar17 + 0x10 + (uVar7 - 0x10 & uVar13)) = 0xff;
          auVar24 = *pauVar22;
          uVar5 = *(undefined8 *)(pauVar22[1] + 8);
          *(undefined8 *)pauVar21[1] = *(undefined8 *)pauVar22[1];
          *(undefined8 *)(pauVar21[1] + 8) = uVar5;
          *pauVar21 = auVar24;
        }
code_r0x00417197:
        bVar23 = uVar7 != uVar20;
        uVar7 = uVar7 + 1;
      } while (bVar23);
      uVar19 = plVar17[1];
      uVar7 = plVar17[3];
      uVar13 = (uVar19 + 1 & 0xfffffffffffffff8) - (uVar19 + 1 >> 3);
      if (uVar19 < 8) {
        uVar13 = uVar19;
      }
    }
    plVar17[2] = uVar13 - uVar7;
code_r0x0041721e:
    uVar5 = 0xffffffffffffffff;
  }
  return uVar5;
}


