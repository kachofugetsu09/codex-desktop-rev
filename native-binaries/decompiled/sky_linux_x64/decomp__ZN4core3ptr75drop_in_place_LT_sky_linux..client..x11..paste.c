// 00143220  undefined _ZN4core3ptr75drop_in_place$LT$sky_linux..client..x11..paste_text..TemporaryClipboard$GT$17hc94f722fee0fd508E(void)

void _ZN4core3ptr75drop_in_place_LT_sky_linux__client__x11__paste_text__TemporaryClipboard_GT_17hc94f722fee0fd508E
               (undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte bVar16;
  char cVar17;
  int iVar18;
  undefined *puVar19;
  undefined4 *puVar20;
  undefined8 *puVar21;
  ulong uVar22;
  uint *puVar23;
  undefined1 uVar24;
  undefined8 *puVar25;
  undefined1 uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined1 *puVar29;
  bool bVar30;
  undefined1 auVar31 [12];
  undefined1 *puStack_118;
  undefined4 *puStack_110;
  ulong uStack_108;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_c4;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  lVar4 = param_1[0x44];
  uVar2 = *(uint *)(lVar4 + 0x208);
  uVar3 = *(uint *)(param_1 + 0x43);
  uVar5 = param_1[0x48];
  uVar28 = param_1[0x49];
  if (uVar28 == 0) {
code_r0x00143281:
    puVar19 = (undefined *)0x1;
  }
  else {
    puVar19 = (undefined *)(*(code *)PTR_malloc_00380d78)(uVar28);
    if (puVar19 == (undefined *)0x0) {
      _ZN5alloc7raw_vec12handle_error17hfa86a3a4628bd209E(1,uVar28);
      goto code_r0x00143281;
    }
  }
  (*(code *)PTR_memcpy_00380fd8)(puVar19,uVar5,uVar28);
  auVar31 = _ZN3std4sync4mpmc15Sender_LT_T_GT_4send17hc9c9efae6ceecdaeE(*param_1,param_1[1],uVar2);
  puVar25 = param_1;
  if ((auVar31._0_8_ & 1) != 0) {
    uStack_b8 = (ulong)auVar31._8_4_ << 0x20;
    goto joined_r0x00143890;
  }
  puVar29 = (undefined1 *)param_1[0x45];
  LOCK();
  bVar30 = *(int *)(puVar29 + 0x10) == 0;
  if (bVar30) {
    *(int *)(puVar29 + 0x10) = 0x3fffffff;
  }
  UNLOCK();
  lStack_c0 = lVar4;
  if (bVar30) {
    if ((_ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h3763f108ba586ca5E & 0x7fffffffffffffff
        ) == 0) goto code_r0x001432eb;
code_r0x001437fb:
    bVar16 = _ZN3std9panicking11panic_count17is_zero_slow_path17h658062603ec64673E();
    if (puVar29[0x18] == '\0') {
      bVar16 = bVar16 ^ 1;
      goto code_r0x00143303;
    }
    if (bVar16 != 0) goto code_r0x00143858;
  }
  else {
    _ZN3std3sys4sync6rwlock5futex6RwLock15write_contended17h75a6c4ccd6a027abE(puVar29 + 0x10);
    if ((_ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h3763f108ba586ca5E & 0x7fffffffffffffff
        ) != 0) goto code_r0x001437fb;
code_r0x001432eb:
    if (puVar29[0x18] == '\0') {
      bVar16 = 0;
code_r0x00143303:
      puStack_118 = puVar29 + 0x18;
      uStack_f8 = (uint)uVar28;
      uStack_f4 = (uint)(uVar28 >> 0x20);
      uStack_f0 = (uint)puVar19;
      uStack_ec = (uint)((ulong)puVar19 >> 0x20);
      uStack_100 = uVar3;
      uStack_e8 = uStack_f8;
      uStack_e4 = uStack_f4;
      _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h596193693d878695E
                (&uStack_78,puVar29 + 0x20,uVar2,&uStack_100);
      if ((uStack_70 & 0x7fffffffffffffff) != 0) {
        (*(code *)PTR_free_00380de0)(uStack_68);
      }
      if ((bVar16 == 0) &&
         ((_ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h3763f108ba586ca5E &
          0x7fffffffffffffff) != 0)) goto code_r0x0014383a;
code_r0x0014336c:
      LOCK();
      piVar1 = (int *)(puVar29 + 0x10);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -0x3fffffff;
      UNLOCK();
      if (0x3fffffff < iVar18 + 0xc0000001U) {
        _ZN3std3sys4sync6rwlock5futex6RwLock22wake_writer_or_readers17h5fb62a5357048a41E
                  (puVar29 + 0x10);
      }
      lVar4 = lStack_c0;
      uVar3 = *(uint *)(lStack_c0 + 0x200);
      puVar29 = (undefined1 *)(ulong)uVar3;
      puVar20 = (undefined4 *)(*(code *)PTR_malloc_00380d78)(0x10);
      if (puVar20 == (undefined4 *)0x0) {
        _ZN5alloc5alloc18handle_alloc_error17h9898627cde6f100aE(1,0x10);
        param_1 = puVar25;
      }
      else {
        puVar29 = (undefined1 *)(lVar4 + 0x10);
        *puVar20 = 0x40016;
        *(char *)(puVar20 + 1) = (char)uVar3;
        *(char *)((long)puVar20 + 5) = (char)(uVar3 >> 8);
        *(char *)((long)puVar20 + 6) = (char)(uVar3 >> 0x10);
        *(char *)((long)puVar20 + 7) = (char)(uVar3 >> 0x18);
        *(char *)(puVar20 + 2) = (char)uVar2;
        uVar26 = (undefined1)(uVar2 >> 8);
        *(undefined1 *)((long)puVar20 + 9) = uVar26;
        uVar24 = (undefined1)(uVar2 >> 0x10);
        *(undefined1 *)((long)puVar20 + 10) = uVar24;
        *(char *)((long)puVar20 + 0xb) = (char)(uVar2 >> 0x18);
        puVar20[3] = 0;
        uStack_78 = 0;
        uStack_70 = 4;
        uStack_68 = 0;
        uStack_38 = 0x10;
        puStack_40 = puVar20;
        _ZN5x11rb15rust_connection23RustConnection_LT_S_GT_12send_request17h9c6ef1db49c745f6E
                  (&puStack_110,puVar29,&puStack_40,1,&uStack_78,0);
        uVar28 = uStack_108;
        uVar22 = (ulong)puStack_110 & 0xff;
        if (uVar22 != 7) {
          uVar27 = ((ulong)puStack_110 >> 8 & 0xffffffff) << 8 |
                   (ulong)puStack_110 & 0xffffff0000000000;
          goto code_r0x001436fc;
        }
        uStack_c4 = uVar2 >> 0x18;
        (*(code *)PTR_free_00380de0)(puVar20);
        _ZN5x11rb10connection17RequestConnection15check_for_error17he42cb70e70c2d95dE
                  (&uStack_100,puVar29,uVar28);
        uVar15 = uStack_e0;
        uVar14 = uStack_e4;
        uVar13 = uStack_e8;
        uVar12 = uStack_ec;
        uVar11 = uStack_f0;
        uVar10 = uStack_f4;
        uVar9 = uStack_f8;
        uVar3 = uStack_fc;
        if (CONCAT44(uStack_fc,uStack_100) != -0x7ffffffffffffffe) {
          uStack_78 = CONCAT44(uStack_fc,uStack_100);
          uStack_70 = CONCAT44(uStack_f4,uStack_f8);
          uStack_68 = CONCAT44(uStack_ec,uStack_f0);
          uStack_60 = CONCAT44(uStack_e4,uStack_e8);
          uStack_ec = uStack_f0;
          uStack_e8 = uVar12;
          uStack_e4 = uVar13;
          uStack_e0 = uVar14;
          uStack_fc = uStack_100;
          uStack_f8 = uVar3;
          uStack_f4 = uVar9;
          uStack_f0 = uVar10;
          uStack_94 = CONCAT44(uVar15,uVar14);
          uStack_9c = CONCAT44(uVar13,uVar12);
          uStack_a4 = uVar10;
          uStack_a0 = uVar11;
          uStack_b8 = CONCAT44(uStack_100,4);
          uStack_b0 = CONCAT44(uVar3,uStack_100);
          uStack_a8 = uVar9;
          goto code_r0x0014389b;
        }
        puVar20 = (undefined4 *)(*(code *)PTR_malloc_00380d78)(8);
        param_1 = (undefined8 *)(ulong)(uVar2 >> 0x10);
        puStack_118 = puVar29;
        if (puVar20 != (undefined4 *)0x0) goto code_r0x001434bb;
      }
      _ZN5alloc5alloc18handle_alloc_error17h9898627cde6f100aE(1,8);
code_r0x0014383a:
      cVar17 = _ZN3std9panicking11panic_count17is_zero_slow_path17h658062603ec64673E();
      puVar25 = param_1;
      if (cVar17 == '\0') {
        *puStack_118 = 1;
      }
      goto code_r0x0014336c;
    }
code_r0x00143858:
    if (((_ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h3763f108ba586ca5E &
         0x7fffffffffffffff) != 0) &&
       (cVar17 = _ZN3std9panicking11panic_count17is_zero_slow_path17h658062603ec64673E(),
       cVar17 == '\0')) {
      puVar29[0x18] = 1;
    }
  }
  LOCK();
  piVar1 = (int *)(puVar29 + 0x10);
  iVar18 = *piVar1;
  *piVar1 = *piVar1 + -0x3fffffff;
  UNLOCK();
  if (0x3fffffff < iVar18 + 0xc0000001U) goto code_r0x0014397a;
  uStack_b8 = CONCAT44(uStack_b8._4_4_,5);
joined_r0x00143890:
  if (uVar28 != 0) {
    (*(code *)PTR_free_00380de0)(puVar19);
  }
code_r0x0014389b:
  puVar21 = (undefined8 *)
            _ZN52__LT_E_u20_as_u20_anyhow__context__ext__StdError_GT_11ext_context17h9e4c10bf4eb6ae75E
                      (&uStack_b8,&UNK_00309dc8,0x1b);
  (**(code **)*puVar21)(puVar21);
code_r0x001438b9:
  puVar29 = PTR_nanosleep_00380f40;
  puVar19 = PTR___errno_location_00380f10;
  uVar22 = 50000000;
  uVar28 = 0;
  do {
    uStack_b8 = 0x7fffffffffffffff;
    if (uVar28 < 0x7fffffffffffffff) {
      uStack_b8 = uVar28;
    }
    uVar28 = uVar28 - uStack_b8;
    uStack_b0 = uVar22;
    iVar18 = (*(code *)puVar29)(&uStack_b8,&uStack_b8);
    if (iVar18 == -1) {
      puVar23 = (uint *)(*(code *)puVar19)();
      uStack_100 = *puVar23;
      if (uStack_100 != 4) goto code_r0x00143962;
      uVar28 = uVar28 + uStack_b8;
      uVar22 = uStack_b0;
    }
    else {
      uVar22 = 0;
    }
    if ((long)uVar22 < 1 && uVar28 == 0) {
      _ZN4core3ptr45drop_in_place_LT_x11_clipboard__Clipboard_GT_17h94f4633cc0f40e51E(puVar25);
      if (puVar25[0x47] != 0) {
        (*(code *)PTR_free_00380de0)(puVar25[0x48]);
      }
      return;
    }
  } while( true );
code_r0x001434bb:
  *puVar20 = 0x20017;
  *(char *)(puVar20 + 1) = (char)uVar2;
  *(undefined1 *)((long)puVar20 + 5) = uVar26;
  *(undefined1 *)((long)puVar20 + 6) = uVar24;
  *(char *)((long)puVar20 + 7) = (char)uStack_c4;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_f8 = 4;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_108 = 8;
  puStack_110 = puVar20;
  _ZN5x11rb15rust_connection23RustConnection_LT_S_GT_12send_request17h9c6ef1db49c745f6E
            (&uStack_78,puVar29,&puStack_110,1,&uStack_100,1);
  uVar28 = uStack_70;
  uVar22 = uStack_78 & 0xff;
  if (uVar22 != 7) {
    uVar27 = (uStack_78 >> 8 & 0xffffffff) << 8 | uStack_78 & 0xffffff0000000000;
code_r0x001436fc:
    (*(code *)PTR_free_00380de0)(puVar20);
    uStack_b8 = CONCAT44(uStack_b8._4_4_,2);
    uStack_a8 = (uint)uVar28;
    uStack_a4 = (uint)(uVar28 >> 0x20);
    uStack_b0 = uVar27 | uVar22;
    goto code_r0x0014389b;
  }
  (*(code *)PTR_free_00380de0)(puVar20);
  _ZN5x11rb10connection17RequestConnection23wait_for_reply_or_error17h1941dedfbcfdf4a0E
            (&uStack_100,puVar29,uVar28);
  lVar4 = CONCAT44(uStack_fc,uStack_100);
  lVar7 = CONCAT44(uStack_f4,uStack_f8);
  pcVar8 = (char *)CONCAT44(uStack_ec,uStack_f0);
  if (lVar4 == -0x7ffffffffffffffe) {
    uVar28 = CONCAT44(uStack_e4,uStack_e8);
    if (((((uVar28 == 0) || (uVar28 == 1)) || ((uVar28 & 0x7ffffffffffffffe) == 2)) ||
        (((uVar28 & 0x7ffffffffffffffc) == 4 || ((uVar28 & 0x7ffffffffffffffc) == 8)))) ||
       ((*pcVar8 != '\x01' || (uVar28 < (ulong)*(uint *)(pcVar8 + 4) * 4 + 0x20)))) {
      if (lVar7 != 0) {
code_r0x00143783:
        (*(code *)PTR_free_00380de0)();
        uStack_b8 = CONCAT44(uStack_b8._4_4_,7);
        goto code_r0x0014389b;
      }
    }
    else {
      iVar18 = *(int *)(pcVar8 + 8);
      if (lVar7 != 0) {
        (*(code *)PTR_free_00380de0)();
      }
      if (iVar18 == *(int *)(lStack_c0 + 0x200)) goto code_r0x001438b9;
    }
  }
  else if ((!SBORROW8(0,lVar4)) && (lVar4 != 0)) {
    if (lVar4 != -0x7fffffffffffffff) {
      (*(code *)PTR_free_00380de0)(lVar7);
      uStack_b8 = CONCAT44(uStack_b8._4_4_,7);
      goto code_r0x0014389b;
    }
    if ((5 < (byte)uStack_f8) && ((uStack_f0 & 3) == 1)) {
      uVar5 = *(undefined8 *)(pcVar8 + -1);
      puVar21 = *(undefined8 **)(pcVar8 + 7);
      pcVar6 = (code *)*puVar21;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(uVar5);
      }
      if (puVar21[1] != 0) {
        (*(code *)PTR_free_00380de0)(uVar5);
        (*(code *)PTR_free_00380de0)(pcVar8 + -1);
        uStack_b8 = CONCAT44(uStack_b8._4_4_,7);
        goto code_r0x0014389b;
      }
      goto code_r0x00143783;
    }
  }
  uStack_b8 = CONCAT44(uStack_b8._4_4_,7);
  goto code_r0x0014389b;
code_r0x00143962:
  _ZN4core9panicking13assert_failed17h9869ad7d614c2b94E(&uStack_100,&UNK_002fa110,&UNK_0037d4e0);
  param_1 = puVar25;
code_r0x0014397a:
  _ZN3std3sys4sync6rwlock5futex6RwLock22wake_writer_or_readers17h5fb62a5357048a41E(puVar29 + 0x10);
  uStack_b8 = CONCAT44(uStack_b8._4_4_,5);
  puVar25 = param_1;
  goto joined_r0x00143890;
}


