// 00415240  undefined _RINvMs6_NtCsdcUUXnWQAR4_9hashbrown3rawINtB6_8RawTablejE14reserve_rehashNCINvNtCsbFgATArnB1d_8indexmap5inner8get_hashNtNtCs6jvT8GW1FjT_22tectonic_engine_bibtex4hash4NodeuE0EB1U_(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
_RINvMs6_NtCsdcUUXnWQAR4_9hashbrown3rawINtB6_8RawTablejE14reserve_rehashNCINvNtCsbFgATArnB1d_8indexmap5inner8get_hashNtNtCs6jvT8GW1FjT_22tectonic_engine_bibtex4hash4NodeuE0EB1U_
          (long *param_1,ulong param_2,long param_3,ulong param_4,undefined1 param_5)

{
  char *pcVar1;
  char cVar2;
  code *pcVar3;
  ushort uVar4;
  byte bVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  long lVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  undefined1 (*pauVar20) [16];
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  bool bVar25;
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar27 [15];
  
  auVar26 = _UNK_0112cb90;
  uVar9 = param_1[3];
  uVar13 = param_2 + uVar9;
  if (CARRY8(param_2,uVar9)) goto code_r0x0041536e;
  uVar23 = param_1[1];
  uVar12 = uVar23 + 1;
  uVar8 = (uVar12 & 0xfffffffffffffff8) - (uVar12 >> 3);
  if (uVar23 < 8) {
    uVar8 = uVar23;
  }
  if (uVar8 >> 1 < uVar13) {
    uVar9 = uVar8 + 1;
    if (uVar8 + 1 <= uVar13) {
      uVar9 = uVar13;
    }
    if (uVar9 < 0xf) {
      uVar13 = 4;
      if (3 < uVar9) {
        uVar13 = (ulong)((uint)uVar9 & 8) + 8;
      }
code_r0x00415341:
      uVar23 = uVar13 * 8 + 0xf & 0xfffffffffffffff0;
      uVar9 = uVar13 + 0x10;
      uVar12 = uVar23 + uVar9;
      if (uVar12 < 0x7ffffffffffffff1 && !CARRY8(uVar23,uVar9)) {
        (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_018160c0)();
        lVar7 = (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_018174c8)(uVar12,0x10);
        if (lVar7 == 0) {
          uVar6 = (*(code *)
                    PTR__RNvMNtCsdcUUXnWQAR4_9hashbrown3rawNtB2_11Fallibility9alloc_err_01816780)
                            (param_5,0x10,uVar12);
          return uVar6;
        }
        uVar12 = uVar13 - 1;
        uVar8 = (uVar13 & 0xfffffffffffffff8) - (uVar13 >> 3);
        if (uVar13 < 9) {
          uVar8 = uVar12;
        }
        pauVar20 = (undefined1 (*) [16])(lVar7 + uVar23);
        (*(code *)PTR_memset_01816048)(pauVar20,0xff,uVar9);
        lVar7 = param_1[3];
        if (lVar7 == 0) {
          pauVar15 = (undefined1 (*) [16])*param_1;
        }
        else {
          pauVar15 = (undefined1 (*) [16])*param_1;
          auVar26 = *pauVar15;
          uVar17 = ~(uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
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
          lVar10 = 0;
          pauVar14 = pauVar15;
          lVar16 = lVar7;
          do {
            if ((short)uVar17 == 0) {
              do {
                auVar26 = pauVar14[1];
                pauVar14 = pauVar14 + 1;
                uVar17 = (ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
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
                lVar10 = lVar10 + 0x10;
              } while (uVar17 == 0);
            }
            uVar11 = 0;
            for (uVar21 = uVar17; (uVar21 & 1) == 0; uVar21 = uVar21 >> 1 | 0x80000000) {
              uVar11 = uVar11 + 1;
            }
            uVar9 = *(ulong *)((long)pauVar15 + ((ulong)uVar11 + lVar10) * -8 + -8);
            if (param_4 <= uVar9) {
              (*(code *)PTR__RNvNtCs7x1JxYRm7tp_4core9panicking18panic_bounds_check_018178e0)
                        (uVar9,param_4,&UNK_01676520);
code_r0x00415807:
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            uVar9 = *(ulong *)(param_3 + uVar9 * 0x58);
            uVar13 = uVar9 & uVar12;
            auVar26 = *(undefined1 (*) [16])(*pauVar20 + uVar13);
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
            uVar21 = (uint)uVar4;
            if (uVar4 == 0) {
              lVar24 = 0x10;
              do {
                uVar13 = uVar13 + lVar24 & uVar12;
                auVar26 = *(undefined1 (*) [16])(*pauVar20 + uVar13);
                lVar24 = lVar24 + 0x10;
                uVar21 = (uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
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
              } while (uVar21 == 0);
            }
            uVar18 = 0;
            for (; (uVar21 & 1) == 0; uVar21 = uVar21 >> 1 | 0x80000000) {
              uVar18 = uVar18 + 1;
            }
            uVar13 = uVar18 + uVar13 & uVar12;
            if (-1 < (char)(*pauVar20)[uVar13]) {
              auVar26 = *pauVar20;
              uVar21 = 0;
              for (uVar18 = (uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
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
                  (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x80000000) {
                uVar21 = uVar21 + 1;
              }
              uVar13 = (ulong)uVar21;
            }
            uVar17 = uVar17 - 1 & uVar17;
            lVar16 = lVar16 + -1;
            bVar5 = (byte)(uVar9 >> 0x39);
            (*pauVar20)[uVar13] = bVar5;
            pauVar20[1][uVar13 - 0x10 & uVar12] = bVar5;
            *(undefined8 *)((long)pauVar20 + uVar13 * -8 + -8) =
                 *(undefined8 *)((long)pauVar15 + ((ulong)uVar11 + lVar10) * -8 + -8);
          } while (lVar16 != 0);
        }
        *param_1 = (long)pauVar20;
        lVar16 = param_1[1];
        param_1[1] = uVar12;
        param_1[2] = uVar8 - lVar7;
        if (lVar16 != 0) {
          uVar9 = lVar16 * 8 + 0x17U & 0xfffffffffffffff0;
          (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_01816b68)
                    ((long)pauVar15 - uVar9,lVar16 + uVar9 + 0x11,0x10);
        }
        goto code_r0x00415775;
      }
    }
    else if (uVar9 < 0x2000000000000000) {
      uVar9 = (uVar9 * 8) / 7 - 1;
      lVar7 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar9 = 0xffffffffffffffff >> (~(byte)lVar7 & 0x3f);
      if (uVar9 < 0x1ffffffffffffffe) {
        uVar13 = uVar9 + 1;
        goto code_r0x00415341;
      }
    }
code_r0x0041536e:
    uVar6 = (*(code *)
              PTR__RNvMNtCsdcUUXnWQAR4_9hashbrown3rawNtB2_11Fallibility17capacity_overflow_01815cf8)
                      (param_5);
  }
  else {
    if (uVar12 == 0) {
      uVar13 = 0;
    }
    else {
      lVar7 = *param_1;
      uVar9 = ((uVar12 >> 4) + 1) - (ulong)((uVar12 & 0xf) == 0);
      if (uVar9 == 1) {
        lVar16 = 0;
code_r0x00415584:
        pcVar1 = (char *)(lVar7 + lVar16);
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
        *(undefined1 (*) [16])(lVar7 + lVar16) = auVar26 | _UNK_0112cb90;
      }
      else {
        uVar13 = uVar9 & 0x1ffffffffffffffe;
        lVar16 = 0;
        do {
          pcVar1 = (char *)(lVar7 + lVar16);
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
          *(undefined1 (*) [16])(lVar7 + lVar16) = auVar28 | auVar26;
          pcVar1 = (char *)(lVar7 + 0x10 + lVar16);
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
          *(undefined1 (*) [16])(lVar7 + 0x10 + lVar16) = auVar29 | auVar26;
          lVar16 = lVar16 + 0x20;
          uVar13 = uVar13 - 2;
        } while (uVar13 != 0);
        if ((uVar9 & 1) != 0) goto code_r0x00415584;
      }
      if (uVar12 < 0x10) {
        uVar13 = 0x10;
        uVar9 = uVar12;
      }
      else {
        uVar9 = 0x10;
        uVar13 = uVar12;
      }
      (*(code *)PTR_memmove_01817f08)(uVar13 + lVar7,lVar7,uVar9);
      uVar9 = 0;
      do {
        pauVar20 = (undefined1 (*) [16])*param_1;
        if (SBORROW1('\0',(*pauVar20)[uVar9])) {
          uVar13 = *(ulong *)((long)pauVar20 + uVar9 * -8 + -8);
          if (param_4 <= uVar13) {
code_r0x004157de:
            (*(code *)PTR__RNvNtCs7x1JxYRm7tp_4core9panicking18panic_bounds_check_018178e0)
                      (uVar13,param_4,&UNK_01676520);
            goto code_r0x00415807;
          }
          uVar12 = ~uVar9;
          pauVar15 = pauVar20;
          while( true ) {
            uVar13 = *(ulong *)(param_3 + uVar13 * 0x58);
            uVar8 = param_1[1];
            uVar19 = uVar8 & uVar13;
            auVar26 = *(undefined1 (*) [16])(*pauVar15 + uVar19);
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
            uVar17 = (uint)uVar4;
            uVar22 = uVar19;
            if (uVar4 == 0) {
              lVar7 = 0x10;
              do {
                uVar22 = uVar22 + lVar7 & uVar8;
                auVar26 = *(undefined1 (*) [16])(*pauVar15 + uVar22);
                lVar7 = lVar7 + 0x10;
                uVar17 = (uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
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
              } while (uVar17 == 0);
            }
            uVar11 = 0;
            for (; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x80000000) {
              uVar11 = uVar11 + 1;
            }
            uVar22 = uVar11 + uVar22 & uVar8;
            if (-1 < (char)(*pauVar15)[uVar22]) {
              auVar26 = *pauVar15;
              uVar17 = 0;
              for (uVar11 = (uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
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
                  (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
                uVar17 = uVar17 + 1;
              }
              uVar22 = (ulong)uVar17;
            }
            bVar5 = (byte)(uVar13 >> 0x38);
            if (((uVar22 - uVar19 ^ uVar9 - uVar19) & uVar8) < 0x10) {
              bVar5 = bVar5 >> 1;
              (*pauVar15)[uVar9] = bVar5;
              *(byte *)(*param_1 + 0x10 + (uVar8 & uVar9 - 0x10)) = bVar5;
              goto code_r0x004156e7;
            }
            lVar7 = ~uVar22 * 8;
            cVar2 = (*pauVar15)[uVar22];
            bVar5 = bVar5 >> 1;
            (*pauVar15)[uVar22] = bVar5;
            *(byte *)(*param_1 + 0x10 + (uVar22 - 0x10 & uVar8)) = bVar5;
            if (cVar2 == -1) break;
            uVar6 = *(undefined8 *)(*pauVar20 + uVar12 * 8);
            *(undefined8 *)(*pauVar20 + uVar12 * 8) = *(undefined8 *)(*pauVar15 + lVar7);
            *(undefined8 *)(*pauVar15 + lVar7) = uVar6;
            pauVar15 = (undefined1 (*) [16])*param_1;
            uVar13 = *(ulong *)((long)pauVar15 + uVar9 * -8 + -8);
            if (param_4 <= uVar13) goto code_r0x004157de;
          }
          uVar13 = param_1[1];
          *(undefined1 *)(*param_1 + uVar9) = 0xff;
          *(undefined1 *)(*param_1 + 0x10 + (uVar9 - 0x10 & uVar13)) = 0xff;
          *(undefined8 *)(*pauVar15 + lVar7) = *(undefined8 *)(*pauVar20 + uVar12 * 8);
        }
code_r0x004156e7:
        bVar25 = uVar9 != uVar23;
        uVar9 = uVar9 + 1;
      } while (bVar25);
      uVar12 = param_1[1];
      uVar9 = param_1[3];
      uVar13 = (uVar12 + 1 & 0xfffffffffffffff8) - (uVar12 + 1 >> 3);
      if (uVar12 < 8) {
        uVar13 = uVar12;
      }
    }
    param_1[2] = uVar13 - uVar9;
code_r0x00415775:
    uVar6 = 0xffffffffffffffff;
  }
  return uVar6;
}


