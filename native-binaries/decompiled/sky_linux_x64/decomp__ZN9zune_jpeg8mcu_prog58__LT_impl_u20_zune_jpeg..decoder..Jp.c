// 002548d0  undefined _ZN9zune_jpeg8mcu_prog58_$LT$impl$u20$zune_jpeg..decoder..JpegDecoder$LT$T$GT$$GT$15handle_rst_main17h26a342c05b32cc1aE(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN9zune_jpeg8mcu_prog58__LT_impl_u20_zune_jpeg__decoder__JpegDecoder_LT_T_GT__GT_15handle_rst_main17h26a342c05b32cc1aE
               (undefined8 *param_1,long param_2,ulong *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  uint3 uVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  undefined1 extraout_DL;
  undefined1 extraout_DL_00;
  undefined1 extraout_DL_01;
  undefined1 uVar10;
  ulong uVar11;
  undefined8 *extraout_RDX;
  undefined8 uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  long lVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong *unaff_R15;
  ulong *puVar21;
  byte bStack_d2;
  undefined1 uStack_d1;
  char cStack_d0;
  undefined6 uStack_cf;
  undefined1 uStack_c9;
  undefined7 uStack_c8;
  undefined1 uStack_c1;
  undefined7 uStack_c0;
  undefined1 uStack_b9;
  undefined7 uStack_b8;
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong *puStack_90;
  long lStack_80;
  ulong *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  ulong *puStack_40;
  ulong uStack_38;
  
  if (*(long *)(param_2 + 0x72c0) == 0) {
    bVar5 = (byte)param_3[4];
    uVar11 = (ulong)bVar5;
    if (uVar11 < 0x20) {
      if ((*(char *)((long)param_3 + 0x1e) == '\r') && (*(char *)((long)param_3 + 0x23) == '\0')) {
        if (param_3[2] == 0) {
          uStack_70._0_1_ = 0;
          uStack_70._1_2_ = 0;
          uStack_70._3_1_ = 0;
          puStack_40 = (ulong *)(param_2 + 0x110);
          lStack_50 = *(long *)(param_2 + 0x110);
          puVar21 = *(ulong **)(param_2 + 0x118);
          puVar15 = *(ulong **)(param_2 + 0x120);
          puVar20 = (ulong *)0x0;
          lStack_80 = param_2;
          puStack_78 = param_3;
          puStack_48 = param_1;
          uStack_38 = uVar11;
          do {
            uVar11 = 4 - (long)puVar20;
            puVar19 = puVar15;
            if (puVar21 < puVar15) {
              puVar19 = puVar21;
            }
            puVar18 = (ulong *)(uVar11 + (long)puVar15);
            if (puVar18 < puVar19) goto code_r0x002551e3;
            if (puVar21 < puVar18) {
              puVar18 = puVar21;
            }
            uVar13 = (long)puVar18 - (long)puVar19;
            unaff_R15 = puVar21;
            if (uVar11 < uVar13) {
              puStack_90 = (ulong *)&UNK_002551e3;
              _ZN4core5slice5index16slice_index_fail17hf1918ccaba3e9ba3E
                        (0,uVar13,uVar11,&UNK_00379f30);
              goto code_r0x002551e3;
            }
            puStack_90 = (ulong *)&UNK_00254aa2;
            (*(code *)PTR_memcpy_00380fd8)
                      ((long)&uStack_70 + (long)puVar20,lStack_50 + (long)puVar19,uVar13);
            puVar15 = (ulong *)((long)puVar15 + uVar13);
            *(ulong **)(lStack_80 + 0x120) = puVar15;
            if (puVar18 == puVar19) {
              puVar19 = (ulong *)((long)puVar15 - (long)puVar20);
              if ((puVar20 != (ulong *)0x0) && (puVar15 <= puVar19)) goto code_r0x00255231;
              *(ulong **)(lStack_80 + 0x120) = puVar19;
              goto code_r0x00254b68;
            }
            puVar20 = (ulong *)((long)puVar20 + uVar13);
          } while (puVar20 < (ulong *)0x4);
          uVar4 = CONCAT21(uStack_70._1_2_,(byte)uStack_70);
          uVar7 = (uint)uStack_70._3_1_ | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                  CONCAT13(uStack_70._3_1_,uVar4) << 0x18;
          if (((uVar7 | 0x80808080) + 0x80808081 & uVar7 & 0x80808080) != 0) {
            if (puVar15 < (ulong *)0x4) {
              puStack_90 = (ulong *)&UNK_002552a3;
              puVar9 = (undefined8 *)
                       _ZN3std2io5error5Error3new17h0c7a8c1da4ceb323E(0x28,&UNK_0033d7b9,0xd);
              uVar11 = (ulong)puVar9 & 0xffffffffffffff00;
              uVar12 = 0x8000000000000000;
              uVar10 = 0xd;
              param_1 = puStack_48;
              goto code_r0x0025492d;
            }
            *(ulong **)(lStack_80 + 0x120) = (ulong *)((long)puVar15 + -4);
            puVar19 = (ulong *)((long)puVar15 + -4);
code_r0x00254b68:
            puVar16 = puStack_40;
            puVar18 = puStack_78;
            uStack_70._0_1_ = 0;
            puVar14 = puVar19;
            if (puVar21 < puVar19) {
              puVar14 = puVar21;
            }
            puVar20 = (ulong *)((long)puVar19 + 1);
            puVar15 = puVar16;
            unaff_R15 = puVar21;
            if (puVar20 < puVar14) goto code_r0x002551e3;
            if (puVar21 < puVar20) {
              puVar20 = puVar21;
            }
            puVar20 = (ulong *)((long)puVar20 - (long)puVar14);
            if ((ulong *)0x1 < puVar20) goto code_r0x00255205;
            puStack_90 = (ulong *)&UNK_00254bab;
            (*(code *)PTR_memcpy_00380fd8)(&uStack_70,(long)puVar14 + lStack_50,puVar20);
            puVar19 = (ulong *)((long)puVar19 + (long)puVar20);
            *(ulong **)(lStack_80 + 0x120) = puVar19;
            puVar18[2] = (puVar18[2] + 1) - (ulong)(puVar19 < puVar21);
            *(char *)(puVar18 + 4) = (char)puVar18[4] + '\b';
            *puVar18 = *puVar18 << 8 | (ulong)(byte)uStack_70;
            puVar14 = puVar21;
            if ((ulong)(byte)uStack_70 == 0xff) {
              uStack_70._0_1_ = 0;
              puStack_90 = (ulong *)&UNK_00254bfb;
              _ZN9zune_core10bytestream6reader11std_readers107__LT_impl_u20_std__io__Read_u20_for_u20_zune_core__bytestream__reader__no_std_readers__ZCursor_LT_T_GT__GT_4read17ha95b7a95c1f709b5E
                        (puVar16,&uStack_70);
              lStack_50 = *(long *)(lStack_80 + 0x110);
              puVar14 = *(ulong **)(lStack_80 + 0x118);
              puVar19 = *(ulong **)(lStack_80 + 0x120);
              puVar18 = puStack_78;
              if ((byte)uStack_70 == 0) goto code_r0x00254c9d;
              puVar20 = &uStack_70;
              while ((byte)uStack_70 == 0xff) {
                uStack_70._0_1_ = 0;
                puVar8 = puVar19;
                if (puVar14 < puVar19) {
                  puVar8 = puVar14;
                }
                puVar18 = (ulong *)((long)puVar19 + 1);
                if (puVar18 < puVar8) goto code_r0x002551e3;
                if (puVar14 < puVar18) {
                  puVar18 = puVar14;
                }
                puVar18 = (ulong *)((long)puVar18 - (long)puVar8);
                if ((ulong *)0x1 < puVar18) goto code_r0x002551ef;
                puStack_90 = (ulong *)&UNK_00254c71;
                (*(code *)PTR_memcpy_00380fd8)(puVar20,(long)puVar8 + lStack_50,puVar18);
                puVar19 = (ulong *)((long)puVar19 + (long)puVar18);
                *(ulong **)(lStack_80 + 0x120) = puVar19;
              }
              puVar18 = puStack_78;
              if ((byte)uStack_70 == 0) goto code_r0x00254c9d;
code_r0x00255119:
              bVar5 = (byte)uStack_70;
              puVar20 = puStack_78;
              uVar11 = *puStack_78;
              uVar13 = uVar11 >> 8;
              *puStack_78 = uVar13;
              cVar3 = (char)puStack_78[4];
              *(char *)(puStack_78 + 4) = cVar3 + -8;
              if ((char)(cVar3 + -8) != '\0') {
                puStack_78[1] = uVar13 << (8U - cVar3 & 0x3f);
              }
              puStack_90 = (ulong *)&UNK_0025514c;
              cVar6 = _ZN9zune_jpeg6marker6Marker7from_u817hc5594f87ad4d9cb7E();
              *(char *)((long)puVar20 + 0x1e) = cVar6;
              *(undefined1 *)((long)puVar20 + 0x1f) = extraout_DL_01;
              param_1 = puStack_48;
              if (cVar6 == '\f') goto code_r0x0025515d;
              param_2 = lStack_80;
              param_3 = puStack_78;
              if (bVar5 == 0xd9) {
                uVar11 = uVar11 & 0xffffffffffffff00;
                *puStack_78 = uVar11;
                *(char *)(puStack_78 + 4) = cVar3;
                puStack_78[1] = uVar11 << (-cVar3 & 0x3fU);
              }
              goto code_r0x00254976;
            }
code_r0x00254c9d:
            uStack_70._0_1_ = 0;
            puVar8 = puVar19;
            if (puVar14 < puVar19) {
              puVar8 = puVar14;
            }
            puVar20 = (ulong *)((long)puVar19 + 1);
            if (puVar20 < puVar8) {
code_r0x002551e3:
              puStack_90 = (ulong *)&UNK_002551ef;
              _ZN4core6option13unwrap_failed17hccec62fe3938efcbE(&UNK_00379f48);
              puVar21 = unaff_R15;
code_r0x002551ef:
              puStack_90 = (ulong *)&UNK_00255205;
              _ZN4core5slice5index16slice_index_fail17hf1918ccaba3e9ba3E(0,puVar18,1,&UNK_00379f30);
code_r0x00255205:
              puStack_90 = (ulong *)&UNK_0025521b;
              _ZN4core5slice5index16slice_index_fail17hf1918ccaba3e9ba3E(0,puVar20,1,&UNK_00379f30);
code_r0x0025521b:
              puStack_90 = (ulong *)&UNK_00255231;
              _ZN4core5slice5index16slice_index_fail17hf1918ccaba3e9ba3E(0,puVar19,1,&UNK_00379f30);
code_r0x00255231:
              puStack_90 = (ulong *)&UNK_00255247;
              lVar17 = _ZN3std2io5error5Error3new17h0c7a8c1da4ceb323E(0x28,&UNK_0033d7b9,0xd);
              puVar19 = puVar15;
              if (((uint)lVar17 & 3) == 1) {
                uVar1 = *(undefined8 *)(lVar17 + -1);
                puVar9 = *(undefined8 **)(lVar17 + 7);
                pcVar2 = (code *)*puVar9;
                if (pcVar2 != (code *)0x0) {
                  puStack_90 = (ulong *)&UNK_00255269;
                  (*pcVar2)(uVar1);
                }
                if (puVar9[1] != 0) {
                  puStack_90 = (ulong *)&UNK_0025527c;
                  (*(code *)PTR_free_00380de0)(uVar1);
                }
                puStack_90 = (ulong *)&UNK_00255285;
                (*(code *)PTR_free_00380de0)();
              }
              goto code_r0x00254b68;
            }
            if (puVar14 < puVar20) {
              puVar20 = puVar14;
            }
            puVar20 = (ulong *)((long)puVar20 - (long)puVar8);
            if ((ulong *)0x1 < puVar20) goto code_r0x00255205;
            puStack_90 = (ulong *)&UNK_00254ce0;
            (*(code *)PTR_memcpy_00380fd8)(&uStack_70,(long)puVar8 + lStack_50,puVar20);
            puVar19 = (ulong *)((long)puVar19 + (long)puVar20);
            *(ulong **)(lStack_80 + 0x120) = puVar19;
            puVar18[2] = (puVar18[2] + 1) - (ulong)(puVar19 < puVar14);
            *(char *)(puVar18 + 4) = (char)puVar18[4] + '\b';
            *puVar18 = *puVar18 << 8 | (ulong)(byte)uStack_70;
            if ((ulong)(byte)uStack_70 == 0xff) {
              uStack_70._0_1_ = 0;
              puStack_90 = (ulong *)&UNK_00254d30;
              _ZN9zune_core10bytestream6reader11std_readers107__LT_impl_u20_std__io__Read_u20_for_u20_zune_core__bytestream__reader__no_std_readers__ZCursor_LT_T_GT__GT_4read17ha95b7a95c1f709b5E
                        (puVar16,&uStack_70);
              lStack_50 = *(long *)(lStack_80 + 0x110);
              puVar14 = *(ulong **)(lStack_80 + 0x118);
              puVar19 = *(ulong **)(lStack_80 + 0x120);
              puVar18 = puStack_78;
              if ((byte)uStack_70 != 0) {
                puVar20 = &uStack_70;
                while ((byte)uStack_70 == 0xff) {
                  uStack_70._0_1_ = 0;
                  puVar8 = puVar19;
                  if (puVar14 < puVar19) {
                    puVar8 = puVar14;
                  }
                  puVar18 = (ulong *)((long)puVar19 + 1);
                  if (puVar18 < puVar8) goto code_r0x002551e3;
                  if (puVar14 < puVar18) {
                    puVar18 = puVar14;
                  }
                  puVar18 = (ulong *)((long)puVar18 - (long)puVar8);
                  if ((ulong *)0x1 < puVar18) goto code_r0x002551ef;
                  puStack_90 = (ulong *)&UNK_00254da6;
                  (*(code *)PTR_memcpy_00380fd8)(puVar20,(long)puVar8 + lStack_50,puVar18);
                  puVar19 = (ulong *)((long)puVar19 + (long)puVar18);
                  *(ulong **)(lStack_80 + 0x120) = puVar19;
                }
                puVar18 = puStack_78;
                if ((byte)uStack_70 != 0) goto code_r0x00255119;
              }
            }
            uStack_70._0_1_ = 0;
            puVar8 = puVar19;
            if (puVar14 < puVar19) {
              puVar8 = puVar14;
            }
            puVar20 = (ulong *)((long)puVar19 + 1);
            if (puVar20 < puVar8) goto code_r0x002551e3;
            if (puVar14 < puVar20) {
              puVar20 = puVar14;
            }
            puVar20 = (ulong *)((long)puVar20 - (long)puVar8);
            if ((ulong *)0x1 < puVar20) goto code_r0x00255205;
            puStack_90 = (ulong *)&UNK_00254e18;
            (*(code *)PTR_memcpy_00380fd8)(&uStack_70,lStack_50 + (long)puVar8,puVar20);
            *(ulong **)(lStack_80 + 0x120) = (ulong *)((long)puVar19 + (long)puVar20);
            puVar18[2] = (puVar18[2] + 1) -
                         (ulong)((ulong *)((long)puVar19 + (long)puVar20) < puVar14);
            *(char *)(puVar18 + 4) = (char)puVar18[4] + '\b';
            *puVar18 = *puVar18 << 8 | (ulong)(byte)uStack_70;
            param_3 = puVar18;
            if ((ulong)(byte)uStack_70 == 0xff) {
              uStack_70._0_1_ = 0;
              puStack_90 = (ulong *)&UNK_00254eca;
              _ZN9zune_core10bytestream6reader11std_readers107__LT_impl_u20_std__io__Read_u20_for_u20_zune_core__bytestream__reader__no_std_readers__ZCursor_LT_T_GT__GT_4read17ha95b7a95c1f709b5E
                        (puVar16,&uStack_70);
              if ((byte)uStack_70 == 0) goto code_r0x00254e52;
              puVar20 = *(ulong **)(lStack_80 + 0x110);
              puVar15 = *(ulong **)(lStack_80 + 0x118);
              puVar19 = *(ulong **)(lStack_80 + 0x120);
              bVar5 = (byte)uStack_70;
              while (bVar5 == 0xff) {
                uStack_70._0_1_ = 0;
                puVar14 = puVar19;
                if (puVar15 < puVar19) {
                  puVar14 = puVar15;
                }
                puVar18 = (ulong *)((long)puVar19 + 1);
                unaff_R15 = puVar16;
                if (puVar18 < puVar14) goto code_r0x002551e3;
                if (puVar15 < puVar18) {
                  puVar18 = puVar15;
                }
                puVar18 = (ulong *)((long)puVar18 - (long)puVar14);
                puVar21 = puVar16;
                if ((ulong *)0x1 < puVar18) goto code_r0x002551ef;
                puStack_90 = (ulong *)&UNK_00254f3a;
                (*(code *)PTR_memcpy_00380fd8)(&uStack_70,(long)puVar14 + (long)puVar20,puVar18);
                puVar19 = (ulong *)((long)puVar19 + (long)puVar18);
                *(ulong **)(lStack_80 + 0x120) = puVar19;
                param_3 = puStack_78;
                bVar5 = (byte)uStack_70;
              }
              if (bVar5 == 0) goto code_r0x00254e52;
              puVar20 = (ulong *)*param_3;
              *param_3 = (ulong)puVar20 >> 8;
              cVar3 = (char)param_3[4];
              *(char *)(param_3 + 4) = cVar3 + -8;
              if ((char)(cVar3 + -8) != '\0') {
                param_3[1] = ((ulong)puVar20 >> 8) << (8U - cVar3 & 0x3f);
              }
              puStack_90 = (ulong *)&UNK_00254f99;
              uStack_70._0_1_ = bVar5;
              cVar6 = _ZN9zune_jpeg6marker6Marker7from_u817hc5594f87ad4d9cb7E();
              *(char *)((long)param_3 + 0x1e) = cVar6;
              *(undefined1 *)((long)param_3 + 0x1f) = extraout_DL;
              param_2 = lStack_80;
              param_1 = puStack_48;
joined_r0x00254faa:
              lStack_80 = param_2;
              if (cVar6 != '\f') {
                if (bVar5 == 0xd9) {
                  *param_3 = (ulong)puVar20 & 0xffffffffffffff00;
                  *(char *)(param_3 + 4) = cVar3;
                  param_3[1] = ((ulong)puVar20 & 0xffffffffffffff00) << (-cVar3 & 0x3fU);
                }
                goto code_r0x00254976;
              }
code_r0x0025515d:
              uVar12 = 0x1c;
              puStack_90 = (ulong *)&UNK_0025516d;
              puVar9 = (undefined8 *)(*(code *)PTR_malloc_00380d78)(0x1c);
              uVar1 = _UNK_0033df4c;
              if (puVar9 == (undefined8 *)0x0) {
                puVar9 = (undefined8 *)0x1;
                lVar17 = 0x1c;
                puStack_90 = (ulong *)&UNK_002552d2;
                _ZN5alloc7raw_vec12handle_error17hfa86a3a4628bd209E();
                uStack_98 = 0x1c;
                bStack_d2 = *(byte *)((long)extraout_RDX + 0x1e);
                if (bStack_d2 != 0xd) {
                  uStack_d1 = *(undefined1 *)((long)extraout_RDX + 0x1f);
                  puStack_90 = puVar20;
                  switch(bStack_d2) {
                  case 1:
                  case 7:
                  case 9:
                  case 10:
                  case 0xb:
                    *(undefined1 *)((long)extraout_RDX + 0x1e) = 0xd;
                    *(byte *)((long)puVar9 + 1) = bStack_d2;
                    *(undefined1 *)((long)puVar9 + 2) = uStack_d1;
                    *(undefined1 *)puVar9 = 0xe;
                    return;
                  default:
                    if ((*(char *)(lVar17 + 0x599) != '\0' || *(char *)(lVar17 + 0x59a) != '\0') ||
                       (*(char *)(lVar17 + 0x598) != '\0')) {
                      cStack_d0 = (char)&bStack_d2;
                      uStack_cf = (undefined6)((ulong)&bStack_d2 >> 8);
                      uStack_c9 = (undefined1)((ulong)&bStack_d2 >> 0x38);
                      uStack_c8 = 0x218c40;
                      uStack_c1 = 0;
                      _ZN5alloc3fmt6format12format_inner17h655a6aa2517b043fE
                                (&uStack_b0,&UNK_0030514a,&cStack_d0);
                      uStack_c9 = (undefined1)uStack_b0;
                      uStack_c8 = (undefined7)((ulong)uStack_b0 >> 8);
                      uStack_c1 = (undefined1)uStack_a8;
                      *(undefined1 *)puVar9 = 0;
                      *(ulong *)((long)puVar9 + 1) =
                           CONCAT17(uStack_c9,CONCAT61(uStack_cf,cStack_d0));
                      *(ulong *)((long)puVar9 + 9) = CONCAT17(uStack_c1,uStack_c8);
                      puVar9[2] = uStack_a8;
                      puVar9[3] = uStack_a0;
                      return;
                    }
                    _ZN9zune_jpeg7decoder20JpegDecoder_LT_T_GT_18parse_marker_inner17hb0463b2a228200e1E
                              (&cStack_d0);
                    if (cStack_d0 == '\x0e') {
                      *(undefined1 *)(extraout_RDX + 4) = 0;
                      *(undefined1 *)((long)extraout_RDX + 0x1e) = 0xd;
                      *(undefined4 *)(extraout_RDX + 3) = 0;
                      *extraout_RDX = 0;
                      extraout_RDX[1] = 0;
                      *(undefined2 *)puVar9 = 0x100e;
                      return;
                    }
                    break;
                  case 3:
                    if ((*(long *)(lVar17 + 0x72c0) != 0) ||
                       (_ZN9zune_jpeg3mcu58__LT_impl_u20_zune_jpeg__decoder__JpegDecoder_LT_T_GT__GT_10handle_rst17h38c92f88e80da9eeE
                                  (&cStack_d0), cStack_d0 == '\x0e')) goto code_r0x002552f0;
                    break;
                  case 5:
                    *(undefined1 *)((long)extraout_RDX + 0x1e) = 0xd;
                    *(undefined1 *)((long)extraout_RDX + 0x23) = 1;
                    goto code_r0x002552f0;
                  case 6:
                    _ZN9zune_jpeg7decoder20JpegDecoder_LT_T_GT_18parse_marker_inner17hb0463b2a228200e1E
                              (&cStack_d0);
                    if (cStack_d0 == '\x0e') {
                      *(undefined1 *)(extraout_RDX + 4) = 0;
                      *(undefined1 *)((long)extraout_RDX + 0x1e) = 0xd;
                      *(undefined4 *)(extraout_RDX + 3) = 0;
                      *extraout_RDX = 0;
                      extraout_RDX[1] = 0;
                      *(undefined2 *)puVar9 = 0xe0e;
                      return;
                    }
                  }
                  puVar9[2] = CONCAT17(uStack_b9,uStack_c0);
                  puVar9[3] = CONCAT17(uStack_b1,uStack_b8);
                  *puVar9 = CONCAT17(uStack_c9,CONCAT61(uStack_cf,cStack_d0));
                  puVar9[1] = CONCAT17(uStack_c1,uStack_c8);
                  return;
                }
code_r0x002552f0:
                *(undefined2 *)puVar9 = 0xd0e;
                return;
              }
              *(ulong *)((long)puVar9 + 0xc) = CONCAT44(_UNK_0033df48,_UNK_0033df44);
              *(undefined8 *)((long)puVar9 + 0x14) = uVar1;
              uVar1 = CONCAT44(_UNK_0033df44,_UNK_0033df40);
              *puVar9 = _UNK_0033df38;
              puVar9[1] = uVar1;
              uVar11 = (ulong)puVar9 & 0xffffffffffffff00;
              uVar10 = 0;
              goto code_r0x0025492d;
            }
code_r0x00254e52:
            uStack_70._0_1_ = 0;
            puStack_90 = (ulong *)&UNK_00254e64;
            _ZN9zune_core10bytestream6reader11std_readers107__LT_impl_u20_std__io__Read_u20_for_u20_zune_core__bytestream__reader__no_std_readers__ZCursor_LT_T_GT__GT_4read17ha95b7a95c1f709b5E
                      (puVar16,&uStack_70);
            param_1 = puStack_48;
            param_3[2] = (param_3[2] + 1) -
                         (ulong)(*(ulong *)(lStack_80 + 0x120) < *(ulong *)(lStack_80 + 0x118));
            *(char *)(param_3 + 4) = (char)param_3[4] + '\b';
            *param_3 = *param_3 << 8 | (ulong)(byte)uStack_70;
            if ((ulong)(byte)uStack_70 == 0xff) {
              uStack_70._0_1_ = 0;
              puStack_90 = (ulong *)&UNK_00254fc7;
              _ZN9zune_core10bytestream6reader11std_readers107__LT_impl_u20_std__io__Read_u20_for_u20_zune_core__bytestream__reader__no_std_readers__ZCursor_LT_T_GT__GT_4read17ha95b7a95c1f709b5E
                        (puVar16,&uStack_70);
              if ((byte)uStack_70 != 0) {
                puVar20 = *(ulong **)(lStack_80 + 0x110);
                puVar15 = *(ulong **)(lStack_80 + 0x118);
                puVar18 = *(ulong **)(lStack_80 + 0x120);
                puVar21 = &uStack_70;
                param_3 = puStack_78;
                bVar5 = (byte)uStack_70;
                while( true ) {
                  puStack_78 = param_3;
                  if (bVar5 != 0xff) {
                    uStack_70._0_1_ = bVar5;
                    if (bVar5 == 0) goto code_r0x00254ea8;
                    puVar20 = (ulong *)*param_3;
                    *param_3 = (ulong)puVar20 >> 8;
                    cVar3 = (char)param_3[4];
                    *(char *)(param_3 + 4) = cVar3 + -8;
                    if ((char)(cVar3 + -8) != '\0') {
                      param_3[1] = ((ulong)puVar20 >> 8) << (8U - cVar3 & 0x3f);
                    }
                    puStack_90 = (ulong *)&UNK_00255099;
                    cVar6 = _ZN9zune_jpeg6marker6Marker7from_u817hc5594f87ad4d9cb7E();
                    *(char *)((long)param_3 + 0x1e) = cVar6;
                    *(undefined1 *)((long)param_3 + 0x1f) = extraout_DL_00;
                    param_2 = lStack_80;
                    goto joined_r0x00254faa;
                  }
                  uStack_70._0_1_ = 0;
                  puVar16 = puVar18;
                  if (puVar15 < puVar18) {
                    puVar16 = puVar15;
                  }
                  puVar19 = (ulong *)((long)puVar18 + 1);
                  unaff_R15 = puVar21;
                  if (puVar19 < puVar16) goto code_r0x002551e3;
                  if (puVar15 < puVar19) {
                    puVar19 = puVar15;
                  }
                  puVar19 = (ulong *)((long)puVar19 - (long)puVar16);
                  if ((ulong *)0x1 < puVar19) break;
                  puStack_90 = (ulong *)&UNK_00255038;
                  (*(code *)PTR_memcpy_00380fd8)(puVar21,(long)puVar16 + (long)puVar20,puVar19);
                  puVar18 = (ulong *)((long)puVar18 + (long)puVar19);
                  *(ulong **)(lStack_80 + 0x120) = puVar18;
                  param_3 = puStack_78;
                  bVar5 = (byte)uStack_70;
                  param_1 = puStack_48;
                }
                goto code_r0x0025521b;
              }
            }
code_r0x00254ea8:
            uVar11 = *param_3;
            cVar3 = (char)param_3[4];
            param_2 = lStack_80;
            goto code_r0x0025496e;
          }
          *(byte *)(puStack_78 + 4) = (byte)uStack_38 | 0x20;
          uVar11 = (ulong)uVar7 | *puStack_78 << 0x20;
          *puStack_78 = uVar11;
          puStack_78[1] = uVar11 << (-((byte)uStack_38 + 0x20) & 0x3f);
          param_2 = lStack_80;
          param_3 = puStack_78;
          param_1 = puStack_48;
        }
        else if (uVar11 == 0) {
          uVar12 = 0x1c;
          uVar10 = 10;
          puVar9 = (undefined8 *)0x0;
          uVar11 = 0;
code_r0x0025492d:
          *(undefined1 *)param_1 = uVar10;
          *(undefined1 *)((long)param_1 + 1) = 1;
          param_1[1] = uVar12;
          param_1[2] = (ulong)puVar9 & 0xff | uVar11;
          param_1[3] = 0x1c;
          return;
        }
      }
      else {
        uVar11 = *param_3 << 0x20;
        *param_3 = uVar11;
        *(byte *)(param_3 + 4) = bVar5 | 0x20;
        cVar3 = bVar5 + 0x20;
code_r0x0025496e:
        param_3[1] = uVar11 << (-cVar3 & 0x3fU);
      }
    }
  }
code_r0x00254976:
  lVar17 = *(long *)(param_2 + 0x72c0);
  if ((lVar17 == 0) && (*(long *)(param_2 + 0x72b8) != 0)) {
    if ((*(char *)((long)param_3 + 0x1e) == '\r') && (*(char *)((long)param_3 + 0x23) == '\0')) {
      puStack_90 = (ulong *)&UNK_002549bb;
      _ZN9zune_jpeg8mcu_prog10get_marker17haa3b6b7a57eb7b43E(&uStack_70,param_2 + 0xf8,param_3);
      if ((byte)uStack_70 == 0xe) {
        *(undefined2 *)((long)param_3 + 0x1e) = uStack_70._1_2_;
      }
      else {
        puStack_90 = (ulong *)&UNK_002549d9;
        _ZN4core3ptr52drop_in_place_LT_zune_jpeg__errors__DecodeErrors_GT_17h95949b7ee089e298E
                  (&uStack_70);
      }
      lVar17 = *(long *)(param_2 + 0x72c0);
      goto code_r0x002549e3;
    }
  }
  else {
code_r0x002549e3:
    if (lVar17 != 0) goto code_r0x002549ec;
  }
  puStack_90 = (ulong *)&UNK_00254b1c;
  _ZN9zune_jpeg3mcu58__LT_impl_u20_zune_jpeg__decoder__JpegDecoder_LT_T_GT__GT_10handle_rst17h38c92f88e80da9eeE
            (&uStack_70,param_2,param_3);
  if ((byte)uStack_70 != 0xe) {
    param_1[2] = uStack_60;
    param_1[3] = uStack_58;
    *param_1 = CONCAT44(uStack_70._4_4_,
                        CONCAT13(uStack_70._3_1_,CONCAT21(uStack_70._1_2_,(byte)uStack_70)));
    param_1[1] = uStack_68;
    return;
  }
code_r0x002549ec:
  *(undefined1 *)param_1 = 0xe;
  return;
}


