// 00154f00  undefined _ZN9sky_linux6client3x114keys4keys17h30ef62977c4baceaE(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN9sky_linux6client3x114keys4keys17h30ef62977c4baceaE(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  byte bVar4;
  ulong uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  bool bVar13;
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
  char cVar27;
  char cVar28;
  char cVar29;
  undefined8 uVar30;
  ulong uVar31;
  byte *pbVar32;
  ulong uVar33;
  undefined8 uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  long lVar38;
  byte *pbVar39;
  ulong uVar40;
  bool bVar41;
  byte *pbVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  undefined1 auVar52 [16];
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  ulong uStack_a0;
  byte *pbStack_88;
  long lStack_80;
  byte *pbStack_78;
  long lStack_70;
  byte *pbStack_68;
  undefined8 *puStack_60;
  byte *pbStack_58;
  byte *pbStack_50;
  ulong uStack_48;
  byte **ppbStack_40;
  code *pcStack_38;
  
  if (SBORROW8(0,*param_2)) {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
  }
  else {
    pbStack_88 = (byte *)0x0;
    lStack_80 = 8;
    pbStack_78 = (byte *)0x0;
    pbStack_68 = (byte *)param_2[1];
    uVar5 = param_2[2];
    pbStack_58 = pbStack_68 + 8;
    lStack_70 = 8;
    pbVar42 = (byte *)0x0;
    bVar41 = false;
    uVar37 = 0;
    uVar31 = 0;
    pbVar39 = pbStack_68;
    puStack_60 = param_1;
code_r0x00154fd0:
    do {
      bVar13 = true;
      uVar40 = uVar37;
      do {
        uVar37 = uVar40;
        uStack_a0 = uVar31;
        if (uVar5 < uVar40) goto code_r0x0015517b;
        uVar36 = uVar5 - uVar40;
        pbVar32 = pbVar39 + uVar40;
        uVar37 = uVar5;
        if (uVar36 < 0x10) {
          if (uVar5 == uVar40) goto code_r0x0015517b;
          uVar35 = 0;
          while (pbVar32[uVar35] != 0x2b) {
            uVar35 = uVar35 + 1;
            if (uVar36 == uVar35) goto code_r0x0015517b;
          }
        }
        else {
          uVar33 = ((ulong)(pbVar32 + 7) & 0xfffffffffffffff8) - (long)pbVar32;
          if (uVar33 == 0) {
            uVar33 = 0;
code_r0x00155043:
            do {
              if (((0x101010101010100 -
                    (*(ulong *)(pbStack_58 + uVar33 + (uVar40 - 8)) ^ 0x2b2b2b2b2b2b2b2b) |
                   *(ulong *)(pbStack_58 + uVar33 + (uVar40 - 8))) & 0x8080808080808080 &
                  (0x101010101010100 -
                   (*(ulong *)(pbStack_58 + uVar33 + uVar40) ^ 0x2b2b2b2b2b2b2b2b) |
                  *(ulong *)(pbStack_58 + uVar33 + uVar40) ^ 0x2b2b2b2b2b2b2b2b)) !=
                  0x8080808080808080) break;
              uVar33 = uVar33 + 0x10;
            } while (uVar33 <= uVar36 - 0x10);
          }
          else {
            uVar35 = 0;
            do {
              if (pbVar32[uVar35] == 0x2b) goto joined_r0x00155149;
              uVar35 = uVar35 + 1;
            } while (uVar33 != uVar35);
            if (uVar33 <= uVar36 - 0x10) goto code_r0x00155043;
          }
          pbVar39 = pbStack_68;
          if (uVar36 == uVar33) goto code_r0x0015517b;
          lVar38 = 0;
          while (pbVar32[lVar38 + uVar33] != 0x2b) {
            lVar38 = lVar38 + 1;
            if ((uVar5 - uVar33) - uVar40 == lVar38) goto code_r0x0015517b;
          }
          uVar35 = lVar38 + uVar33;
        }
joined_r0x00155149:
        uVar37 = uVar35 + uVar40;
        uVar40 = uVar35 + uVar40 + 1;
      } while ((uVar5 <= uVar37) || (pbVar39[uVar37] != 0x2b));
      bVar13 = false;
      uVar37 = uVar40;
      uStack_a0 = uVar40;
code_r0x0015517b:
      auVar85 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17hd77977c8d1be1ee7E
                          (pbVar39 + uVar31);
      uVar40 = auVar85._8_8_;
      uVar31 = uStack_a0;
      if (uVar40 != 0) {
        pbVar32 = (byte *)(*(code *)PTR_malloc_00380d78)(uVar40);
        if (pbVar32 == (byte *)0x0) {
          _ZN5alloc7raw_vec12handle_error17hfa86a3a4628bd209E(1,uVar40);
          pbVar32 = pbVar42;
code_r0x00156922:
          uVar40 = 2;
code_r0x0015688f:
          ppbStack_40 = &pbStack_50;
          pcStack_38 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h133ad94faf960614E;
          pbStack_50 = pbVar39;
          uStack_48 = uVar40;
          uVar34 = _ZN6anyhow9__private10format_err17hb2d1b7e2505c9acbE(&UNK_00301b1a,&ppbStack_40);
          (*(code *)PTR_free_00380de0)(pbVar32);
          puStack_60[1] = uVar34;
          *puStack_60 = 0x8000000000000000;
          if (pbStack_88 == (byte *)0x0) {
            return;
          }
          (*(code *)PTR_free_00380de0)(lStack_80);
          return;
        }
        (*(code *)PTR_memcpy_00380fd8)(pbVar32,auVar85._0_8_,uVar40);
        uVar36 = _UNK_002f8170;
        auVar85 = _UNK_002f8140;
        bVar50 = UNK_002f813f;
        bVar49 = UNK_002f813e;
        bVar48 = UNK_002f813d;
        bVar47 = UNK_002f813c;
        bVar46 = UNK_002f813b;
        bVar45 = UNK_002f813a;
        bVar44 = UNK_002f8139;
        bVar43 = UNK_002f8138;
        bVar12 = UNK_002f8137;
        bVar11 = UNK_002f8136;
        bVar10 = UNK_002f8135;
        bVar9 = UNK_002f8134;
        bVar8 = UNK_002f8133;
        bVar7 = UNK_002f8132;
        bVar6 = UNK_002f8131;
        bVar4 = UNK_002f8130;
        cVar29 = UNK_002f812f;
        cVar28 = UNK_002f812e;
        cVar27 = UNK_002f812d;
        cVar26 = UNK_002f812c;
        cVar25 = UNK_002f812b;
        cVar24 = UNK_002f812a;
        cVar23 = UNK_002f8129;
        cVar22 = UNK_002f8128;
        cVar21 = UNK_002f8127;
        cVar20 = UNK_002f8126;
        cVar19 = UNK_002f8125;
        cVar18 = UNK_002f8124;
        cVar17 = UNK_002f8123;
        cVar16 = UNK_002f8122;
        cVar15 = UNK_002f8121;
        cVar14 = UNK_002f8120;
        if (uVar40 < 8) {
          uVar33 = 0;
code_r0x00155350:
          do {
            pbVar32[uVar33] = ((byte)(pbVar32[uVar33] + 0xbf) < 0x1a) << 5 | pbVar32[uVar33];
            uVar33 = uVar33 + 1;
          } while (uVar40 != uVar33);
          pbVar39 = pbVar32;
          if (2 < uVar40) goto code_r0x00155379;
code_r0x00155700:
          switch(uVar40) {
          case 1:
            bVar4 = *pbVar39;
            uVar36 = (ulong)bVar4;
            switch(bVar4) {
            case 0x21:
              uVar36 = 0x21;
              break;
            case 0x22:
              uVar36 = 0x22;
              break;
            case 0x23:
              uVar36 = 0x23;
              break;
            case 0x24:
              uVar36 = 0x24;
              break;
            case 0x25:
              uVar36 = 0x25;
              break;
            case 0x26:
              uVar36 = 0x26;
              break;
            case 0x27:
              uVar36 = 0x27;
              break;
            case 0x28:
              uVar36 = 0x28;
              break;
            default:
              if (4 < (byte)(bVar4 - 0x29)) {
                uVar40 = 1;
                switch(bVar4) {
                case 0x2e:
                  break;
                case 0x2f:
                  uVar36 = 0x2f;
                  break;
                default:
                  goto code_r0x0015688f;
                case 0x3a:
                  uVar36 = 0x3a;
                  break;
                case 0x3b:
                  uVar36 = 0x3b;
                  break;
                case 0x3c:
                  uVar36 = 0x3c;
                  break;
                case 0x3d:
                  uVar36 = 0x3d;
                  break;
                case 0x3e:
                  uVar36 = 0x3e;
                  break;
                case 0x3f:
                  uVar36 = 0x3f;
                  break;
                case 0x40:
                  uVar36 = 0x40;
                  break;
                case 0x5b:
                  uVar36 = 0x5b;
                  break;
                case 0x5c:
                  uVar36 = 0x5c;
                  break;
                case 0x5d:
                  uVar36 = 0x5d;
                  break;
                case 0x5e:
                  uVar36 = 0x5e;
                  break;
                case 0x5f:
                  uVar36 = 0x5f;
                  break;
                case 0x60:
                  uVar36 = 0x60;
                  break;
                case 0x7b:
                  uVar36 = 0x7b;
                  break;
                case 0x7c:
                  uVar36 = 0x7c;
                  break;
                case 0x7d:
                  uVar36 = 0x7d;
                  break;
                case 0x7e:
                  uVar36 = 0x7e;
                }
              }
              break;
            case 0x30:
              break;
            case 0x31:
              uVar36 = 0x31;
              break;
            case 0x32:
              uVar36 = 0x32;
              break;
            case 0x33:
              uVar36 = 0x33;
              break;
            case 0x34:
              uVar36 = 0x34;
              break;
            case 0x35:
              uVar36 = 0x35;
              break;
            case 0x36:
              uVar36 = 0x36;
              break;
            case 0x37:
              uVar36 = 0x37;
              break;
            case 0x38:
              uVar36 = 0x38;
              break;
            case 0x39:
              uVar36 = 0x39;
              break;
            case 0x61:
              uVar36 = 0x41;
              break;
            case 0x62:
              uVar36 = 0x42;
              break;
            case 99:
              uVar36 = 0x43;
              break;
            case 100:
              uVar36 = 0x44;
              break;
            case 0x65:
              uVar36 = 0x45;
              break;
            case 0x66:
              uVar36 = 0x46;
              break;
            case 0x67:
              uVar36 = 0x47;
              break;
            case 0x68:
              uVar36 = 0x48;
              break;
            case 0x69:
              uVar36 = 0x49;
              break;
            case 0x6a:
              uVar36 = 0x4a;
              break;
            case 0x6b:
              uVar36 = 0x4b;
              break;
            case 0x6c:
              uVar36 = 0x4c;
              break;
            case 0x6d:
              uVar36 = 0x4d;
              break;
            case 0x6e:
              uVar36 = 0x4e;
              break;
            case 0x6f:
              uVar36 = 0x4f;
              break;
            case 0x70:
              uVar36 = 0x50;
              break;
            case 0x71:
              uVar36 = 0x51;
              break;
            case 0x72:
              uVar36 = 0x52;
              break;
            case 0x73:
              uVar36 = 0x53;
              break;
            case 0x74:
              uVar36 = 0x54;
              break;
            case 0x75:
              uVar36 = 0x55;
              break;
            case 0x76:
              uVar36 = 0x56;
              break;
            case 0x77:
              uVar36 = 0x57;
              break;
            case 0x78:
              uVar36 = 0x58;
              break;
            case 0x79:
              uVar36 = 0x59;
              break;
            case 0x7a:
              uVar36 = 0x5a;
            }
            break;
          case 2:
            if (*(short *)pbVar39 == 0x7075) {
              uVar36 = 0xff52;
            }
            else if (*(short *)pbVar39 == 0x3166) {
              uVar36 = 0xffbe;
            }
            else if (*(short *)pbVar39 == 0x3266) {
              uVar36 = 0xffbf;
            }
            else if (*(short *)pbVar39 == 0x3366) {
              uVar36 = 0xffc0;
            }
            else if (*(short *)pbVar39 == 0x3466) {
              uVar36 = 0xffc1;
            }
            else if (*(short *)pbVar39 == 0x3566) {
              uVar36 = 0xffc2;
            }
            else if (*(short *)pbVar39 == 0x3666) {
              uVar36 = 0xffc3;
            }
            else if (*(short *)pbVar39 == 0x3766) {
              uVar36 = 0xffc4;
            }
            else if (*(short *)pbVar39 == 0x3866) {
              uVar36 = 0xffc5;
            }
            else if (*(short *)pbVar39 == 0x3966) {
              uVar36 = 0xffc6;
            }
            else {
              if (*(short *)pbVar39 == 0x6273) goto code_r0x00156341;
              uVar36 = 0x40;
              if (*(short *)pbVar39 != 0x7461) goto code_r0x00156922;
            }
            break;
          default:
            goto code_r0x0015688f;
          case 4:
            if (*(int *)pbVar39 == 0x656d6f68) {
              uVar36 = 0xff50;
            }
            else if (*(int *)pbVar39 == 0x7466656c) {
              uVar36 = 0xff51;
            }
            else if (*(int *)pbVar39 == 0x6e776f64) {
              uVar36 = 0xff54;
            }
            else {
              if (*(int *)pbVar39 == 0x70756770) goto code_r0x001562ce;
              if (*(int *)pbVar39 == 0x6e646770) goto code_r0x0015624b;
              if (*(int *)pbVar39 == 0x305f706b) goto code_r0x001563af;
              if (*(int *)pbVar39 == 0x315f706b) {
code_r0x001563f5:
                uVar36 = 0xffb1;
              }
              else if (*(int *)pbVar39 == 0x325f706b) {
code_r0x00156427:
                uVar36 = 0xffb2;
              }
              else if (*(int *)pbVar39 == 0x335f706b) {
code_r0x00156620:
                uVar36 = 0xffb3;
              }
              else if (*(int *)pbVar39 == 0x345f706b) {
code_r0x00156648:
                uVar36 = 0xffb4;
              }
              else if (*(int *)pbVar39 == 0x355f706b) {
code_r0x0015665c:
                uVar36 = 0xffb5;
              }
              else if (*(int *)pbVar39 == 0x365f706b) {
code_r0x0015667a:
                uVar36 = 0xffb6;
              }
              else if (*(int *)pbVar39 == 0x375f706b) {
code_r0x0015668e:
                uVar36 = 0xffb7;
              }
              else if (*(int *)pbVar39 == 0x385f706b) {
code_r0x001566b6:
                uVar36 = 0xffb8;
              }
              else if (*(int *)pbVar39 == 0x395f706b) {
code_r0x001566ca:
                uVar36 = 0xffb9;
              }
              else {
                if (*(int *)pbVar39 == 0x6c727463) goto code_r0x001562ad;
                if (*(int *)pbVar39 == 0x6174656d) goto code_r0x001563eb;
                if (*(int *)pbVar39 == 0x746c616c) goto code_r0x00156698;
                if (*(int *)pbVar39 == 0x746c6172) goto code_r0x001566c0;
                if (*(int *)pbVar39 == 0x73756c70) {
                  uVar36 = 0x2b;
                }
                else {
                  uVar36 = 0x3c;
                  if (*(int *)pbVar39 != 0x7373656c) {
                    uVar40 = 4;
                    goto code_r0x0015688f;
                  }
                }
              }
            }
            break;
          case 7:
            if (*(int *)(pbVar39 + 3) == 0x7165725f && *(int *)pbVar39 == 0x5f737973) {
code_r0x00156241:
              uVar36 = 0xff15;
            }
            else if (*(int *)(pbVar39 + 3) == 0x70755f65 && *(int *)pbVar39 == 0x65676170) {
code_r0x001562ce:
              uVar36 = 0xff55;
            }
            else {
              if (*(int *)(pbVar39 + 3) == 0x7265746e && *(int *)pbVar39 == 0x6e65706b)
              goto code_r0x00156285;
              if (*(int *)(pbVar39 + 3) == 0x6c5f7466 && *(int *)pbVar39 == 0x66696873) {
code_r0x00156305:
                uVar36 = 0xffe1;
              }
              else if (*(int *)(pbVar39 + 3) == 0x725f7466 && *(int *)pbVar39 == 0x66696873) {
code_r0x00156373:
                uVar36 = 0xffe2;
              }
              else if (*(int *)(pbVar39 + 3) == 0x6c5f7265 && *(int *)pbVar39 == 0x65707573) {
code_r0x001563e1:
                uVar36 = 0xffeb;
              }
              else if (*(int *)(pbVar39 + 3) == 0x725f7265 && *(int *)pbVar39 == 0x65707573) {
code_r0x0015641d:
                uVar36 = 0xffec;
              }
              else if (*(int *)(pbVar39 + 3) == 0x746e6563 && *(int *)pbVar39 == 0x63726570) {
                uVar36 = 0x25;
              }
              else {
                uVar36 = 0x3e;
                if (*(int *)(pbVar39 + 3) != 0x72657461 || *(int *)pbVar39 != 0x61657267) {
                  uVar40 = 7;
                  goto code_r0x0015688f;
                }
              }
            }
            break;
          case 8:
            if (*(long *)pbVar39 == 0x6b636f6c5f6d756e) {
code_r0x0015627b:
              uVar36 = 0xff7f;
            }
            else if (*(long *)pbVar39 == 0x7265746e655f706b) {
code_r0x00156285:
              uVar36 = 0xff8d;
            }
            else if (*(long *)pbVar39 == 0x7261626563617073) {
code_r0x00156341:
              uVar36 = 0x20;
            }
            else if (*(long *)pbVar39 == 0x6c626465746f7571) {
              uVar36 = 0x22;
            }
            else if (*(long *)pbVar39 == 0x6b73697265747361) {
              uVar36 = 0x2a;
            }
            else {
              uVar36 = 0x3f;
              if (*(long *)pbVar39 != 0x6e6f697473657571) {
                uVar40 = 8;
                goto code_r0x0015688f;
              }
            }
            break;
          case 10:
            if (*(short *)(pbVar39 + 8) == 0x6e67 && *(long *)pbVar39 == 0x69737265626d756e) {
              uVar36 = 0x23;
            }
            else if (*(short *)(pbVar39 + 8) == 0x6568 && *(long *)pbVar39 == 0x706f7274736f7061) {
              uVar36 = 0x27;
            }
            else if (*(short *)(pbVar39 + 8) == 0x7468 && *(long *)pbVar39 == 0x6769726e65726170) {
              uVar36 = 0x29;
            }
            else if (*(short *)(pbVar39 + 8) == 0x6572 && *(long *)pbVar39 == 0x6f63737265646e75) {
              uVar36 = 0x5f;
            }
            else if (*(short *)(pbVar39 + 8) == 0x7468 && *(long *)pbVar39 == 0x6769726563617262) {
              uVar36 = 0x7d;
            }
            else {
              uVar36 = 0x7e;
              if (*(short *)(pbVar39 + 8) != 0x6564 || *(long *)pbVar39 != 0x6c69746969637361) {
                uVar40 = 10;
                goto code_r0x0015688f;
              }
            }
            break;
          case 0xb:
            if (*(long *)(pbVar39 + 3) == 0x6b636f6c5f6c6c6f &&
                *(long *)pbVar39 == 0x6c5f6c6c6f726373) {
code_r0x00156237:
              uVar36 = 0xff14;
            }
            else if (*(long *)(pbVar39 + 3) == 0x7466656c74656b63 &&
                     *(long *)pbVar39 == 0x6c74656b63617262) {
              uVar36 = 0x5b;
            }
            else {
              uVar36 = 0x5e;
              if (*(long *)(pbVar39 + 3) != 0x6d75637269636969 ||
                  *(long *)pbVar39 != 0x7269636969637361) {
                uVar40 = 0xb;
                goto code_r0x0015688f;
              }
            }
            break;
          case 0xc:
            uVar36 = 0x5d;
            if (*(int *)(pbVar39 + 8) != 0x74686769 || *(long *)pbVar39 != 0x7274656b63617262) {
              uVar40 = 0xc;
              goto code_r0x0015688f;
            }
          }
        }
        else {
          if (uVar40 < 0x20) {
            uVar35 = 0;
code_r0x001552fc:
            uVar30 = _UNK_002f8160;
            uVar34 = _UNK_002f8150;
            uVar33 = uVar40 & 0xfffffffffffffff8;
            do {
              uVar1 = *(ulong *)(pbVar32 + uVar35);
              bVar43 = (char)uVar1 + (char)uVar34;
              bVar44 = (char)(uVar1 >> 8) + (char)((ulong)uVar34 >> 8);
              bVar45 = (char)(uVar1 >> 0x10) + (char)((ulong)uVar34 >> 0x10);
              bVar46 = (char)(uVar1 >> 0x18) + (char)((ulong)uVar34 >> 0x18);
              bVar47 = (char)(uVar1 >> 0x20) + (char)((ulong)uVar34 >> 0x20);
              bVar48 = (char)(uVar1 >> 0x28) + (char)((ulong)uVar34 >> 0x28);
              bVar49 = (char)(uVar1 >> 0x30) + (char)((ulong)uVar34 >> 0x30);
              bVar50 = (char)(uVar1 >> 0x38) + (char)((ulong)uVar34 >> 0x38);
              bVar4 = (byte)uVar30;
              bVar6 = (byte)((ulong)uVar30 >> 8);
              bVar7 = (byte)((ulong)uVar30 >> 0x10);
              bVar8 = (byte)((ulong)uVar30 >> 0x18);
              bVar9 = (byte)((ulong)uVar30 >> 0x20);
              bVar10 = (byte)((ulong)uVar30 >> 0x28);
              bVar11 = (byte)((ulong)uVar30 >> 0x30);
              bVar12 = (byte)((ulong)uVar30 >> 0x38);
              *(ulong *)(pbVar32 + uVar35) =
                   ~CONCAT17(-((byte)((bVar50 < bVar12) * bVar12 | (bVar50 >= bVar12) * bVar50) ==
                              bVar50),CONCAT16(-((byte)((bVar49 < bVar11) * bVar11 |
                                                       (bVar49 >= bVar11) * bVar49) == bVar49),
                                               CONCAT15(-((byte)((bVar48 < bVar10) * bVar10 |
                                                                (bVar48 >= bVar10) * bVar48) ==
                                                         bVar48),CONCAT14(-((byte)((bVar47 < bVar9)
                                                                                   * bVar9 |
                                                                                  (bVar47 >= bVar9)
                                                                                  * bVar47) ==
                                                                           bVar47),CONCAT13(-((byte)
                                                  ((bVar46 < bVar8) * bVar8 |
                                                  (bVar46 >= bVar8) * bVar46) == bVar46),
                                                  CONCAT12(-((byte)((bVar45 < bVar7) * bVar7 |
                                                                   (bVar45 >= bVar7) * bVar45) ==
                                                            bVar45),CONCAT11(-((byte)((bVar44 < 
                                                  bVar6) * bVar6 | (bVar44 >= bVar6) * bVar44) ==
                                                  bVar44),-((byte)((bVar43 < bVar4) * bVar4 |
                                                                  (bVar43 >= bVar4) * bVar43) ==
                                                           bVar43)))))))) & uVar36 | uVar1;
              uVar35 = uVar35 + 8;
            } while (uVar33 != uVar35);
            if (uVar40 != uVar33) goto code_r0x00155350;
          }
          else {
            uVar33 = uVar40 & 0xffffffffffffffe0;
            uVar35 = 0;
            do {
              auVar2 = *(undefined1 (*) [16])(pbVar32 + uVar35);
              auVar3 = *(undefined1 (*) [16])(pbVar32 + uVar35 + 0x10);
              bVar51 = auVar2[0] + cVar14;
              bVar53 = auVar2[1] + cVar15;
              bVar54 = auVar2[2] + cVar16;
              bVar55 = auVar2[3] + cVar17;
              bVar56 = auVar2[4] + cVar18;
              bVar57 = auVar2[5] + cVar19;
              bVar58 = auVar2[6] + cVar20;
              bVar59 = auVar2[7] + cVar21;
              bVar60 = auVar2[8] + cVar22;
              bVar61 = auVar2[9] + cVar23;
              bVar62 = auVar2[10] + cVar24;
              bVar63 = auVar2[0xb] + cVar25;
              bVar64 = auVar2[0xc] + cVar26;
              bVar65 = auVar2[0xd] + cVar27;
              bVar66 = auVar2[0xe] + cVar28;
              bVar67 = auVar2[0xf] + cVar29;
              bVar68 = auVar3[0] + cVar14;
              bVar69 = auVar3[1] + cVar15;
              bVar70 = auVar3[2] + cVar16;
              bVar71 = auVar3[3] + cVar17;
              bVar72 = auVar3[4] + cVar18;
              bVar73 = auVar3[5] + cVar19;
              bVar74 = auVar3[6] + cVar20;
              bVar75 = auVar3[7] + cVar21;
              bVar76 = auVar3[8] + cVar22;
              bVar77 = auVar3[9] + cVar23;
              bVar78 = auVar3[10] + cVar24;
              bVar79 = auVar3[0xb] + cVar25;
              bVar80 = auVar3[0xc] + cVar26;
              bVar81 = auVar3[0xd] + cVar27;
              bVar82 = auVar3[0xe] + cVar28;
              bVar83 = auVar3[0xf] + cVar29;
              auVar84[0] = -((byte)((bVar4 < bVar51) * bVar4 | (bVar4 >= bVar51) * bVar51) == bVar51
                            );
              auVar84[1] = -((byte)((bVar6 < bVar53) * bVar6 | (bVar6 >= bVar53) * bVar53) == bVar53
                            );
              auVar84[2] = -((byte)((bVar7 < bVar54) * bVar7 | (bVar7 >= bVar54) * bVar54) == bVar54
                            );
              auVar84[3] = -((byte)((bVar8 < bVar55) * bVar8 | (bVar8 >= bVar55) * bVar55) == bVar55
                            );
              auVar84[4] = -((byte)((bVar9 < bVar56) * bVar9 | (bVar9 >= bVar56) * bVar56) == bVar56
                            );
              auVar84[5] = -((byte)((bVar10 < bVar57) * bVar10 | (bVar10 >= bVar57) * bVar57) ==
                            bVar57);
              auVar84[6] = -((byte)((bVar11 < bVar58) * bVar11 | (bVar11 >= bVar58) * bVar58) ==
                            bVar58);
              auVar84[7] = -((byte)((bVar12 < bVar59) * bVar12 | (bVar12 >= bVar59) * bVar59) ==
                            bVar59);
              auVar84[8] = -((byte)((bVar43 < bVar60) * bVar43 | (bVar43 >= bVar60) * bVar60) ==
                            bVar60);
              auVar84[9] = -((byte)((bVar44 < bVar61) * bVar44 | (bVar44 >= bVar61) * bVar61) ==
                            bVar61);
              auVar84[10] = -((byte)((bVar45 < bVar62) * bVar45 | (bVar45 >= bVar62) * bVar62) ==
                             bVar62);
              auVar84[0xb] = -((byte)((bVar46 < bVar63) * bVar46 | (bVar46 >= bVar63) * bVar63) ==
                              bVar63);
              auVar84[0xc] = -((byte)((bVar47 < bVar64) * bVar47 | (bVar47 >= bVar64) * bVar64) ==
                              bVar64);
              auVar84[0xd] = -((byte)((bVar48 < bVar65) * bVar48 | (bVar48 >= bVar65) * bVar65) ==
                              bVar65);
              auVar84[0xe] = -((byte)((bVar49 < bVar66) * bVar49 | (bVar49 >= bVar66) * bVar66) ==
                              bVar66);
              auVar84[0xf] = -((byte)((bVar50 < bVar67) * bVar50 | (bVar50 >= bVar67) * bVar67) ==
                              bVar67);
              auVar52[0] = -((byte)((bVar4 < bVar68) * bVar4 | (bVar4 >= bVar68) * bVar68) == bVar68
                            );
              auVar52[1] = -((byte)((bVar6 < bVar69) * bVar6 | (bVar6 >= bVar69) * bVar69) == bVar69
                            );
              auVar52[2] = -((byte)((bVar7 < bVar70) * bVar7 | (bVar7 >= bVar70) * bVar70) == bVar70
                            );
              auVar52[3] = -((byte)((bVar8 < bVar71) * bVar8 | (bVar8 >= bVar71) * bVar71) == bVar71
                            );
              auVar52[4] = -((byte)((bVar9 < bVar72) * bVar9 | (bVar9 >= bVar72) * bVar72) == bVar72
                            );
              auVar52[5] = -((byte)((bVar10 < bVar73) * bVar10 | (bVar10 >= bVar73) * bVar73) ==
                            bVar73);
              auVar52[6] = -((byte)((bVar11 < bVar74) * bVar11 | (bVar11 >= bVar74) * bVar74) ==
                            bVar74);
              auVar52[7] = -((byte)((bVar12 < bVar75) * bVar12 | (bVar12 >= bVar75) * bVar75) ==
                            bVar75);
              auVar52[8] = -((byte)((bVar43 < bVar76) * bVar43 | (bVar43 >= bVar76) * bVar76) ==
                            bVar76);
              auVar52[9] = -((byte)((bVar44 < bVar77) * bVar44 | (bVar44 >= bVar77) * bVar77) ==
                            bVar77);
              auVar52[10] = -((byte)((bVar45 < bVar78) * bVar45 | (bVar45 >= bVar78) * bVar78) ==
                             bVar78);
              auVar52[0xb] = -((byte)((bVar46 < bVar79) * bVar46 | (bVar46 >= bVar79) * bVar79) ==
                              bVar79);
              auVar52[0xc] = -((byte)((bVar47 < bVar80) * bVar47 | (bVar47 >= bVar80) * bVar80) ==
                              bVar80);
              auVar52[0xd] = -((byte)((bVar48 < bVar81) * bVar48 | (bVar48 >= bVar81) * bVar81) ==
                              bVar81);
              auVar52[0xe] = -((byte)((bVar49 < bVar82) * bVar49 | (bVar49 >= bVar82) * bVar82) ==
                              bVar82);
              auVar52[0xf] = -((byte)((bVar50 < bVar83) * bVar50 | (bVar50 >= bVar83) * bVar83) ==
                              bVar83);
              *(undefined1 (*) [16])(pbVar32 + uVar35) = auVar84 & auVar85 | auVar2;
              *(undefined1 (*) [16])(pbVar32 + uVar35 + 0x10) = auVar52 & auVar85 | auVar3;
              uVar35 = uVar35 + 0x20;
            } while (uVar33 != uVar35);
            if (uVar40 != uVar33) {
              uVar35 = uVar33;
              if ((uVar40 & 0x18) == 0) goto code_r0x00155350;
              goto code_r0x001552fc;
            }
          }
code_r0x00155379:
          if (pbVar32[2] == 0x5f && *(short *)pbVar32 == 0x6b78) {
            uVar40 = uVar40 - 3;
          }
          pbVar39 = pbVar32 + (ulong)(pbVar32[2] == 0x5f && *(short *)pbVar32 == 0x6b78) * 3;
          switch(uVar40) {
          case 3:
            if (pbVar39[2] == 0x70 && *(short *)pbVar39 == 0x7362) {
code_r0x00155d00:
              uVar36 = 0xff08;
              break;
            }
            if (pbVar39[2] == 0x62 && *(short *)pbVar39 == 0x6174) {
              uVar36 = 0xff09;
              break;
            }
            if (pbVar39[2] == 99 && *(short *)pbVar39 == 0x7365) goto code_r0x0015622d;
            if (pbVar39[2] == 0x6c && *(short *)pbVar39 == 0x6564) goto code_r0x00156255;
            if (pbVar39[2] == 100 && *(short *)pbVar39 == 0x6e65) {
              uVar36 = 0xff57;
              break;
            }
            if (pbVar39[2] == 0x73 && *(short *)pbVar39 == 0x6e69) goto code_r0x001562fb;
            if (pbVar39[2] != 0x30 || *(short *)pbVar39 != 0x706b) {
              if (pbVar39[2] != 0x31 || *(short *)pbVar39 != 0x706b) {
                if (pbVar39[2] != 0x32 || *(short *)pbVar39 != 0x706b) {
                  if (pbVar39[2] != 0x33 || *(short *)pbVar39 != 0x706b) {
                    if (pbVar39[2] != 0x34 || *(short *)pbVar39 != 0x706b) {
                      if (pbVar39[2] != 0x35 || *(short *)pbVar39 != 0x706b) {
                        if (pbVar39[2] != 0x36 || *(short *)pbVar39 != 0x706b) {
                          if (pbVar39[2] != 0x37 || *(short *)pbVar39 != 0x706b) {
                            if (pbVar39[2] != 0x38 || *(short *)pbVar39 != 0x706b) {
                              if (pbVar39[2] != 0x39 || *(short *)pbVar39 != 0x706b) {
                                if (pbVar39[2] == 0x30 && *(short *)pbVar39 == 0x3166) {
                                  uVar36 = 0xffc7;
                                }
                                else if (pbVar39[2] == 0x31 && *(short *)pbVar39 == 0x3166) {
                                  uVar36 = 0xffc8;
                                }
                                else if (pbVar39[2] == 0x32 && *(short *)pbVar39 == 0x3166) {
                                  uVar36 = 0xffc9;
                                }
                                else if (pbVar39[2] == 0x33 && *(short *)pbVar39 == 0x3166) {
                                  uVar36 = 0xffca;
                                }
                                else if (pbVar39[2] == 0x34 && *(short *)pbVar39 == 0x3166) {
                                  uVar36 = 0xffcb;
                                }
                                else if (pbVar39[2] == 0x35 && *(short *)pbVar39 == 0x3166) {
                                  uVar36 = 0xffcc;
                                }
                                else if (pbVar39[2] == 0x36 && *(short *)pbVar39 == 0x3166) {
                                  uVar36 = 0xffcd;
                                }
                                else if (pbVar39[2] == 0x37 && *(short *)pbVar39 == 0x3166) {
                                  uVar36 = 0xffce;
                                }
                                else if (pbVar39[2] == 0x38 && *(short *)pbVar39 == 0x3166) {
                                  uVar36 = 0xffcf;
                                }
                                else if (pbVar39[2] == 0x39 && *(short *)pbVar39 == 0x3166) {
                                  uVar36 = 0xffd0;
                                }
                                else if (pbVar39[2] == 0x30 && *(short *)pbVar39 == 0x3266) {
                                  uVar36 = 0xffd1;
                                }
                                else {
                                  if (pbVar39[2] == 0x74 && *(short *)pbVar39 == 0x6c61)
                                  goto code_r0x00156698;
                                  uVar36 = 0x7c;
                                  if (pbVar39[2] != 0x72 || *(short *)pbVar39 != 0x6162) {
                                    uVar40 = 3;
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
            uVar36 = 0xffb0;
            break;
          default:
            goto code_r0x00155700;
          case 5:
            if (pbVar39[4] == 0x72 && *(int *)pbVar39 == 0x65746e65) {
code_r0x00155cf6:
              uVar36 = 0xff0d;
              break;
            }
            if (pbVar39[4] == 0x65 && *(int *)pbVar39 == 0x73756170) {
              uVar36 = 0xff13;
              break;
            }
            if (pbVar39[4] == 0x6b && *(int *)pbVar39 == 0x6c726373) goto code_r0x00156237;
            if (pbVar39[4] == 0x71 && *(int *)pbVar39 == 0x72737973) goto code_r0x00156241;
            if (pbVar39[4] == 0x74 && *(int *)pbVar39 == 0x68676972) {
              uVar36 = 0xff53;
              break;
            }
            if (pbVar39[4] == 0x6b && *(int *)pbVar39 == 0x6c6d756e) goto code_r0x0015627b;
            if (pbVar39[4] == 0x74 && *(int *)pbVar39 == 0x66696873) goto code_r0x00156305;
            if (pbVar39[4] == 0x6c && *(int *)pbVar39 == 0x7274636c) goto code_r0x001562ad;
            if (pbVar39[4] == 0x6c && *(int *)pbVar39 == 0x72746372) goto code_r0x00156337;
            if (pbVar39[4] == 0x6b && *(int *)pbVar39 == 0x6c706163) goto code_r0x00156369;
            if (pbVar39[4] == 0x61 && *(int *)pbVar39 == 0x74656d6c) goto code_r0x001563eb;
            if (pbVar39[4] == 0x61 && *(int *)pbVar39 == 0x74656d72) goto code_r0x00156413;
            if (pbVar39[4] == 0x6c && *(int *)pbVar39 == 0x5f746c61) {
code_r0x00156698:
              uVar36 = 0xffe9;
            }
            else {
              if (pbVar39[4] != 0x72 || *(int *)pbVar39 != 0x5f746c61) {
                if (pbVar39[4] == 0x72 && *(int *)pbVar39 == 0x65707573) goto code_r0x001563e1;
                if (pbVar39[4] != 0x65 || *(int *)pbVar39 != 0x63617073) {
                  if (pbVar39[4] == 0x61 && *(int *)pbVar39 == 0x6d6d6f63) {
                    uVar36 = 0x2c;
                  }
                  else if (pbVar39[4] == 0x73 && *(int *)pbVar39 == 0x756e696d) {
                    uVar36 = 0x2d;
                  }
                  else {
                    if (pbVar39[4] == 0x68 && *(int *)pbVar39 == 0x73616c73) goto code_r0x001566ac;
                    if (pbVar39[4] == 0x6e && *(int *)pbVar39 == 0x6f6c6f63) {
                      uVar36 = 0x3a;
                    }
                    else if (pbVar39[4] == 0x6c && *(int *)pbVar39 == 0x61757165) {
                      uVar36 = 0x3d;
                    }
                    else {
                      uVar36 = 0x60;
                      if (pbVar39[4] != 0x65 || *(int *)pbVar39 != 0x76617267) {
                        uVar40 = 5;
                        goto code_r0x0015688f;
                      }
                    }
                  }
                  break;
                }
                goto code_r0x00156341;
              }
code_r0x001566c0:
              uVar36 = 0xffea;
            }
            break;
          case 6:
            if (*(short *)(pbVar39 + 4) == 0x6e72 && *(int *)pbVar39 == 0x75746572)
            goto code_r0x00155cf6;
            if (*(short *)(pbVar39 + 4) == 0x6570 && *(int *)pbVar39 == 0x61637365) {
code_r0x0015622d:
              uVar36 = 0xff1b;
            }
            else {
              if (*(short *)(pbVar39 + 4) == 0x6574 && *(int *)pbVar39 == 0x656c6564) {
code_r0x00156255:
                uVar36 = 0xffff;
                break;
              }
              if (*(short *)(pbVar39 + 4) == 0x7472 && *(int *)pbVar39 == 0x65736e69) {
code_r0x001562fb:
                uVar36 = 0xff63;
                break;
              }
              if (*(short *)(pbVar39 + 4) == 0x7466 && *(int *)pbVar39 == 0x6968736c)
              goto code_r0x00156305;
              if (*(short *)(pbVar39 + 4) == 0x7466 && *(int *)pbVar39 == 0x69687372)
              goto code_r0x00156373;
              if (*(short *)(pbVar39 + 4) != 0x6c5f || *(int *)pbVar39 != 0x6174656d) {
                if (*(short *)(pbVar39 + 4) == 0x725f && *(int *)pbVar39 == 0x6174656d) {
code_r0x00156413:
                  uVar36 = 0xffe8;
                  break;
                }
                if (*(short *)(pbVar39 + 4) != 0x7265 || *(int *)pbVar39 != 0x7075736c) {
                  if (*(short *)(pbVar39 + 4) != 0x7265 || *(int *)pbVar39 != 0x70757372) {
                    if (*(short *)(pbVar39 + 4) == 0x6d61 && *(int *)pbVar39 == 0x6c637865) {
                      uVar36 = 0x21;
                    }
                    else if (*(short *)(pbVar39 + 4) == 0x7261 && *(int *)pbVar39 == 0x6c6c6f64) {
                      uVar36 = 0x24;
                    }
                    else if (*(short *)(pbVar39 + 4) == 0x646f && *(int *)pbVar39 == 0x69726570) {
                      uVar36 = 0x2e;
                    }
                    else if (*(short *)(pbVar39 + 4) == 0x6873 && *(int *)pbVar39 == 0x616c7366) {
code_r0x001566ac:
                      uVar36 = 0x2f;
                    }
                    else {
                      uVar36 = 0x5c;
                      if (*(short *)(pbVar39 + 4) != 0x6873 || *(int *)pbVar39 != 0x616c7362) {
                        uVar40 = 6;
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
              uVar36 = 0xffe7;
            }
            break;
          case 9:
            if (pbVar39[8] == 0x65 && *(long *)pbVar39 == 0x636170736b636162) goto code_r0x00155d00;
            if (pbVar39[8] == 0x6e && *(long *)pbVar39 == 0x776f645f65676170) {
code_r0x0015624b:
              uVar36 = 0xff56;
            }
            else {
              if (pbVar39[8] != 0x6c || *(long *)pbVar39 != 0x5f6c6f72746e6f63) {
                if (pbVar39[8] == 0x72 && *(long *)pbVar39 == 0x5f6c6f72746e6f63) {
code_r0x00156337:
                  uVar36 = 0xffe4;
                }
                else if (pbVar39[8] == 0x6b && *(long *)pbVar39 == 0x636f6c5f73706163) {
code_r0x00156369:
                  uVar36 = 0xffe5;
                }
                else if (pbVar39[8] == 100 && *(long *)pbVar39 == 0x6e61737265706d61) {
                  uVar36 = 0x26;
                }
                else if (pbVar39[8] == 0x74 && *(long *)pbVar39 == 0x66656c6e65726170) {
                  uVar36 = 0x28;
                }
                else if (pbVar39[8] == 0x6e && *(long *)pbVar39 == 0x6f6c6f63696d6573) {
                  uVar36 = 0x3b;
                }
                else if (pbVar39[8] == 0x68 && *(long *)pbVar39 == 0x73616c736b636162) {
                  uVar36 = 0x5c;
                }
                else {
                  uVar36 = 0x7b;
                  if (pbVar39[8] != 0x74 || *(long *)pbVar39 != 0x66656c6563617262) {
                    uVar40 = 9;
                    goto code_r0x0015688f;
                  }
                }
                break;
              }
code_r0x001562ad:
              uVar36 = 0xffe3;
            }
          }
        }
        (*(code *)PTR_free_00380de0)(pbVar32);
        pbVar42 = pbStack_78;
        if (pbStack_78 == pbStack_88) {
          _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hb5e8d0265e84c2adE(&pbStack_88);
        }
        lStack_70 = lStack_80;
        *(ulong *)(lStack_80 + (long)pbVar42 * 8) = uVar36;
        pbVar42 = pbVar42 + 1;
        bVar41 = false;
        pbVar39 = pbStack_68;
        pbStack_78 = pbVar42;
        if (bVar13) break;
        goto code_r0x00154fd0;
      }
      if (bVar41) {
        if (pbVar42 == pbStack_88) {
          _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hb5e8d0265e84c2adE(&pbStack_88);
          lStack_70 = lStack_80;
        }
        *(undefined8 *)(lStack_70 + (long)pbVar42 * 8) = 0x2b;
        pbVar42 = pbVar42 + 1;
        bVar41 = false;
        pbStack_78 = pbVar42;
      }
      else {
        bVar41 = true;
      }
    } while (!bVar13);
    puStack_60[2] = pbStack_78;
    *puStack_60 = pbStack_88;
    puStack_60[1] = lStack_80;
  }
  return;
}


