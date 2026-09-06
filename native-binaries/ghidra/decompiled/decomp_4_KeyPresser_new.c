// 00154a20  undefined _ZN9sky_linux6client3x1111key_presser10KeyPresser3new17hddca01166df4ef52E(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * _ZN9sky_linux6client3x1111key_presser10KeyPresser3new17hddca01166df4ef52E
                 (undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  bool bVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  undefined8 uVar27;
  undefined *puVar28;
  undefined *puVar29;
  long lVar30;
  long lVar31;
  byte bVar32;
  byte bVar33;
  int iVar34;
  long lVar35;
  long lVar36;
  code *pcVar37;
  int *piVar38;
  byte *pbVar39;
  ulong uVar40;
  byte *pbVar41;
  ulong uVar42;
  undefined8 uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  byte *pbVar48;
  byte *pbVar49;
  bool bVar50;
  long *plVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  undefined1 auVar61 [16];
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  ulong uStack_188;
  byte *pbStack_170;
  long lStack_168;
  byte *pbStack_160;
  long lStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  byte *pbStack_140;
  byte *pbStack_138;
  ulong uStack_130;
  byte **ppbStack_128;
  code *pcStack_120;
  byte *pbStack_118;
  byte *pbStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long *plStack_f8;
  int iStack_dc;
  byte *pbStack_d8;
  byte *pbStack_d0;
  long *plStack_c8;
  byte *pbStack_c0;
  long lStack_b8;
  long *plStack_b0;
  code *pcStack_a8;
  undefined8 *puStack_a0;
  uint uStack_94;
  byte *pbStack_90;
  long *plStack_88;
  long *plStack_80;
  long lStack_78;
  ulong uStack_70;
  long *plStack_68;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  _ZN9sky_linux6client3x114keys4keys17h30ef62977c4baceaE(&pbStack_d0);
  pbVar39 = pbStack_c0;
  plVar51 = plStack_c8;
  pbVar49 = pbStack_d0;
  if (SBORROW8(0,(long)pbStack_d0)) {
    param_1[1] = plStack_c8;
    *param_1 = 0x8000000000000000;
    return (byte *)-(long)pbStack_d0;
  }
  puStack_a0 = param_1;
  lVar35 = (*(code *)PTR_XOpenDisplay_00380db8)(0);
  if (lVar35 == 0) {
    pbVar39 = (byte *)_ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17hcaf2e919a74f2e89E
                                (&UNK_00309e7b,0x29);
    puStack_a0[1] = pbVar39;
    *puStack_a0 = 0x8000000000000000;
  }
  else {
    pbStack_90 = pbVar49;
    plStack_88 = plVar51;
    lStack_b8 = lVar35;
    if (pbVar39 == (byte *)0x0) {
      pbStack_d0 = (byte *)0x0;
      plStack_c8 = (long *)0x1;
      pbStack_c0 = (byte *)0x0;
    }
    else {
      plStack_c8 = (long *)(*(code *)PTR_malloc_00380d78)(pbVar39);
      puVar29 = PTR_nanosleep_00380f40;
      if (plStack_c8 == (long *)0x0) {
        pbVar48 = (byte *)0x1;
        pbVar41 = pbVar39;
        _ZN5alloc7raw_vec12handle_error17hfa86a3a4628bd209E();
        plStack_f8 = plVar51;
        uStack_108 = 0x8000000000000000;
        pbStack_110 = pbVar49;
        pbStack_118 = pbVar39;
        pbStack_160 = (byte *)0x0;
        if (SBORROW8(0,*(long *)pbVar41)) {
          pbVar48[0] = 0;
          pbVar48[1] = 0;
          pbVar48[2] = 0;
          pbVar48[3] = 0;
          pbVar48[4] = 0;
          pbVar48[5] = 0;
          pbVar48[6] = 0;
          pbVar48[7] = 0;
          pbVar48[8] = 8;
          pbVar48[9] = 0;
          pbVar48[10] = 0;
          pbVar48[0xb] = 0;
          pbVar48[0xc] = 0;
          pbVar48[0xd] = 0;
          pbVar48[0xe] = 0;
          pbVar48[0xf] = 0;
          pbVar48[0x10] = 0;
          pbVar48[0x11] = 0;
          pbVar48[0x12] = 0;
          pbVar48[0x13] = 0;
          pbVar48[0x14] = 0;
          pbVar48[0x15] = 0;
          pbVar48[0x16] = 0;
          pbVar48[0x17] = 0;
        }
        else {
          pbStack_170 = (byte *)0x0;
          lStack_168 = 8;
          pbStack_160 = (byte *)0x0;
          pbStack_150 = *(byte **)(pbVar41 + 8);
          uVar3 = *(ulong *)(pbVar41 + 0x10);
          pbStack_140 = pbStack_150 + 8;
          lStack_158 = 8;
          pbVar39 = (byte *)0x0;
          bVar50 = false;
          uVar45 = 0;
          uVar40 = 0;
          pbVar49 = pbStack_150;
          pbStack_148 = pbVar48;
          lStack_100 = lVar35;
code_r0x00154fd0:
          do {
            bVar10 = true;
            uVar46 = uVar45;
            do {
              uVar45 = uVar46;
              uStack_188 = uVar40;
              if (uVar3 < uVar46) goto code_r0x0015517b;
              uVar42 = uVar3 - uVar46;
              pbVar41 = pbVar49 + uVar46;
              uVar45 = uVar3;
              if (uVar42 < 0x10) {
                if (uVar3 == uVar46) goto code_r0x0015517b;
                uVar47 = 0;
                while (pbVar41[uVar47] != 0x2b) {
                  uVar47 = uVar47 + 1;
                  if (uVar42 == uVar47) goto code_r0x0015517b;
                }
              }
              else {
                uVar44 = ((ulong)(pbVar41 + 7) & 0xfffffffffffffff8) - (long)pbVar41;
                if (uVar44 == 0) {
                  uVar44 = 0;
code_r0x00155043:
                  do {
                    if (((0x101010101010100 -
                          (*(ulong *)(pbStack_140 + uVar44 + (uVar46 - 8)) ^ 0x2b2b2b2b2b2b2b2b) |
                         *(ulong *)(pbStack_140 + uVar44 + (uVar46 - 8))) & 0x8080808080808080 &
                        (0x101010101010100 -
                         (*(ulong *)(pbStack_140 + uVar44 + uVar46) ^ 0x2b2b2b2b2b2b2b2b) |
                        *(ulong *)(pbStack_140 + uVar44 + uVar46) ^ 0x2b2b2b2b2b2b2b2b)) !=
                        0x8080808080808080) break;
                    uVar44 = uVar44 + 0x10;
                  } while (uVar44 <= uVar42 - 0x10);
                }
                else {
                  uVar47 = 0;
                  do {
                    if (pbVar41[uVar47] == 0x2b) goto joined_r0x00155149;
                    uVar47 = uVar47 + 1;
                  } while (uVar44 != uVar47);
                  if (uVar44 <= uVar42 - 0x10) goto code_r0x00155043;
                }
                pbVar49 = pbStack_150;
                if (uVar42 == uVar44) goto code_r0x0015517b;
                lVar35 = 0;
                while (pbVar41[lVar35 + uVar44] != 0x2b) {
                  lVar35 = lVar35 + 1;
                  if ((uVar3 - uVar44) - uVar46 == lVar35) goto code_r0x0015517b;
                }
                uVar47 = lVar35 + uVar44;
              }
joined_r0x00155149:
              uVar45 = uVar47 + uVar46;
              uVar46 = uVar47 + uVar46 + 1;
            } while ((uVar3 <= uVar45) || (pbVar49[uVar45] != 0x2b));
            bVar10 = false;
            uVar45 = uVar46;
            uStack_188 = uVar46;
code_r0x0015517b:
            auVar94 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17hd77977c8d1be1ee7E
                                (pbVar49 + uVar40);
            uStack_130 = auVar94._8_8_;
            uVar40 = uStack_188;
            if (uStack_130 == 0) {
              if (bVar50) {
                if (pbVar39 == pbStack_170) {
                  _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hb5e8d0265e84c2adE(&pbStack_170);
                  lStack_158 = lStack_168;
                }
                *(undefined8 *)(lStack_158 + (long)pbVar39 * 8) = 0x2b;
                pbVar39 = pbVar39 + 1;
                bVar50 = false;
                pbStack_160 = pbVar39;
              }
              else {
                bVar50 = true;
              }
              if (bVar10) break;
              goto code_r0x00154fd0;
            }
            pbVar41 = (byte *)(*(code *)PTR_malloc_00380d78)(uStack_130);
            if (pbVar41 == (byte *)0x0) {
              _ZN5alloc7raw_vec12handle_error17hfa86a3a4628bd209E(1,uStack_130);
              pbVar41 = pbVar39;
code_r0x00156922:
              uStack_130 = 2;
code_r0x0015688f:
              ppbStack_128 = &pbStack_138;
              pcStack_120 = 
              _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h133ad94faf960614E;
              pbStack_138 = pbVar49;
              uVar43 = _ZN6anyhow9__private10format_err17hb2d1b7e2505c9acbE
                                 (&UNK_00301b1a,&ppbStack_128);
              (*(code *)PTR_free_00380de0)(pbVar41);
              *(undefined8 *)(pbStack_148 + 8) = uVar43;
              pbStack_148[0] = 0;
              pbStack_148[1] = 0;
              pbStack_148[2] = 0;
              pbStack_148[3] = 0;
              pbStack_148[4] = 0;
              pbStack_148[5] = 0;
              pbStack_148[6] = 0;
              pbStack_148[7] = 0x80;
              if (pbStack_170 == (byte *)0x0) {
                return pbStack_148;
              }
              pbVar49 = (byte *)(*(code *)PTR_free_00380de0)(lStack_168);
              return pbVar49;
            }
            (*(code *)PTR_memcpy_00380fd8)(pbVar41,auVar94._0_8_,uStack_130);
            uVar46 = _UNK_002f8170;
            auVar94 = _UNK_002f8140;
            bVar59 = UNK_002f813f;
            bVar58 = UNK_002f813e;
            bVar57 = UNK_002f813d;
            bVar56 = UNK_002f813c;
            bVar55 = UNK_002f813b;
            bVar54 = UNK_002f813a;
            bVar53 = UNK_002f8139;
            bVar52 = UNK_002f8138;
            bVar9 = UNK_002f8137;
            bVar8 = UNK_002f8136;
            bVar7 = UNK_002f8135;
            bVar6 = UNK_002f8134;
            bVar5 = UNK_002f8133;
            bVar4 = UNK_002f8132;
            bVar33 = UNK_002f8131;
            bVar32 = UNK_002f8130;
            cVar26 = UNK_002f812f;
            cVar25 = UNK_002f812e;
            cVar24 = UNK_002f812d;
            cVar23 = UNK_002f812c;
            cVar22 = UNK_002f812b;
            cVar21 = UNK_002f812a;
            cVar20 = UNK_002f8129;
            cVar19 = UNK_002f8128;
            cVar18 = UNK_002f8127;
            cVar17 = UNK_002f8126;
            cVar16 = UNK_002f8125;
            cVar15 = UNK_002f8124;
            cVar14 = UNK_002f8123;
            cVar13 = UNK_002f8122;
            cVar12 = UNK_002f8121;
            cVar11 = UNK_002f8120;
            if (uStack_130 < 8) {
              uVar42 = 0;
code_r0x00155350:
              do {
                pbVar41[uVar42] = ((byte)(pbVar41[uVar42] + 0xbf) < 0x1a) << 5 | pbVar41[uVar42];
                uVar42 = uVar42 + 1;
              } while (uStack_130 != uVar42);
              pbVar49 = pbVar41;
              if (2 < uStack_130) goto code_r0x00155379;
code_r0x00155700:
              switch(uStack_130) {
              case 1:
                bVar32 = *pbVar49;
                uVar46 = (ulong)bVar32;
                switch(bVar32) {
                case 0x21:
                  uVar46 = 0x21;
                  break;
                case 0x22:
                  uVar46 = 0x22;
                  break;
                case 0x23:
                  uVar46 = 0x23;
                  break;
                case 0x24:
                  uVar46 = 0x24;
                  break;
                case 0x25:
                  uVar46 = 0x25;
                  break;
                case 0x26:
                  uVar46 = 0x26;
                  break;
                case 0x27:
                  uVar46 = 0x27;
                  break;
                case 0x28:
                  uVar46 = 0x28;
                  break;
                default:
                  if (4 < (byte)(bVar32 - 0x29)) {
                    uStack_130 = 1;
                    switch(bVar32) {
                    case 0x2e:
                      break;
                    case 0x2f:
                      uVar46 = 0x2f;
                      break;
                    default:
                      goto code_r0x0015688f;
                    case 0x3a:
                      uVar46 = 0x3a;
                      break;
                    case 0x3b:
                      uVar46 = 0x3b;
                      break;
                    case 0x3c:
                      uVar46 = 0x3c;
                      break;
                    case 0x3d:
                      uVar46 = 0x3d;
                      break;
                    case 0x3e:
                      uVar46 = 0x3e;
                      break;
                    case 0x3f:
                      uVar46 = 0x3f;
                      break;
                    case 0x40:
                      uVar46 = 0x40;
                      break;
                    case 0x5b:
                      uVar46 = 0x5b;
                      break;
                    case 0x5c:
                      uVar46 = 0x5c;
                      break;
                    case 0x5d:
                      uVar46 = 0x5d;
                      break;
                    case 0x5e:
                      uVar46 = 0x5e;
                      break;
                    case 0x5f:
                      uVar46 = 0x5f;
                      break;
                    case 0x60:
                      uVar46 = 0x60;
                      break;
                    case 0x7b:
                      uVar46 = 0x7b;
                      break;
                    case 0x7c:
                      uVar46 = 0x7c;
                      break;
                    case 0x7d:
                      uVar46 = 0x7d;
                      break;
                    case 0x7e:
                      uVar46 = 0x7e;
                    }
                  }
                  break;
                case 0x30:
                  break;
                case 0x31:
                  uVar46 = 0x31;
                  break;
                case 0x32:
                  uVar46 = 0x32;
                  break;
                case 0x33:
                  uVar46 = 0x33;
                  break;
                case 0x34:
                  uVar46 = 0x34;
                  break;
                case 0x35:
                  uVar46 = 0x35;
                  break;
                case 0x36:
                  uVar46 = 0x36;
                  break;
                case 0x37:
                  uVar46 = 0x37;
                  break;
                case 0x38:
                  uVar46 = 0x38;
                  break;
                case 0x39:
                  uVar46 = 0x39;
                  break;
                case 0x61:
                  uVar46 = 0x41;
                  break;
                case 0x62:
                  uVar46 = 0x42;
                  break;
                case 99:
                  uVar46 = 0x43;
                  break;
                case 100:
                  uVar46 = 0x44;
                  break;
                case 0x65:
                  uVar46 = 0x45;
                  break;
                case 0x66:
                  uVar46 = 0x46;
                  break;
                case 0x67:
                  uVar46 = 0x47;
                  break;
                case 0x68:
                  uVar46 = 0x48;
                  break;
                case 0x69:
                  uVar46 = 0x49;
                  break;
                case 0x6a:
                  uVar46 = 0x4a;
                  break;
                case 0x6b:
                  uVar46 = 0x4b;
                  break;
                case 0x6c:
                  uVar46 = 0x4c;
                  break;
                case 0x6d:
                  uVar46 = 0x4d;
                  break;
                case 0x6e:
                  uVar46 = 0x4e;
                  break;
                case 0x6f:
                  uVar46 = 0x4f;
                  break;
                case 0x70:
                  uVar46 = 0x50;
                  break;
                case 0x71:
                  uVar46 = 0x51;
                  break;
                case 0x72:
                  uVar46 = 0x52;
                  break;
                case 0x73:
                  uVar46 = 0x53;
                  break;
                case 0x74:
                  uVar46 = 0x54;
                  break;
                case 0x75:
                  uVar46 = 0x55;
                  break;
                case 0x76:
                  uVar46 = 0x56;
                  break;
                case 0x77:
                  uVar46 = 0x57;
                  break;
                case 0x78:
                  uVar46 = 0x58;
                  break;
                case 0x79:
                  uVar46 = 0x59;
                  break;
                case 0x7a:
                  uVar46 = 0x5a;
                }
                break;
              case 2:
                if (*(short *)pbVar49 == 0x7075) {
                  uVar46 = 0xff52;
                }
                else if (*(short *)pbVar49 == 0x3166) {
                  uVar46 = 0xffbe;
                }
                else if (*(short *)pbVar49 == 0x3266) {
                  uVar46 = 0xffbf;
                }
                else if (*(short *)pbVar49 == 0x3366) {
                  uVar46 = 0xffc0;
                }
                else if (*(short *)pbVar49 == 0x3466) {
                  uVar46 = 0xffc1;
                }
                else if (*(short *)pbVar49 == 0x3566) {
                  uVar46 = 0xffc2;
                }
                else if (*(short *)pbVar49 == 0x3666) {
                  uVar46 = 0xffc3;
                }
                else if (*(short *)pbVar49 == 0x3766) {
                  uVar46 = 0xffc4;
                }
                else if (*(short *)pbVar49 == 0x3866) {
                  uVar46 = 0xffc5;
                }
                else if (*(short *)pbVar49 == 0x3966) {
                  uVar46 = 0xffc6;
                }
                else {
                  if (*(short *)pbVar49 == 0x6273) goto code_r0x00156341;
                  uVar46 = 0x40;
                  if (*(short *)pbVar49 != 0x7461) goto code_r0x00156922;
                }
                break;
              default:
                goto code_r0x0015688f;
              case 4:
                if (*(int *)pbVar49 == 0x656d6f68) {
                  uVar46 = 0xff50;
                }
                else if (*(int *)pbVar49 == 0x7466656c) {
                  uVar46 = 0xff51;
                }
                else if (*(int *)pbVar49 == 0x6e776f64) {
                  uVar46 = 0xff54;
                }
                else {
                  if (*(int *)pbVar49 == 0x70756770) goto code_r0x001562ce;
                  if (*(int *)pbVar49 == 0x6e646770) goto code_r0x0015624b;
                  if (*(int *)pbVar49 == 0x305f706b) goto code_r0x001563af;
                  if (*(int *)pbVar49 == 0x315f706b) {
code_r0x001563f5:
                    uVar46 = 0xffb1;
                  }
                  else if (*(int *)pbVar49 == 0x325f706b) {
code_r0x00156427:
                    uVar46 = 0xffb2;
                  }
                  else if (*(int *)pbVar49 == 0x335f706b) {
code_r0x00156620:
                    uVar46 = 0xffb3;
                  }
                  else if (*(int *)pbVar49 == 0x345f706b) {
code_r0x00156648:
                    uVar46 = 0xffb4;
                  }
                  else if (*(int *)pbVar49 == 0x355f706b) {
code_r0x0015665c:
                    uVar46 = 0xffb5;
                  }
                  else if (*(int *)pbVar49 == 0x365f706b) {
code_r0x0015667a:
                    uVar46 = 0xffb6;
                  }
                  else if (*(int *)pbVar49 == 0x375f706b) {
code_r0x0015668e:
                    uVar46 = 0xffb7;
                  }
                  else if (*(int *)pbVar49 == 0x385f706b) {
code_r0x001566b6:
                    uVar46 = 0xffb8;
                  }
                  else if (*(int *)pbVar49 == 0x395f706b) {
code_r0x001566ca:
                    uVar46 = 0xffb9;
                  }
                  else {
                    if (*(int *)pbVar49 == 0x6c727463) goto code_r0x001562ad;
                    if (*(int *)pbVar49 == 0x6174656d) goto code_r0x001563eb;
                    if (*(int *)pbVar49 == 0x746c616c) goto code_r0x00156698;
                    if (*(int *)pbVar49 == 0x746c6172) goto code_r0x001566c0;
                    if (*(int *)pbVar49 == 0x73756c70) {
                      uVar46 = 0x2b;
                    }
                    else {
                      uVar46 = 0x3c;
                      if (*(int *)pbVar49 != 0x7373656c) {
                        uStack_130 = 4;
                        goto code_r0x0015688f;
                      }
                    }
                  }
                }
                break;
              case 7:
                if (*(int *)(pbVar49 + 3) == 0x7165725f && *(int *)pbVar49 == 0x5f737973) {
code_r0x00156241:
                  uVar46 = 0xff15;
                }
                else if (*(int *)(pbVar49 + 3) == 0x70755f65 && *(int *)pbVar49 == 0x65676170) {
code_r0x001562ce:
                  uVar46 = 0xff55;
                }
                else {
                  if (*(int *)(pbVar49 + 3) == 0x7265746e && *(int *)pbVar49 == 0x6e65706b)
                  goto code_r0x00156285;
                  if (*(int *)(pbVar49 + 3) == 0x6c5f7466 && *(int *)pbVar49 == 0x66696873) {
code_r0x00156305:
                    uVar46 = 0xffe1;
                  }
                  else if (*(int *)(pbVar49 + 3) == 0x725f7466 && *(int *)pbVar49 == 0x66696873) {
code_r0x00156373:
                    uVar46 = 0xffe2;
                  }
                  else if (*(int *)(pbVar49 + 3) == 0x6c5f7265 && *(int *)pbVar49 == 0x65707573) {
code_r0x001563e1:
                    uVar46 = 0xffeb;
                  }
                  else if (*(int *)(pbVar49 + 3) == 0x725f7265 && *(int *)pbVar49 == 0x65707573) {
code_r0x0015641d:
                    uVar46 = 0xffec;
                  }
                  else if (*(int *)(pbVar49 + 3) == 0x746e6563 && *(int *)pbVar49 == 0x63726570) {
                    uVar46 = 0x25;
                  }
                  else {
                    uVar46 = 0x3e;
                    if (*(int *)(pbVar49 + 3) != 0x72657461 || *(int *)pbVar49 != 0x61657267) {
                      uStack_130 = 7;
                      goto code_r0x0015688f;
                    }
                  }
                }
                break;
              case 8:
                if (*(long *)pbVar49 == 0x6b636f6c5f6d756e) {
code_r0x0015627b:
                  uVar46 = 0xff7f;
                }
                else if (*(long *)pbVar49 == 0x7265746e655f706b) {
code_r0x00156285:
                  uVar46 = 0xff8d;
                }
                else if (*(long *)pbVar49 == 0x7261626563617073) {
code_r0x00156341:
                  uVar46 = 0x20;
                }
                else if (*(long *)pbVar49 == 0x6c626465746f7571) {
                  uVar46 = 0x22;
                }
                else if (*(long *)pbVar49 == 0x6b73697265747361) {
                  uVar46 = 0x2a;
                }
                else {
                  uVar46 = 0x3f;
                  if (*(long *)pbVar49 != 0x6e6f697473657571) {
                    uStack_130 = 8;
                    goto code_r0x0015688f;
                  }
                }
                break;
              case 10:
                if (*(short *)(pbVar49 + 8) == 0x6e67 && *(long *)pbVar49 == 0x69737265626d756e) {
                  uVar46 = 0x23;
                }
                else if (*(short *)(pbVar49 + 8) == 0x6568 && *(long *)pbVar49 == 0x706f7274736f7061
                        ) {
                  uVar46 = 0x27;
                }
                else if (*(short *)(pbVar49 + 8) == 0x7468 && *(long *)pbVar49 == 0x6769726e65726170
                        ) {
                  uVar46 = 0x29;
                }
                else if (*(short *)(pbVar49 + 8) == 0x6572 && *(long *)pbVar49 == 0x6f63737265646e75
                        ) {
                  uVar46 = 0x5f;
                }
                else if (*(short *)(pbVar49 + 8) == 0x7468 && *(long *)pbVar49 == 0x6769726563617262
                        ) {
                  uVar46 = 0x7d;
                }
                else {
                  uVar46 = 0x7e;
                  if (*(short *)(pbVar49 + 8) != 0x6564 || *(long *)pbVar49 != 0x6c69746969637361) {
                    uStack_130 = 10;
                    goto code_r0x0015688f;
                  }
                }
                break;
              case 0xb:
                if (*(long *)(pbVar49 + 3) == 0x6b636f6c5f6c6c6f &&
                    *(long *)pbVar49 == 0x6c5f6c6c6f726373) {
code_r0x00156237:
                  uVar46 = 0xff14;
                }
                else if (*(long *)(pbVar49 + 3) == 0x7466656c74656b63 &&
                         *(long *)pbVar49 == 0x6c74656b63617262) {
                  uVar46 = 0x5b;
                }
                else {
                  uVar46 = 0x5e;
                  if (*(long *)(pbVar49 + 3) != 0x6d75637269636969 ||
                      *(long *)pbVar49 != 0x7269636969637361) {
                    uStack_130 = 0xb;
                    goto code_r0x0015688f;
                  }
                }
                break;
              case 0xc:
                uVar46 = 0x5d;
                if (*(int *)(pbVar49 + 8) != 0x74686769 || *(long *)pbVar49 != 0x7274656b63617262) {
                  uStack_130 = 0xc;
                  goto code_r0x0015688f;
                }
              }
            }
            else {
              if (uStack_130 < 0x20) {
                uVar44 = 0;
code_r0x001552fc:
                uVar27 = _UNK_002f8160;
                uVar43 = _UNK_002f8150;
                uVar42 = uStack_130 & 0xfffffffffffffff8;
                do {
                  uVar47 = *(ulong *)(pbVar41 + uVar44);
                  bVar52 = (char)uVar47 + (char)uVar43;
                  bVar53 = (char)(uVar47 >> 8) + (char)((ulong)uVar43 >> 8);
                  bVar54 = (char)(uVar47 >> 0x10) + (char)((ulong)uVar43 >> 0x10);
                  bVar55 = (char)(uVar47 >> 0x18) + (char)((ulong)uVar43 >> 0x18);
                  bVar56 = (char)(uVar47 >> 0x20) + (char)((ulong)uVar43 >> 0x20);
                  bVar57 = (char)(uVar47 >> 0x28) + (char)((ulong)uVar43 >> 0x28);
                  bVar58 = (char)(uVar47 >> 0x30) + (char)((ulong)uVar43 >> 0x30);
                  bVar59 = (char)(uVar47 >> 0x38) + (char)((ulong)uVar43 >> 0x38);
                  bVar32 = (byte)uVar27;
                  bVar33 = (byte)((ulong)uVar27 >> 8);
                  bVar4 = (byte)((ulong)uVar27 >> 0x10);
                  bVar5 = (byte)((ulong)uVar27 >> 0x18);
                  bVar6 = (byte)((ulong)uVar27 >> 0x20);
                  bVar7 = (byte)((ulong)uVar27 >> 0x28);
                  bVar8 = (byte)((ulong)uVar27 >> 0x30);
                  bVar9 = (byte)((ulong)uVar27 >> 0x38);
                  *(ulong *)(pbVar41 + uVar44) =
                       ~CONCAT17(-((byte)((bVar59 < bVar9) * bVar9 | (bVar59 >= bVar9) * bVar59) ==
                                  bVar59),CONCAT16(-((byte)((bVar58 < bVar8) * bVar8 |
                                                           (bVar58 >= bVar8) * bVar58) == bVar58),
                                                   CONCAT15(-((byte)((bVar57 < bVar7) * bVar7 |
                                                                    (bVar57 >= bVar7) * bVar57) ==
                                                             bVar57),CONCAT14(-((byte)((bVar56 < 
                                                  bVar6) * bVar6 | (bVar56 >= bVar6) * bVar56) ==
                                                  bVar56),CONCAT13(-((byte)((bVar55 < bVar5) * bVar5
                                                                           | (bVar55 >= bVar5) *
                                                                             bVar55) == bVar55),
                                                                   CONCAT12(-((byte)((bVar54 < bVar4
                                                                                     ) * bVar4 |
                                                                                    (bVar54 >= bVar4
                                                                                    ) * bVar54) ==
                                                                             bVar54),CONCAT11(-((
                                                  byte)((bVar53 < bVar33) * bVar33 |
                                                       (bVar53 >= bVar33) * bVar53) == bVar53),
                                                  -((byte)((bVar52 < bVar32) * bVar32 |
                                                          (bVar52 >= bVar32) * bVar52) == bVar52))))
                                                  )))) & uVar46 | uVar47;
                  uVar44 = uVar44 + 8;
                } while (uVar42 != uVar44);
                if (uStack_130 != uVar42) goto code_r0x00155350;
              }
              else {
                uVar42 = uStack_130 & 0xffffffffffffffe0;
                uVar44 = 0;
                do {
                  auVar1 = *(undefined1 (*) [16])(pbVar41 + uVar44);
                  auVar2 = *(undefined1 (*) [16])(pbVar41 + uVar44 + 0x10);
                  bVar60 = auVar1[0] + cVar11;
                  bVar62 = auVar1[1] + cVar12;
                  bVar63 = auVar1[2] + cVar13;
                  bVar64 = auVar1[3] + cVar14;
                  bVar65 = auVar1[4] + cVar15;
                  bVar66 = auVar1[5] + cVar16;
                  bVar67 = auVar1[6] + cVar17;
                  bVar68 = auVar1[7] + cVar18;
                  bVar69 = auVar1[8] + cVar19;
                  bVar70 = auVar1[9] + cVar20;
                  bVar71 = auVar1[10] + cVar21;
                  bVar72 = auVar1[0xb] + cVar22;
                  bVar73 = auVar1[0xc] + cVar23;
                  bVar74 = auVar1[0xd] + cVar24;
                  bVar75 = auVar1[0xe] + cVar25;
                  bVar76 = auVar1[0xf] + cVar26;
                  bVar77 = auVar2[0] + cVar11;
                  bVar78 = auVar2[1] + cVar12;
                  bVar79 = auVar2[2] + cVar13;
                  bVar80 = auVar2[3] + cVar14;
                  bVar81 = auVar2[4] + cVar15;
                  bVar82 = auVar2[5] + cVar16;
                  bVar83 = auVar2[6] + cVar17;
                  bVar84 = auVar2[7] + cVar18;
                  bVar85 = auVar2[8] + cVar19;
                  bVar86 = auVar2[9] + cVar20;
                  bVar87 = auVar2[10] + cVar21;
                  bVar88 = auVar2[0xb] + cVar22;
                  bVar89 = auVar2[0xc] + cVar23;
                  bVar90 = auVar2[0xd] + cVar24;
                  bVar91 = auVar2[0xe] + cVar25;
                  bVar92 = auVar2[0xf] + cVar26;
                  auVar93[0] = -((byte)((bVar32 < bVar60) * bVar32 | (bVar32 >= bVar60) * bVar60) ==
                                bVar60);
                  auVar93[1] = -((byte)((bVar33 < bVar62) * bVar33 | (bVar33 >= bVar62) * bVar62) ==
                                bVar62);
                  auVar93[2] = -((byte)((bVar4 < bVar63) * bVar4 | (bVar4 >= bVar63) * bVar63) ==
                                bVar63);
                  auVar93[3] = -((byte)((bVar5 < bVar64) * bVar5 | (bVar5 >= bVar64) * bVar64) ==
                                bVar64);
                  auVar93[4] = -((byte)((bVar6 < bVar65) * bVar6 | (bVar6 >= bVar65) * bVar65) ==
                                bVar65);
                  auVar93[5] = -((byte)((bVar7 < bVar66) * bVar7 | (bVar7 >= bVar66) * bVar66) ==
                                bVar66);
                  auVar93[6] = -((byte)((bVar8 < bVar67) * bVar8 | (bVar8 >= bVar67) * bVar67) ==
                                bVar67);
                  auVar93[7] = -((byte)((bVar9 < bVar68) * bVar9 | (bVar9 >= bVar68) * bVar68) ==
                                bVar68);
                  auVar93[8] = -((byte)((bVar52 < bVar69) * bVar52 | (bVar52 >= bVar69) * bVar69) ==
                                bVar69);
                  auVar93[9] = -((byte)((bVar53 < bVar70) * bVar53 | (bVar53 >= bVar70) * bVar70) ==
                                bVar70);
                  auVar93[10] = -((byte)((bVar54 < bVar71) * bVar54 | (bVar54 >= bVar71) * bVar71)
                                 == bVar71);
                  auVar93[0xb] = -((byte)((bVar55 < bVar72) * bVar55 | (bVar55 >= bVar72) * bVar72)
                                  == bVar72);
                  auVar93[0xc] = -((byte)((bVar56 < bVar73) * bVar56 | (bVar56 >= bVar73) * bVar73)
                                  == bVar73);
                  auVar93[0xd] = -((byte)((bVar57 < bVar74) * bVar57 | (bVar57 >= bVar74) * bVar74)
                                  == bVar74);
                  auVar93[0xe] = -((byte)((bVar58 < bVar75) * bVar58 | (bVar58 >= bVar75) * bVar75)
                                  == bVar75);
                  auVar93[0xf] = -((byte)((bVar59 < bVar76) * bVar59 | (bVar59 >= bVar76) * bVar76)
                                  == bVar76);
                  auVar61[0] = -((byte)((bVar32 < bVar77) * bVar32 | (bVar32 >= bVar77) * bVar77) ==
                                bVar77);
                  auVar61[1] = -((byte)((bVar33 < bVar78) * bVar33 | (bVar33 >= bVar78) * bVar78) ==
                                bVar78);
                  auVar61[2] = -((byte)((bVar4 < bVar79) * bVar4 | (bVar4 >= bVar79) * bVar79) ==
                                bVar79);
                  auVar61[3] = -((byte)((bVar5 < bVar80) * bVar5 | (bVar5 >= bVar80) * bVar80) ==
                                bVar80);
                  auVar61[4] = -((byte)((bVar6 < bVar81) * bVar6 | (bVar6 >= bVar81) * bVar81) ==
                                bVar81);
                  auVar61[5] = -((byte)((bVar7 < bVar82) * bVar7 | (bVar7 >= bVar82) * bVar82) ==
                                bVar82);
                  auVar61[6] = -((byte)((bVar8 < bVar83) * bVar8 | (bVar8 >= bVar83) * bVar83) ==
                                bVar83);
                  auVar61[7] = -((byte)((bVar9 < bVar84) * bVar9 | (bVar9 >= bVar84) * bVar84) ==
                                bVar84);
                  auVar61[8] = -((byte)((bVar52 < bVar85) * bVar52 | (bVar52 >= bVar85) * bVar85) ==
                                bVar85);
                  auVar61[9] = -((byte)((bVar53 < bVar86) * bVar53 | (bVar53 >= bVar86) * bVar86) ==
                                bVar86);
                  auVar61[10] = -((byte)((bVar54 < bVar87) * bVar54 | (bVar54 >= bVar87) * bVar87)
                                 == bVar87);
                  auVar61[0xb] = -((byte)((bVar55 < bVar88) * bVar55 | (bVar55 >= bVar88) * bVar88)
                                  == bVar88);
                  auVar61[0xc] = -((byte)((bVar56 < bVar89) * bVar56 | (bVar56 >= bVar89) * bVar89)
                                  == bVar89);
                  auVar61[0xd] = -((byte)((bVar57 < bVar90) * bVar57 | (bVar57 >= bVar90) * bVar90)
                                  == bVar90);
                  auVar61[0xe] = -((byte)((bVar58 < bVar91) * bVar58 | (bVar58 >= bVar91) * bVar91)
                                  == bVar91);
                  auVar61[0xf] = -((byte)((bVar59 < bVar92) * bVar59 | (bVar59 >= bVar92) * bVar92)
                                  == bVar92);
                  *(undefined1 (*) [16])(pbVar41 + uVar44) = auVar93 & auVar94 | auVar1;
                  *(undefined1 (*) [16])(pbVar41 + uVar44 + 0x10) = auVar61 & auVar94 | auVar2;
                  uVar44 = uVar44 + 0x20;
                } while (uVar42 != uVar44);
                if (uStack_130 != uVar42) {
                  uVar44 = uVar42;
                  if ((uStack_130 & 0x18) == 0) goto code_r0x00155350;
                  goto code_r0x001552fc;
                }
              }
code_r0x00155379:
              if (pbVar41[2] == 0x5f && *(short *)pbVar41 == 0x6b78) {
                uStack_130 = uStack_130 - 3;
              }
              pbVar49 = pbVar41 + (ulong)(pbVar41[2] == 0x5f && *(short *)pbVar41 == 0x6b78) * 3;
              switch(uStack_130) {
              case 3:
                if (pbVar49[2] == 0x70 && *(short *)pbVar49 == 0x7362) {
code_r0x00155d00:
                  uVar46 = 0xff08;
                  break;
                }
                if (pbVar49[2] == 0x62 && *(short *)pbVar49 == 0x6174) {
                  uVar46 = 0xff09;
                  break;
                }
                if (pbVar49[2] == 99 && *(short *)pbVar49 == 0x7365) goto code_r0x0015622d;
                if (pbVar49[2] == 0x6c && *(short *)pbVar49 == 0x6564) goto code_r0x00156255;
                if (pbVar49[2] == 100 && *(short *)pbVar49 == 0x6e65) {
                  uVar46 = 0xff57;
                  break;
                }
                if (pbVar49[2] == 0x73 && *(short *)pbVar49 == 0x6e69) goto code_r0x001562fb;
                if (pbVar49[2] != 0x30 || *(short *)pbVar49 != 0x706b) {
                  if (pbVar49[2] != 0x31 || *(short *)pbVar49 != 0x706b) {
                    if (pbVar49[2] != 0x32 || *(short *)pbVar49 != 0x706b) {
                      if (pbVar49[2] != 0x33 || *(short *)pbVar49 != 0x706b) {
                        if (pbVar49[2] != 0x34 || *(short *)pbVar49 != 0x706b) {
                          if (pbVar49[2] != 0x35 || *(short *)pbVar49 != 0x706b) {
                            if (pbVar49[2] != 0x36 || *(short *)pbVar49 != 0x706b) {
                              if (pbVar49[2] != 0x37 || *(short *)pbVar49 != 0x706b) {
                                if (pbVar49[2] != 0x38 || *(short *)pbVar49 != 0x706b) {
                                  if (pbVar49[2] != 0x39 || *(short *)pbVar49 != 0x706b) {
                                    if (pbVar49[2] == 0x30 && *(short *)pbVar49 == 0x3166) {
                                      uVar46 = 0xffc7;
                                    }
                                    else if (pbVar49[2] == 0x31 && *(short *)pbVar49 == 0x3166) {
                                      uVar46 = 0xffc8;
                                    }
                                    else if (pbVar49[2] == 0x32 && *(short *)pbVar49 == 0x3166) {
                                      uVar46 = 0xffc9;
                                    }
                                    else if (pbVar49[2] == 0x33 && *(short *)pbVar49 == 0x3166) {
                                      uVar46 = 0xffca;
                                    }
                                    else if (pbVar49[2] == 0x34 && *(short *)pbVar49 == 0x3166) {
                                      uVar46 = 0xffcb;
                                    }
                                    else if (pbVar49[2] == 0x35 && *(short *)pbVar49 == 0x3166) {
                                      uVar46 = 0xffcc;
                                    }
                                    else if (pbVar49[2] == 0x36 && *(short *)pbVar49 == 0x3166) {
                                      uVar46 = 0xffcd;
                                    }
                                    else if (pbVar49[2] == 0x37 && *(short *)pbVar49 == 0x3166) {
                                      uVar46 = 0xffce;
                                    }
                                    else if (pbVar49[2] == 0x38 && *(short *)pbVar49 == 0x3166) {
                                      uVar46 = 0xffcf;
                                    }
                                    else if (pbVar49[2] == 0x39 && *(short *)pbVar49 == 0x3166) {
                                      uVar46 = 0xffd0;
                                    }
                                    else if (pbVar49[2] == 0x30 && *(short *)pbVar49 == 0x3266) {
                                      uVar46 = 0xffd1;
                                    }
                                    else {
                                      if (pbVar49[2] == 0x74 && *(short *)pbVar49 == 0x6c61)
                                      goto code_r0x00156698;
                                      uVar46 = 0x7c;
                                      if (pbVar49[2] != 0x72 || *(short *)pbVar49 != 0x6162) {
                                        uStack_130 = 3;
                                        goto code_r0x0015688f;
                                      }
                                    }
                                    break;
                                  }
                                  goto code_r0x001566ca;
                                }
                                goto code_r0x001566b6;
                              }
                              goto code_r0x0015668e;
                            }
                            goto code_r0x0015667a;
                          }
                          goto code_r0x0015665c;
                        }
                        goto code_r0x00156648;
                      }
                      goto code_r0x00156620;
                    }
                    goto code_r0x00156427;
                  }
                  goto code_r0x001563f5;
                }
code_r0x001563af:
                uVar46 = 0xffb0;
                break;
              default:
                goto code_r0x00155700;
              case 5:
                if (pbVar49[4] == 0x72 && *(int *)pbVar49 == 0x65746e65) {
code_r0x00155cf6:
                  uVar46 = 0xff0d;
                  break;
                }
                if (pbVar49[4] == 0x65 && *(int *)pbVar49 == 0x73756170) {
                  uVar46 = 0xff13;
                  break;
                }
                if (pbVar49[4] == 0x6b && *(int *)pbVar49 == 0x6c726373) goto code_r0x00156237;
                if (pbVar49[4] == 0x71 && *(int *)pbVar49 == 0x72737973) goto code_r0x00156241;
                if (pbVar49[4] == 0x74 && *(int *)pbVar49 == 0x68676972) {
                  uVar46 = 0xff53;
                  break;
                }
                if (pbVar49[4] == 0x6b && *(int *)pbVar49 == 0x6c6d756e) goto code_r0x0015627b;
                if (pbVar49[4] == 0x74 && *(int *)pbVar49 == 0x66696873) goto code_r0x00156305;
                if (pbVar49[4] == 0x6c && *(int *)pbVar49 == 0x7274636c) goto code_r0x001562ad;
                if (pbVar49[4] == 0x6c && *(int *)pbVar49 == 0x72746372) goto code_r0x00156337;
                if (pbVar49[4] == 0x6b && *(int *)pbVar49 == 0x6c706163) goto code_r0x00156369;
                if (pbVar49[4] == 0x61 && *(int *)pbVar49 == 0x74656d6c) goto code_r0x001563eb;
                if (pbVar49[4] == 0x61 && *(int *)pbVar49 == 0x74656d72) goto code_r0x00156413;
                if (pbVar49[4] == 0x6c && *(int *)pbVar49 == 0x5f746c61) {
code_r0x00156698:
                  uVar46 = 0xffe9;
                }
                else {
                  if (pbVar49[4] != 0x72 || *(int *)pbVar49 != 0x5f746c61) {
                    if (pbVar49[4] == 0x72 && *(int *)pbVar49 == 0x65707573) goto code_r0x001563e1;
                    if (pbVar49[4] != 0x65 || *(int *)pbVar49 != 0x63617073) {
                      if (pbVar49[4] == 0x61 && *(int *)pbVar49 == 0x6d6d6f63) {
                        uVar46 = 0x2c;
                      }
                      else if (pbVar49[4] == 0x73 && *(int *)pbVar49 == 0x756e696d) {
                        uVar46 = 0x2d;
                      }
                      else {
                        if (pbVar49[4] == 0x68 && *(int *)pbVar49 == 0x73616c73)
                        goto code_r0x001566ac;
                        if (pbVar49[4] == 0x6e && *(int *)pbVar49 == 0x6f6c6f63) {
                          uVar46 = 0x3a;
                        }
                        else if (pbVar49[4] == 0x6c && *(int *)pbVar49 == 0x61757165) {
                          uVar46 = 0x3d;
                        }
                        else {
                          uVar46 = 0x60;
                          if (pbVar49[4] != 0x65 || *(int *)pbVar49 != 0x76617267) {
                            uStack_130 = 5;
                            goto code_r0x0015688f;
                          }
                        }
                      }
                      break;
                    }
                    goto code_r0x00156341;
                  }
code_r0x001566c0:
                  uVar46 = 0xffea;
                }
                break;
              case 6:
                if (*(short *)(pbVar49 + 4) == 0x6e72 && *(int *)pbVar49 == 0x75746572)
                goto code_r0x00155cf6;
                if (*(short *)(pbVar49 + 4) == 0x6570 && *(int *)pbVar49 == 0x61637365) {
code_r0x0015622d:
                  uVar46 = 0xff1b;
                }
                else {
                  if (*(short *)(pbVar49 + 4) == 0x6574 && *(int *)pbVar49 == 0x656c6564) {
code_r0x00156255:
                    uVar46 = 0xffff;
                    break;
                  }
                  if (*(short *)(pbVar49 + 4) == 0x7472 && *(int *)pbVar49 == 0x65736e69) {
code_r0x001562fb:
                    uVar46 = 0xff63;
                    break;
                  }
                  if (*(short *)(pbVar49 + 4) == 0x7466 && *(int *)pbVar49 == 0x6968736c)
                  goto code_r0x00156305;
                  if (*(short *)(pbVar49 + 4) == 0x7466 && *(int *)pbVar49 == 0x69687372)
                  goto code_r0x00156373;
                  if (*(short *)(pbVar49 + 4) != 0x6c5f || *(int *)pbVar49 != 0x6174656d) {
                    if (*(short *)(pbVar49 + 4) == 0x725f && *(int *)pbVar49 == 0x6174656d) {
code_r0x00156413:
                      uVar46 = 0xffe8;
                      break;
                    }
                    if (*(short *)(pbVar49 + 4) != 0x7265 || *(int *)pbVar49 != 0x7075736c) {
                      if (*(short *)(pbVar49 + 4) != 0x7265 || *(int *)pbVar49 != 0x70757372) {
                        if (*(short *)(pbVar49 + 4) == 0x6d61 && *(int *)pbVar49 == 0x6c637865) {
                          uVar46 = 0x21;
                        }
                        else if (*(short *)(pbVar49 + 4) == 0x7261 && *(int *)pbVar49 == 0x6c6c6f64)
                        {
                          uVar46 = 0x24;
                        }
                        else if (*(short *)(pbVar49 + 4) == 0x646f && *(int *)pbVar49 == 0x69726570)
                        {
                          uVar46 = 0x2e;
                        }
                        else if (*(short *)(pbVar49 + 4) == 0x6873 && *(int *)pbVar49 == 0x616c7366)
                        {
code_r0x001566ac:
                          uVar46 = 0x2f;
                        }
                        else {
                          uVar46 = 0x5c;
                          if (*(short *)(pbVar49 + 4) != 0x6873 || *(int *)pbVar49 != 0x616c7362) {
                            uStack_130 = 6;
                            goto code_r0x0015688f;
                          }
                        }
                        break;
                      }
                      goto code_r0x0015641d;
                    }
                    goto code_r0x001563e1;
                  }
code_r0x001563eb:
                  uVar46 = 0xffe7;
                }
                break;
              case 9:
                if (pbVar49[8] == 0x65 && *(long *)pbVar49 == 0x636170736b636162)
                goto code_r0x00155d00;
                if (pbVar49[8] == 0x6e && *(long *)pbVar49 == 0x776f645f65676170) {
code_r0x0015624b:
                  uVar46 = 0xff56;
                }
                else {
                  if (pbVar49[8] != 0x6c || *(long *)pbVar49 != 0x5f6c6f72746e6f63) {
                    if (pbVar49[8] == 0x72 && *(long *)pbVar49 == 0x5f6c6f72746e6f63) {
code_r0x00156337:
                      uVar46 = 0xffe4;
                    }
                    else if (pbVar49[8] == 0x6b && *(long *)pbVar49 == 0x636f6c5f73706163) {
code_r0x00156369:
                      uVar46 = 0xffe5;
                    }
                    else if (pbVar49[8] == 100 && *(long *)pbVar49 == 0x6e61737265706d61) {
                      uVar46 = 0x26;
                    }
                    else if (pbVar49[8] == 0x74 && *(long *)pbVar49 == 0x66656c6e65726170) {
                      uVar46 = 0x28;
                    }
                    else if (pbVar49[8] == 0x6e && *(long *)pbVar49 == 0x6f6c6f63696d6573) {
                      uVar46 = 0x3b;
                    }
                    else if (pbVar49[8] == 0x68 && *(long *)pbVar49 == 0x73616c736b636162) {
                      uVar46 = 0x5c;
                    }
                    else {
                      uVar46 = 0x7b;
                      if (pbVar49[8] != 0x74 || *(long *)pbVar49 != 0x66656c6563617262) {
                        uStack_130 = 9;
                        goto code_r0x0015688f;
                      }
                    }
                    break;
                  }
code_r0x001562ad:
                  uVar46 = 0xffe3;
                }
              }
            }
            (*(code *)PTR_free_00380de0)(pbVar41);
            pbVar39 = pbStack_160;
            if (pbStack_160 == pbStack_170) {
              _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hb5e8d0265e84c2adE(&pbStack_170);
            }
            lStack_158 = lStack_168;
            *(ulong *)(lStack_168 + (long)pbVar39 * 8) = uVar46;
            pbVar39 = pbVar39 + 1;
            bVar50 = false;
            pbVar49 = pbStack_150;
            pbStack_160 = pbVar39;
          } while (!bVar10);
          *(byte **)(pbStack_148 + 0x10) = pbStack_160;
          *(byte **)pbStack_148 = pbStack_170;
          *(long *)(pbStack_148 + 8) = lStack_168;
        }
        return pbStack_160;
      }
      pbStack_d0 = pbVar39;
      pbStack_c0 = (byte *)0x0;
      plStack_60 = plVar51 + (long)pbVar39;
      pbStack_d8 = (byte *)0x0;
      uStack_70 = 0;
      plStack_80 = plStack_c8;
      do {
        lVar30 = lStack_b8;
        lVar35 = *plVar51;
        lStack_50 = lVar35;
        bVar32 = (*(code *)PTR_XKeysymToKeycode_00380f80)(lStack_b8,lVar35);
        if (bVar32 == 0) goto code_r0x00154e2c;
        lStack_78 = lVar35;
        plStack_68 = plVar51;
        lStack_58 = (*(code *)PTR_XKeycodeToKeysym_00380f38)(lVar30,bVar32,0);
        uStack_94 = (uint)bVar32;
        lVar36 = (*(code *)PTR_XKeycodeToKeysym_00380f38)(lVar30,bVar32,1);
        lVar31 = lStack_78;
        bVar33 = (byte)uStack_70;
        if (((0x19 < lVar35 - 0x41U && (uStack_70 & 1) == 0) && (lStack_58 != lStack_78)) &&
           (lVar36 == lStack_78)) {
          bVar33 = (*(code *)PTR_XKeysymToKeycode_00380f80)(lVar30,0xffe1);
          if (bVar33 == 0) {
            lVar35 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17hcaf2e919a74f2e89E
                               (&UNK_00309ea4,0x43);
          }
          else {
            lVar35 = _ZN9sky_linux6client3x117context22send_event_at_position17h7a0bc0b8222f537bE
                               (2,bVar33,0,0);
            if (lVar35 == 0) {
              plVar51 = plStack_80;
              if (pbStack_d8 == pbStack_d0) {
                _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h9981077231b2ee3dE(&pbStack_d0);
                plVar51 = plStack_c8;
              }
              *(byte *)((long)plVar51 + (long)pbStack_d8) = bVar33;
              puVar28 = PTR___errno_location_00380f10;
              pbStack_d8 = pbStack_d8 + 1;
              pcVar37 = (code *)0x1f78a40;
              plVar51 = (long *)0x0;
              pbStack_c0 = pbStack_d8;
              do {
                plStack_b0 = (long *)0x7fffffffffffffff;
                if (plVar51 < (long *)0x7fffffffffffffff) {
                  plStack_b0 = plVar51;
                }
                plVar51 = (long *)((long)plVar51 - (long)plStack_b0);
                pcStack_a8 = pcVar37;
                iVar34 = (*(code *)puVar29)(&plStack_b0,&plStack_b0);
                if (iVar34 == -1) {
                  piVar38 = (int *)(*(code *)puVar28)();
                  iStack_dc = *piVar38;
                  if (iStack_dc != 4) goto code_r0x00154e14;
                  plVar51 = (long *)((long)plVar51 + (long)plStack_b0);
                  pcVar37 = pcStack_a8;
                }
                else {
                  pcVar37 = (code *)0x0;
                }
              } while (0 < (long)pcVar37 || plVar51 != (long *)0x0);
              bVar33 = 1;
              goto code_r0x00154cb2;
            }
          }
          goto code_r0x00154e7c;
        }
code_r0x00154cb2:
        lVar35 = _ZN9sky_linux6client3x117context22send_event_at_position17h7a0bc0b8222f537bE
                           (2,uStack_94,0,0);
        if (lVar35 != 0) goto code_r0x00154e7c;
        if (pbStack_d8 == pbStack_d0) {
          _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h9981077231b2ee3dE(&pbStack_d0);
        }
        plStack_68 = plStack_68 + 1;
        plStack_80 = plStack_c8;
        *(byte *)((long)plStack_c8 + (long)pbStack_d8) = bVar32;
        puVar28 = PTR___errno_location_00380f10;
        pbStack_d8 = pbStack_d8 + 1;
        uStack_70 = CONCAT71((int7)((ulong)pbStack_d8 >> 8),lVar31 - 0xffe1U < 2 | bVar33);
        pcVar37 = (code *)0x1f78a40;
        plVar51 = (long *)0x0;
        pbStack_c0 = pbStack_d8;
        do {
          plStack_b0 = (long *)0x7fffffffffffffff;
          if (plVar51 < (long *)0x7fffffffffffffff) {
            plStack_b0 = plVar51;
          }
          plVar51 = (long *)((long)plVar51 - (long)plStack_b0);
          pcStack_a8 = pcVar37;
          iVar34 = (*(code *)puVar29)(&plStack_b0,&plStack_b0);
          if (iVar34 == -1) {
            piVar38 = (int *)(*(code *)puVar28)();
            iStack_dc = *piVar38;
            if (iStack_dc != 4) goto code_r0x00154e14;
            plVar51 = (long *)((long)plVar51 + (long)plStack_b0);
            pcVar37 = pcStack_a8;
          }
          else {
            pcVar37 = (code *)0x0;
          }
        } while (0 < (long)pcVar37 || plVar51 != (long *)0x0);
        plVar51 = plStack_68;
      } while (plStack_68 != plStack_60);
    }
    puStack_a0[2] = pbStack_c0;
    puStack_a0[3] = lStack_b8;
    *puStack_a0 = pbStack_d0;
    puStack_a0[1] = plStack_c8;
    pbVar39 = pbStack_d0;
    plVar51 = plStack_88;
    pbVar49 = pbStack_90;
  }
joined_r0x00154ea9:
  if (pbVar49 != (byte *)0x0) {
    pbVar39 = (byte *)(*(code *)PTR_free_00380de0)(plVar51);
  }
  return pbVar39;
code_r0x00154e14:
  _ZN4core9panicking13assert_failed17h9869ad7d614c2b94E(&iStack_dc,&UNK_002fa110,&UNK_0037d4e0);
code_r0x00154e2c:
  plStack_b0 = &lStack_50;
  pcStack_a8 = 
  _ZN4core3fmt3num53__LT_impl_u20_core__fmt__LowerHex_u20_for_u20_u64_GT_3fmt17hf8d4743e9f919888E;
  _ZN5alloc3fmt6format12format_inner17h655a6aa2517b043fE(auStack_48,&UNK_003019d0,&plStack_b0);
  lVar35 = _ZN6anyhow4kind5Adhoc3new17hd336d325cbc6b6f4E(auStack_48);
code_r0x00154e7c:
  puStack_a0[1] = lVar35;
  *puStack_a0 = 0x8000000000000000;
  pbVar39 = (byte *)_ZN4core3ptr68drop_in_place_LT_sky_linux__client__x11__key_presser__KeyPresser_GT_17h5d36ae4f446f3d27E
                              (&pbStack_d0);
  plVar51 = plStack_88;
  pbVar49 = pbStack_90;
  goto joined_r0x00154ea9;
}


