// 00413480  undefined _RINvMs6_NtCslxmoZqXxa5O_9hashbrown3rawINtB6_8RawTableTNtNtNtCskPe9mFtgPYj_5alloc3ffi5c_str7CStringjEE14reserve_rehashNCINvNtB8_3map11make_hasherBQ_jNtNtNtCs268jdzri8zx_3std4hash6random11RandomStateE0ECscQAu5eV4mxq_21tectonic_xetex_layout(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
_RINvMs6_NtCslxmoZqXxa5O_9hashbrown3rawINtB6_8RawTableTNtNtNtCskPe9mFtgPYj_5alloc3ffi5c_str7CStringjEE14reserve_rehashNCINvNtB8_3map11make_hasherBQ_jNtNtNtCs268jdzri8zx_3std4hash6random11RandomStateE0ECscQAu5eV4mxq_21tectonic_xetex_layout
          (undefined8 *param_1,ulong param_2,undefined8 param_3,undefined1 param_4)

{
  char *pcVar1;
  char cVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  ushort uVar5;
  byte bVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  uint uVar21;
  ulong uVar22;
  bool bVar23;
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar25 [15];
  
  auVar24 = _UNK_0112cb90;
  uVar12 = param_1[3];
  uVar16 = param_2 + uVar12;
  if (CARRY8(param_2,uVar12)) goto code_r0x004135b3;
  uVar3 = param_1[1];
  uVar9 = uVar3 + 1;
  uVar14 = (uVar9 & 0xfffffffffffffff8) - (uVar9 >> 3);
  if (uVar3 < 8) {
    uVar14 = uVar3;
  }
  if (uVar14 >> 1 < uVar16) {
    uVar9 = uVar14 + 1;
    if (uVar14 + 1 <= uVar16) {
      uVar9 = uVar16;
    }
    if (uVar9 < 0xf) {
      uVar16 = 4;
      if (3 < uVar9) {
        uVar16 = (ulong)((uint)uVar9 & 8) + 8;
      }
    }
    else {
      if (0x1fffffffffffffff < uVar9) goto code_r0x004135b3;
      uVar16 = (uVar9 * 8) / 7 - 1;
      lVar8 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar16 = (0xffffffffffffffffU >> (~(byte)lVar8 & 0x3f)) + 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar16;
    if (SUB168(auVar4 * ZEXT816(0x18),8) == 0) {
      uVar22 = SUB168(auVar4 * ZEXT816(0x18),0) + 0xfU & 0xfffffffffffffff0;
      uVar9 = uVar16 + 0x10;
      uVar14 = uVar22 + uVar9;
      if (uVar14 < 0x7ffffffffffffff1 && !CARRY8(uVar22,uVar9)) {
        (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_018160c0)();
        lVar8 = (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_018174c8)(uVar14,0x10);
        if (lVar8 == 0) {
          uVar7 = (*(code *)
                    PTR__RNvMNtCslxmoZqXxa5O_9hashbrown3rawNtB2_11Fallibility9alloc_err_018170c8)
                            (param_4,0x10,uVar14);
          return uVar7;
        }
        pauVar19 = (undefined1 (*) [16])(lVar8 + uVar22);
        uVar14 = uVar16 - 1;
        uVar22 = (uVar16 & 0xfffffffffffffff8) - (uVar16 >> 3);
        if (uVar16 < 9) {
          uVar22 = uVar14;
        }
        (*(code *)PTR_memset_01816048)(pauVar19,0xff,uVar9);
        if (uVar12 == 0) {
          pauVar18 = (undefined1 (*) [16])*param_1;
        }
        else {
          pauVar18 = (undefined1 (*) [16])*param_1;
          auVar24 = *pauVar18;
          uVar21 = ~(uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
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
          lVar8 = 0;
          uVar16 = uVar12;
          pauVar20 = pauVar18;
          do {
            if ((short)uVar21 == 0) {
              do {
                auVar24 = pauVar20[1];
                pauVar20 = pauVar20 + 1;
                uVar21 = (ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
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
                lVar8 = lVar8 + 0x10;
              } while (uVar21 == 0);
            }
            uVar15 = 0;
            for (uVar13 = uVar21; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
              uVar15 = uVar15 + 1;
            }
            uVar9 = _RINvYNtNtNtCs268jdzri8zx_3std4hash6random11RandomStateNtNtCs7x1JxYRm7tp_4core4hash11BuildHasher8hash_oneRNtNtNtCskPe9mFtgPYj_5alloc3ffi5c_str7CStringECscQAu5eV4mxq_21tectonic_xetex_layout
                              (param_3,(long)pauVar18 + ((ulong)uVar15 + lVar8) * -0x18 + -0x18);
            uVar11 = uVar9 & uVar14;
            auVar24 = *(undefined1 (*) [16])(*pauVar19 + uVar11);
            uVar5 = (ushort)(SUB161(auVar24 >> 7,0) & 1) |
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
            uVar13 = (uint)uVar5;
            if (uVar5 == 0) {
              lVar17 = 0x10;
              do {
                uVar11 = uVar11 + lVar17 & uVar14;
                auVar24 = *(undefined1 (*) [16])(*pauVar19 + uVar11);
                lVar17 = lVar17 + 0x10;
                uVar13 = (uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
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
              } while (uVar13 == 0);
            }
            uVar10 = 0;
            for (; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
              uVar10 = uVar10 + 1;
            }
            uVar11 = uVar10 + uVar11 & uVar14;
            if (-1 < (char)(*pauVar19)[uVar11]) {
              auVar24 = *pauVar19;
              uVar13 = 0;
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
                uVar13 = uVar13 + 1;
              }
              uVar11 = (ulong)uVar13;
            }
            uVar21 = uVar21 - 1 & uVar21;
            uVar16 = uVar16 - 1;
            bVar6 = (byte)(uVar9 >> 0x39);
            (*pauVar19)[uVar11] = bVar6;
            pauVar19[1][uVar11 - 0x10 & uVar14] = bVar6;
            uVar9 = ~((ulong)uVar15 + lVar8);
            *(undefined8 *)((long)pauVar19 + ~uVar11 * 0x18 + 0x10) =
                 *(undefined8 *)((long)pauVar18 + uVar9 * 0x18 + 0x10);
            *(undefined1 (*) [16])((long)pauVar19 + ~uVar11 * 0x18) =
                 *(undefined1 (*) [16])((long)pauVar18 + uVar9 * 0x18);
          } while (uVar16 != 0);
        }
        *param_1 = pauVar19;
        param_1[1] = uVar14;
        param_1[2] = uVar22 - uVar12;
        if (uVar3 == 0) {
          return 0xffffffffffffffff;
        }
        uVar12 = uVar3 * 0x18 + 0x27 & 0xfffffffffffffff0;
        lVar8 = uVar3 + uVar12 + 0x11;
        if (lVar8 == 0) {
          return 0xffffffffffffffff;
        }
        (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_01816b68)
                  ((long)pauVar18 - uVar12,lVar8,0x10);
        goto code_r0x004139b5;
      }
    }
code_r0x004135b3:
    uVar7 = (*(code *)
              PTR__RNvMNtCslxmoZqXxa5O_9hashbrown3rawNtB2_11Fallibility17capacity_overflow_018182d8)
                      (param_4);
  }
  else {
    if (uVar9 == 0) {
      uVar16 = 0;
    }
    else {
      pauVar19 = (undefined1 (*) [16])*param_1;
      uVar12 = ((uVar9 >> 4) + 1) - (ulong)((uVar9 & 0xf) == 0);
      if (uVar12 == 1) {
        lVar8 = 0;
code_r0x004137c8:
        pcVar1 = *pauVar19 + lVar8;
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
        *(undefined1 (*) [16])(*pauVar19 + lVar8) = auVar24 | _UNK_0112cb90;
      }
      else {
        uVar16 = uVar12 & 0x1ffffffffffffffe;
        lVar8 = 0;
        do {
          pcVar1 = *pauVar19 + lVar8;
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
          *(undefined1 (*) [16])(*pauVar19 + lVar8) = auVar26 | auVar24;
          pcVar1 = pauVar19[1] + lVar8;
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
          *(undefined1 (*) [16])(pauVar19[1] + lVar8) = auVar27 | auVar24;
          lVar8 = lVar8 + 0x20;
          uVar16 = uVar16 - 2;
        } while (uVar16 != 0);
        if ((uVar12 & 1) != 0) goto code_r0x004137c8;
      }
      if (uVar9 < 0x10) {
        uVar16 = 0x10;
        uVar12 = uVar9;
      }
      else {
        uVar12 = 0x10;
        uVar16 = uVar9;
      }
      (*(code *)PTR_memmove_01817f08)(*pauVar19 + uVar16,pauVar19,uVar12);
      uVar12 = 0;
      do {
        if (SBORROW1('\0',(*pauVar19)[uVar12])) {
          pauVar18 = (undefined1 (*) [16])((long)pauVar19 + ~uVar12 * 0x18);
          while( true ) {
            uVar14 = _RINvYNtNtNtCs268jdzri8zx_3std4hash6random11RandomStateNtNtCs7x1JxYRm7tp_4core4hash11BuildHasher8hash_oneRNtNtNtCskPe9mFtgPYj_5alloc3ffi5c_str7CStringECscQAu5eV4mxq_21tectonic_xetex_layout
                               (param_3,(long)pauVar19 + uVar12 * -0x18 + -0x18);
            uVar16 = param_1[1];
            uVar22 = uVar16 & uVar14;
            auVar24 = *(undefined1 (*) [16])(*pauVar19 + uVar22);
            uVar5 = (ushort)(SUB161(auVar24 >> 7,0) & 1) |
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
            uVar21 = (uint)uVar5;
            uVar9 = uVar22;
            if (uVar5 == 0) {
              lVar8 = 0x10;
              do {
                uVar9 = uVar9 + lVar8 & uVar16;
                auVar24 = *(undefined1 (*) [16])(*pauVar19 + uVar9);
                lVar8 = lVar8 + 0x10;
                uVar21 = (uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
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
              } while (uVar21 == 0);
            }
            uVar15 = 0;
            for (; (uVar21 & 1) == 0; uVar21 = uVar21 >> 1 | 0x80000000) {
              uVar15 = uVar15 + 1;
            }
            uVar9 = uVar15 + uVar9 & uVar16;
            if (-1 < (char)(*pauVar19)[uVar9]) {
              auVar24 = *pauVar19;
              uVar21 = 0;
              for (uVar15 = (uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
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
                  (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
                uVar21 = uVar21 + 1;
              }
              uVar9 = (ulong)uVar21;
            }
            bVar6 = (byte)(uVar14 >> 0x38);
            if (((uVar9 - uVar22 ^ uVar12 - uVar22) & uVar16) < 0x10) {
              bVar6 = bVar6 >> 1;
              (*pauVar19)[uVar12] = bVar6;
              pauVar19 = (undefined1 (*) [16])*param_1;
              pauVar19[1][uVar16 & uVar12 - 0x10] = bVar6;
              goto code_r0x0041393a;
            }
            pauVar20 = (undefined1 (*) [16])((long)pauVar19 + ~uVar9 * 0x18);
            cVar2 = (*pauVar19)[uVar9];
            bVar6 = bVar6 >> 1;
            (*pauVar19)[uVar9] = bVar6;
            pauVar19 = (undefined1 (*) [16])*param_1;
            pauVar19[1][uVar9 - 0x10 & uVar16] = bVar6;
            if (cVar2 == -1) break;
            uVar7 = *(undefined8 *)*pauVar18;
            *(undefined8 *)*pauVar18 = *(undefined8 *)*pauVar20;
            *(undefined8 *)*pauVar20 = uVar7;
            uVar7 = *(undefined8 *)(*pauVar18 + 8);
            *(undefined8 *)(*pauVar18 + 8) = *(undefined8 *)(*pauVar20 + 8);
            *(undefined8 *)(*pauVar20 + 8) = uVar7;
            uVar7 = *(undefined8 *)pauVar18[1];
            *(undefined8 *)pauVar18[1] = *(undefined8 *)pauVar20[1];
            *(undefined8 *)pauVar20[1] = uVar7;
            pauVar19 = (undefined1 (*) [16])*param_1;
          }
          uVar16 = param_1[1];
          (*pauVar19)[uVar12] = 0xff;
          pauVar19[1][uVar12 - 0x10 & uVar16] = 0xff;
          *(undefined8 *)pauVar20[1] = *(undefined8 *)pauVar18[1];
          *pauVar20 = *pauVar18;
        }
code_r0x0041393a:
        bVar23 = uVar12 != uVar3;
        uVar12 = uVar12 + 1;
      } while (bVar23);
      uVar9 = param_1[1];
      uVar12 = param_1[3];
      uVar16 = (uVar9 + 1 & 0xfffffffffffffff8) - (uVar9 + 1 >> 3);
      if (uVar9 < 8) {
        uVar16 = uVar9;
      }
    }
    param_1[2] = uVar16 - uVar12;
code_r0x004139b5:
    uVar7 = 0xffffffffffffffff;
  }
  return uVar7;
}


