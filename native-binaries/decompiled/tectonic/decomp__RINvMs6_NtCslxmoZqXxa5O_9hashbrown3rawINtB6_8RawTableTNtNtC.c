// 004172f0  undefined _RINvMs6_NtCslxmoZqXxa5O_9hashbrown3rawINtB6_8RawTableTNtNtCskPe9mFtgPYj_5alloc6string6StringBQ_EE14reserve_rehashNCINvNtB8_3map11make_hasherBQ_BQ_NtNtNtCs268jdzri8zx_3std4hash6random11RandomStateE0ECs14svwdtrmj2_24tectonic_engine_spx2html(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
_RINvMs6_NtCslxmoZqXxa5O_9hashbrown3rawINtB6_8RawTableTNtNtCskPe9mFtgPYj_5alloc6string6StringBQ_EE14reserve_rehashNCINvNtB8_3map11make_hasherBQ_BQ_NtNtNtCs268jdzri8zx_3std4hash6random11RandomStateE0ECs14svwdtrmj2_24tectonic_engine_spx2html
          (long *param_1,ulong param_2,undefined8 param_3,undefined1 param_4)

{
  char *pcVar1;
  char cVar2;
  undefined1 auVar3 [16];
  ushort uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  undefined1 (*pauVar16) [16];
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  undefined1 (*pauVar21) [16];
  long lVar22;
  uint uVar23;
  undefined1 (*pauVar24) [16];
  bool bVar25;
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar27 [15];
  
  auVar26 = _UNK_0112cb90;
  uVar8 = param_1[3];
  uVar17 = param_2 + uVar8;
  if (CARRY8(param_2,uVar8)) goto code_r0x00417417;
  uVar15 = param_1[1];
  uVar13 = uVar15 + 1;
  uVar11 = (uVar13 & 0xfffffffffffffff8) - (uVar13 >> 3);
  if (uVar15 < 8) {
    uVar11 = uVar15;
  }
  if (uVar11 >> 1 < uVar17) {
    uVar8 = uVar11 + 1;
    if (uVar11 + 1 <= uVar17) {
      uVar8 = uVar17;
    }
    if (uVar8 < 0xf) {
      uVar17 = 4;
      if (3 < uVar8) {
        uVar17 = (ulong)((uint)uVar8 & 8) + 8;
      }
    }
    else {
      if (0x1fffffffffffffff < uVar8) goto code_r0x00417417;
      uVar8 = (uVar8 * 8) / 7 - 1;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar17 = (0xffffffffffffffffU >> (~(byte)lVar10 & 0x3f)) + 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar17;
    uVar8 = SUB168(auVar3 * ZEXT816(0x30),0);
    if (SUB168(auVar3 * ZEXT816(0x30),8) == 0) {
      uVar13 = uVar17 + 0x10;
      uVar15 = uVar8 + uVar13;
      if (uVar15 < 0x7ffffffffffffff1 && !CARRY8(uVar8,uVar13)) {
        (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_018160c0)();
        lVar10 = (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_018174c8)(uVar15,0x10);
        if (lVar10 == 0) {
          uVar9 = (*(code *)
                    PTR__RNvMNtCslxmoZqXxa5O_9hashbrown3rawNtB2_11Fallibility9alloc_err_018170c8)
                            (param_4,0x10,uVar15);
          return uVar9;
        }
        pauVar24 = (undefined1 (*) [16])(lVar10 + uVar8);
        uVar8 = uVar17 - 1;
        uVar15 = (uVar17 & 0xfffffffffffffff8) - (uVar17 >> 3);
        if (uVar17 < 9) {
          uVar15 = uVar8;
        }
        (*(code *)PTR_memset_01816048)(pauVar24,0xff,uVar13);
        lVar10 = param_1[3];
        if (lVar10 == 0) {
          pauVar21 = (undefined1 (*) [16])*param_1;
          lVar10 = 0;
        }
        else {
          pauVar16 = (undefined1 (*) [16])*param_1;
          auVar26 = *pauVar16;
          uVar23 = ~(uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar26[0xf] >> 7) << 0xf);
          lVar22 = 0;
          pauVar21 = pauVar16;
          do {
            if ((short)uVar23 == 0) {
              do {
                auVar26 = pauVar16[1];
                pauVar16 = pauVar16 + 1;
                uVar23 = (ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar26[0xf] >> 7) << 0xf) ^ 0xffff;
                lVar22 = lVar22 + 0x10;
              } while (uVar23 == 0);
            }
            uVar20 = 0;
            for (uVar14 = uVar23; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
              uVar20 = uVar20 + 1;
            }
            uVar17 = _RINvYNtNtNtCs268jdzri8zx_3std4hash6random11RandomStateNtNtCs7x1JxYRm7tp_4core4hash11BuildHasher8hash_oneRNtNtCskPe9mFtgPYj_5alloc6string6StringECs14svwdtrmj2_24tectonic_engine_spx2html
                               (param_3,pauVar21 + ((ulong)uVar20 + lVar22) * -3 + -3);
            uVar13 = uVar17 & uVar8;
            auVar26 = *(undefined1 (*) [16])(*pauVar24 + uVar13);
            uVar4 = (ushort)(SUB161(auVar26 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar26[0xf] >> 7) << 0xf;
            uVar14 = (uint)uVar4;
            if (uVar4 == 0) {
              lVar18 = 0x10;
              do {
                uVar13 = uVar13 + lVar18 & uVar8;
                auVar26 = *(undefined1 (*) [16])(*pauVar24 + uVar13);
                lVar18 = lVar18 + 0x10;
                uVar14 = (uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar26[0xf] >> 7) << 0xf);
              } while (uVar14 == 0);
            }
            uVar12 = 0;
            for (; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
              uVar12 = uVar12 + 1;
            }
            uVar13 = uVar12 + uVar13 & uVar8;
            if (-1 < (char)(*pauVar24)[uVar13]) {
              auVar26 = *pauVar24;
              uVar14 = 0;
              for (uVar12 = (uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                                           (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                                           (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                                           (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                                           (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                                           (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                                           (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                                           (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                                           (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                                           (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                                           (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                                           (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                                           (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                                           (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                                           (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                                          (ushort)(byte)(auVar26[0xf] >> 7) << 0xf);
                  (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
                uVar14 = uVar14 + 1;
              }
              uVar13 = (ulong)uVar14;
            }
            uVar23 = uVar23 - 1 & uVar23;
            lVar10 = lVar10 + -1;
            bVar7 = (byte)(uVar17 >> 0x39);
            (*pauVar24)[uVar13] = bVar7;
            pauVar24[1][uVar13 - 0x10 & uVar8] = bVar7;
            pauVar21 = (undefined1 (*) [16])*param_1;
            uVar17 = ~((ulong)uVar20 + lVar22);
            uVar13 = ~uVar13;
            auVar26 = pauVar21[uVar17 * 3];
            uVar9 = *(undefined8 *)pauVar21[uVar17 * 3 + 1];
            uVar5 = *(undefined8 *)(pauVar21[uVar17 * 3 + 1] + 8);
            uVar6 = *(undefined8 *)(pauVar21[uVar17 * 3 + 2] + 8);
            *(undefined8 *)pauVar24[uVar13 * 3 + 2] = *(undefined8 *)pauVar21[uVar17 * 3 + 2];
            *(undefined8 *)(pauVar24[uVar13 * 3 + 2] + 8) = uVar6;
            *(undefined8 *)pauVar24[uVar13 * 3 + 1] = uVar9;
            *(undefined8 *)(pauVar24[uVar13 * 3 + 1] + 8) = uVar5;
            pauVar24[uVar13 * 3] = auVar26;
          } while (lVar10 != 0);
          lVar10 = param_1[3];
        }
        *param_1 = (long)pauVar24;
        lVar22 = param_1[1];
        param_1[1] = uVar8;
        param_1[2] = uVar15 - lVar10;
        param_1[3] = lVar10;
        if (lVar22 != 0) {
          lVar10 = lVar22 * 0x30 + 0x30;
          lVar22 = lVar22 + lVar10 + 0x11;
          if (lVar22 != 0) {
            (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_01816b68)
                      ((long)pauVar21 - lVar10,lVar22,0x10);
          }
        }
        goto code_r0x004178bd;
      }
    }
code_r0x00417417:
    uVar9 = (*(code *)
              PTR__RNvMNtCslxmoZqXxa5O_9hashbrown3rawNtB2_11Fallibility17capacity_overflow_018182d8)
                      (param_4);
  }
  else {
    if (uVar13 == 0) {
      uVar17 = 0;
    }
    else {
      lVar10 = *param_1;
      uVar8 = ((uVar13 >> 4) + 1) - (ulong)((uVar13 & 0xf) == 0);
      if (uVar8 == 1) {
        lVar22 = 0;
code_r0x00417674:
        pcVar1 = (char *)(lVar10 + lVar22);
        auVar27 = SUB1615((undefined1  [16])0x0,1);
        auVar26[0] = -(*pcVar1 < '\0');
        auVar26[1] = -(pcVar1[1] < '\0');
        auVar26[2] = -(pcVar1[2] < '\0');
        auVar26[3] = -(pcVar1[3] < '\0');
        auVar26[4] = -(pcVar1[4] < '\0');
        auVar26[5] = -(pcVar1[5] < '\0');
        auVar26[6] = -(pcVar1[6] < '\0');
        auVar26[7] = -(pcVar1[7] < '\0');
        auVar26[8] = -(pcVar1[8] < '\0');
        auVar26[9] = -(pcVar1[9] < auVar27[8]);
        auVar26[10] = -(pcVar1[10] < auVar27[9]);
        auVar26[0xb] = -(pcVar1[0xb] < auVar27[10]);
        auVar26[0xc] = -(pcVar1[0xc] < auVar27[0xb]);
        auVar26[0xd] = -(pcVar1[0xd] < auVar27[0xc]);
        auVar26[0xe] = -(pcVar1[0xe] < auVar27[0xd]);
        auVar26[0xf] = -(pcVar1[0xf] < auVar27[0xe]);
        *(undefined1 (*) [16])(lVar10 + lVar22) = auVar26 | _UNK_0112cb90;
      }
      else {
        uVar17 = uVar8 & 0x1ffffffffffffffe;
        lVar22 = 0;
        do {
          pcVar1 = (char *)(lVar10 + lVar22);
          auVar27 = SUB1615((undefined1  [16])0x0,1);
          auVar28[0] = -(*pcVar1 < '\0');
          auVar28[1] = -(pcVar1[1] < '\0');
          auVar28[2] = -(pcVar1[2] < '\0');
          auVar28[3] = -(pcVar1[3] < '\0');
          auVar28[4] = -(pcVar1[4] < '\0');
          auVar28[5] = -(pcVar1[5] < '\0');
          auVar28[6] = -(pcVar1[6] < '\0');
          auVar28[7] = -(pcVar1[7] < '\0');
          auVar28[8] = -(pcVar1[8] < '\0');
          auVar28[9] = -(pcVar1[9] < auVar27[8]);
          auVar28[10] = -(pcVar1[10] < auVar27[9]);
          auVar28[0xb] = -(pcVar1[0xb] < auVar27[10]);
          auVar28[0xc] = -(pcVar1[0xc] < auVar27[0xb]);
          auVar28[0xd] = -(pcVar1[0xd] < auVar27[0xc]);
          auVar28[0xe] = -(pcVar1[0xe] < auVar27[0xd]);
          auVar28[0xf] = -(pcVar1[0xf] < auVar27[0xe]);
          *(undefined1 (*) [16])(lVar10 + lVar22) = auVar28 | auVar26;
          pcVar1 = (char *)(lVar10 + 0x10 + lVar22);
          auVar27 = SUB1615((undefined1  [16])0x0,1);
          auVar29[0] = -(*pcVar1 < '\0');
          auVar29[1] = -(pcVar1[1] < '\0');
          auVar29[2] = -(pcVar1[2] < '\0');
          auVar29[3] = -(pcVar1[3] < '\0');
          auVar29[4] = -(pcVar1[4] < '\0');
          auVar29[5] = -(pcVar1[5] < '\0');
          auVar29[6] = -(pcVar1[6] < '\0');
          auVar29[7] = -(pcVar1[7] < '\0');
          auVar29[8] = -(pcVar1[8] < '\0');
          auVar29[9] = -(pcVar1[9] < auVar27[8]);
          auVar29[10] = -(pcVar1[10] < auVar27[9]);
          auVar29[0xb] = -(pcVar1[0xb] < auVar27[10]);
          auVar29[0xc] = -(pcVar1[0xc] < auVar27[0xb]);
          auVar29[0xd] = -(pcVar1[0xd] < auVar27[0xc]);
          auVar29[0xe] = -(pcVar1[0xe] < auVar27[0xd]);
          auVar29[0xf] = -(pcVar1[0xf] < auVar27[0xe]);
          *(undefined1 (*) [16])(lVar10 + 0x10 + lVar22) = auVar29 | auVar26;
          lVar22 = lVar22 + 0x20;
          uVar17 = uVar17 - 2;
        } while (uVar17 != 0);
        if ((uVar8 & 1) != 0) goto code_r0x00417674;
      }
      if (uVar13 < 0x10) {
        uVar17 = 0x10;
        uVar8 = uVar13;
      }
      else {
        uVar8 = 0x10;
        uVar17 = uVar13;
      }
      (*(code *)PTR_memmove_01817f08)(uVar17 + lVar10,lVar10,uVar8);
      uVar8 = 0;
      do {
        lVar10 = *param_1;
        if (SBORROW1('\0',*(char *)(lVar10 + uVar8))) {
          pauVar24 = (undefined1 (*) [16])(~uVar8 * 0x30 + lVar10);
          while( true ) {
            uVar11 = _RINvYNtNtNtCs268jdzri8zx_3std4hash6random11RandomStateNtNtCs7x1JxYRm7tp_4core4hash11BuildHasher8hash_oneRNtNtCskPe9mFtgPYj_5alloc6string6StringECs14svwdtrmj2_24tectonic_engine_spx2html
                               (param_3,lVar10 + uVar8 * -0x30 + -0x30);
            pauVar21 = (undefined1 (*) [16])*param_1;
            uVar17 = param_1[1];
            uVar19 = uVar17 & uVar11;
            auVar26 = *(undefined1 (*) [16])(*pauVar21 + uVar19);
            uVar4 = (ushort)(SUB161(auVar26 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar26[0xf] >> 7) << 0xf;
            uVar23 = (uint)uVar4;
            uVar13 = uVar19;
            if (uVar4 == 0) {
              lVar10 = 0x10;
              do {
                uVar13 = uVar13 + lVar10 & uVar17;
                auVar26 = *(undefined1 (*) [16])(*pauVar21 + uVar13);
                lVar10 = lVar10 + 0x10;
                uVar23 = (uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar26[0xf] >> 7) << 0xf);
              } while (uVar23 == 0);
            }
            uVar20 = 0;
            for (; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
              uVar20 = uVar20 + 1;
            }
            uVar13 = uVar20 + uVar13 & uVar17;
            if (-1 < (char)(*pauVar21)[uVar13]) {
              auVar26 = *pauVar21;
              uVar23 = 0;
              for (uVar20 = (uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                                           (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                                           (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                                           (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                                           (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                                           (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                                           (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                                           (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                                           (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                                           (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                                           (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                                           (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                                           (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                                           (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                                           (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                                          (ushort)(byte)(auVar26[0xf] >> 7) << 0xf);
                  (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x80000000) {
                uVar23 = uVar23 + 1;
              }
              uVar13 = (ulong)uVar23;
            }
            bVar7 = (byte)(uVar11 >> 0x38);
            if (((uVar13 - uVar19 ^ uVar8 - uVar19) & uVar17) < 0x10) {
              bVar7 = bVar7 >> 1;
              (*pauVar21)[uVar8] = bVar7;
              *(byte *)(*param_1 + 0x10 + (uVar17 & uVar8 - 0x10)) = bVar7;
              goto code_r0x00417826;
            }
            pauVar16 = pauVar21 + ~uVar13 * 3;
            cVar2 = (*pauVar21)[uVar13];
            bVar7 = bVar7 >> 1;
            (*pauVar21)[uVar13] = bVar7;
            *(byte *)(*param_1 + 0x10 + (uVar13 - 0x10 & uVar17)) = bVar7;
            if (cVar2 == -1) break;
            uVar9 = *(undefined8 *)*pauVar24;
            *(undefined8 *)*pauVar24 = *(undefined8 *)*pauVar16;
            *(undefined8 *)*pauVar16 = uVar9;
            uVar9 = *(undefined8 *)(*pauVar24 + 8);
            *(undefined8 *)(*pauVar24 + 8) = *(undefined8 *)(*pauVar16 + 8);
            *(undefined8 *)(*pauVar16 + 8) = uVar9;
            uVar9 = *(undefined8 *)pauVar24[1];
            *(undefined8 *)pauVar24[1] = *(undefined8 *)pauVar16[1];
            *(undefined8 *)pauVar16[1] = uVar9;
            uVar9 = *(undefined8 *)(pauVar24[1] + 8);
            *(undefined8 *)(pauVar24[1] + 8) = *(undefined8 *)(pauVar16[1] + 8);
            *(undefined8 *)(pauVar16[1] + 8) = uVar9;
            uVar9 = *(undefined8 *)pauVar24[2];
            *(undefined8 *)pauVar24[2] = *(undefined8 *)pauVar16[2];
            *(undefined8 *)pauVar16[2] = uVar9;
            uVar9 = *(undefined8 *)(pauVar24[2] + 8);
            *(undefined8 *)(pauVar24[2] + 8) = *(undefined8 *)(pauVar16[2] + 8);
            *(undefined8 *)(pauVar16[2] + 8) = uVar9;
            lVar10 = *param_1;
          }
          uVar17 = param_1[1];
          *(undefined1 *)(*param_1 + uVar8) = 0xff;
          *(undefined1 *)(*param_1 + 0x10 + (uVar8 - 0x10 & uVar17)) = 0xff;
          auVar26 = *pauVar24;
          uVar9 = *(undefined8 *)pauVar24[1];
          uVar5 = *(undefined8 *)(pauVar24[1] + 8);
          uVar6 = *(undefined8 *)(pauVar24[2] + 8);
          *(undefined8 *)pauVar16[2] = *(undefined8 *)pauVar24[2];
          *(undefined8 *)(pauVar16[2] + 8) = uVar6;
          *(undefined8 *)pauVar16[1] = uVar9;
          *(undefined8 *)(pauVar16[1] + 8) = uVar5;
          *pauVar16 = auVar26;
        }
code_r0x00417826:
        bVar25 = uVar8 != uVar15;
        uVar8 = uVar8 + 1;
      } while (bVar25);
      uVar13 = param_1[1];
      uVar8 = param_1[3];
      uVar17 = (uVar13 + 1 & 0xfffffffffffffff8) - (uVar13 + 1 >> 3);
      if (uVar13 < 8) {
        uVar17 = uVar13;
      }
    }
    param_1[2] = uVar17 - uVar8;
code_r0x004178bd:
    uVar9 = 0xffffffffffffffff;
  }
  return uVar9;
}


