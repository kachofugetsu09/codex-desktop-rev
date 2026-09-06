// 00162580  undefined main(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong main(int param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  int unaff_EBP;
  int *piVar13;
  long unaff_R13;
  uint *puVar14;
  undefined *puVar15;
  long in_FS_OFFSET;
  bool bVar16;
  char cVar17;
  undefined8 uStack_e8;
  int iStack_e0;
  int iStack_dc;
  uint *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar7 = *(long *)(in_FS_OFFSET + -0x48);
  lVar5 = _ZN3std6thread2id8ThreadId3new7COUNTER17h6fc36154b16d4ed3E;
  if (lVar7 == 0) {
    do {
      if (lVar5 == -1) {
        _ZN3std6thread2id8ThreadId3new9exhausted17hfeb7e705365a8519E();
        goto code_r0x00162ad3;
      }
      lVar7 = lVar5 + 1;
      LOCK();
      bVar16 = lVar5 != _ZN3std6thread2id8ThreadId3new7COUNTER17h6fc36154b16d4ed3E;
      lVar10 = lVar7;
      if (bVar16) {
        lVar5 = _ZN3std6thread2id8ThreadId3new7COUNTER17h6fc36154b16d4ed3E;
        lVar10 = _ZN3std6thread2id8ThreadId3new7COUNTER17h6fc36154b16d4ed3E;
      }
      _ZN3std6thread2id8ThreadId3new7COUNTER17h6fc36154b16d4ed3E = lVar10;
      UNLOCK();
    } while (bVar16);
    *(long *)(in_FS_OFFSET + -0x48) = lVar7;
  }
  puVar2 = PTR___errno_location_00380f10;
  puVar12 = PTR_poll_00380e70;
  lStack_d0 = (long)param_1;
  uStack_c8 = (code *)0x0;
  uStack_c0 = CONCAT44(_UNK_002f8234,_UNK_002f8230);
  uStack_b8 = CONCAT44(_UNK_002f823c,_UNK_002f8238);
  _ZN3std6thread11main_thread4MAIN17h618de307359a4590E_0 = lVar7;
  do {
    iVar3 = (*(code *)puVar12)(&uStack_c8,3,0);
    puVar8 = PTR_open64_00380e78;
    puVar15 = PTR_dup_00380d80;
    if (iVar3 != -1) {
      unaff_EBP = -1;
      puVar14 = (uint *)&UNK_003075af;
      lVar7 = 0;
      goto code_r0x00162830;
    }
    puVar6 = (uint *)(*(code *)puVar2)();
    uVar4 = *puVar6;
  } while (uVar4 == 4);
  puVar8 = puVar12;
  puVar14 = (uint *)&uStack_c8;
  if ((0x16 < uVar4) || (puVar14 = puVar6, (0x401800U >> (uVar4 & 0x1f) & 1) == 0))
  goto code_r0x00162871;
  iVar3 = (*(code *)PTR_fcntl_00380fe0)(0,1);
  unaff_EBP = -1;
  if ((((iVar3 == -1) &&
       ((*puVar6 == 9 &&
        (unaff_EBP = (*(code *)PTR_open64_00380e78)(&UNK_003075af,2,0), unaff_EBP == -1)))) ||
      ((iVar3 = (*(code *)PTR_fcntl_00380fe0)(1,1), iVar3 == -1 &&
       ((*puVar6 == 9 &&
        (((unaff_EBP == -1 || (iVar3 = (*(code *)PTR_dup_00380d80)(unaff_EBP), iVar3 == -1)) &&
         (unaff_EBP = (*(code *)PTR_open64_00380e78)(&UNK_003075af,2,0), unaff_EBP == -1)))))))) ||
     ((((iVar3 = (*(code *)PTR_fcntl_00380fe0)(2,1), puVar15 = puVar2, iVar3 == -1 && (*puVar6 == 9)
        ) && ((unaff_EBP == -1 || (iVar3 = (*(code *)PTR_dup_00380d80)(unaff_EBP), iVar3 == -1))))
      && (iVar3 = (*(code *)PTR_open64_00380e78)(&UNK_003075af,2,0), iVar3 == -1))))
  goto code_r0x00162871;
code_r0x00162727:
  lVar7 = (*(code *)PTR_signal_00380ed8)(0xd,1);
  if (lVar7 == -1) {
    uVar9 = _ZN3std2io5Write9write_fmt17h384251ddb7f1467cE(&uStack_c8,&UNK_00340b85,0xc3);
    _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h616bc2c7d611147fE
              (uVar9);
    _ZN3std7process5abort17h3de4dac2dac610ccE();
    goto code_r0x00162a61;
  }
  puVar8 = (undefined *)(*(code *)PTR_sysconf_00380d98)(0x1e);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_c8 = (code *)0x0;
  uStack_c0 = 0;
  uStack_98 = 0;
  _ZN3std3sys3pal4unix14stack_overflow3imp9PAGE_SIZE17ha662763ac483a39eE_0 = puVar8;
  uVar9 = (*(code *)PTR_pthread_self_00380e68)();
  unaff_EBP = (*(code *)PTR_pthread_getattr_np_00380d88)(uVar9,&uStack_c8);
  cVar17 = unaff_EBP == 0;
  if (!(bool)cVar17) goto code_r0x00162894;
  puStack_d8 = (uint *)0x0;
  uStack_e8 = 0;
  iStack_e0 = (*(code *)PTR_pthread_attr_getstack_00380e98)(&uStack_c8,&puStack_d8,&uStack_e8);
  puVar14 = puStack_d8;
  if (iStack_e0 != 0) goto code_r0x00162a9f;
  iStack_dc = (*(code *)PTR_pthread_attr_destroy_00380db0)(&uStack_c8);
  if (iStack_dc == 0) {
    if (puVar8 == (undefined *)0x0) {
      _ZN4core9panicking11panic_const23panic_const_rem_by_zero17hccef322a489577e2E(&UNK_0037d3a8);
      goto code_r0x00162ad3;
    }
    if (((ulong)puVar14 | (ulong)puVar8) >> 0x20 == 0) goto code_r0x00162877;
    uVar11 = (ulong)puVar14 % (ulong)puVar8;
    goto code_r0x0016287e;
  }
  puVar12 = &UNK_0037d378;
  piVar13 = &iStack_dc;
  goto code_r0x00162ab9;
  while ((unaff_R13 = lVar7 + 8, lVar5 = lVar7 + 6, lVar7 = unaff_R13,
         (*(byte *)((long)&uStack_c8 + lVar5) & 0x20) == 0 ||
         (((unaff_EBP != -1 && (iVar3 = (*(code *)puVar15)(unaff_EBP), iVar3 != -1)) ||
          (unaff_EBP = (*(code *)puVar8)(&UNK_003075af,2,0), unaff_EBP != -1))))) {
code_r0x00162830:
    if (lVar7 == 0x18) goto code_r0x00162727;
  }
code_r0x00162871:
  cVar17 = (char)unaff_R13;
  (*(code *)PTR_abort_00380d28)();
code_r0x00162877:
  uVar11 = ((ulong)puVar14 & 0xffffffff) % ((ulong)puVar8 & 0xffffffff);
code_r0x0016287e:
  lVar7 = (long)puVar8 - uVar11;
  if (uVar11 == 0) {
    lVar7 = 0;
  }
  puVar14 = (uint *)((long)puVar14 + lVar7);
  puVar15 = (undefined *)((long)puVar14 - (long)puVar8);
code_r0x00162894:
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_c8 = (code *)0x0;
  uStack_c0 = 0;
  uStack_38 = 0;
  (*(code *)PTR_sigaction_00380e80)(0xb,0,&uStack_c8);
  if (uStack_c8 == (code *)0x0) {
    if (_ZN3std3sys3pal4unix14stack_overflow3imp13NEED_ALTSTACK17hb9e806783fd711a6E_0 == '\0') {
      _ZN3std3sys3pal4unix14stack_overflow3imp13NEED_ALTSTACK17hb9e806783fd711a6E_0 = '\x01';
      _ZN3std3sys3pal4unix14stack_overflow3imp13MAIN_ALTSTACK17hc93e9c9cf410bc19E_0 =
           _ZN3std3sys3pal4unix14stack_overflow3imp12make_handler17h809c5438ea18c5b1E(1);
      if (unaff_EBP == 0) {
        _ZN3std3sys3pal4unix14stack_overflow11thread_info16set_current_info17h21653e4068580a44E
                  (puVar15,puVar14);
      }
      cVar17 = '\0';
    }
    uStack_40 = CONCAT44(uStack_40._4_4_,0x8000004);
    uStack_c8 = _ZN3std3sys3pal4unix14stack_overflow3imp14signal_handler17h104b1f426a959a05E;
    (*(code *)PTR_sigaction_00380e80)(0xb,&uStack_c8,0);
  }
  (*(code *)PTR_sigaction_00380e80)(7,0,&uStack_c8);
  if (uStack_c8 == (code *)0x0) {
    if (_ZN3std3sys3pal4unix14stack_overflow3imp13NEED_ALTSTACK17hb9e806783fd711a6E_0 == '\0') {
      _ZN3std3sys3pal4unix14stack_overflow3imp13NEED_ALTSTACK17hb9e806783fd711a6E_0 = '\x01';
      _ZN3std3sys3pal4unix14stack_overflow3imp13MAIN_ALTSTACK17hc93e9c9cf410bc19E_0 =
           _ZN3std3sys3pal4unix14stack_overflow3imp12make_handler17h809c5438ea18c5b1E(1);
      if (cVar17 != '\0') {
        _ZN3std3sys3pal4unix14stack_overflow11thread_info16set_current_info17h21653e4068580a44E
                  (puVar15,puVar14);
      }
    }
    uStack_40 = CONCAT44(uStack_40._4_4_,0x8000004);
    uStack_c8 = _ZN3std3sys3pal4unix14stack_overflow3imp14signal_handler17h104b1f426a959a05E;
    (*(code *)PTR_sigaction_00380e80)(7,&uStack_c8,0);
  }
  _ZN3std3sys4args4unix3imp4ARGC17h32ed9298e7abf4d9E_0 = lStack_d0;
  _ZN3std3sys4args4unix3imp4ARGV17h4542811820f52a6cE_0 = param_2;
  uVar4 = _ZN3std3sys9backtrace28__rust_begin_short_backtrace17h8adbff5ee488bf76E
                    (_ZN9sky_linux4main17h6e55fa85a059d851E);
  puVar8 = (undefined *)(ulong)uVar4;
  if (_ZN3std2rt7cleanup7CLEANUP17h92480b9984e76ebbE != 0) {
code_r0x00162a61:
    uStack_e8 = CONCAT71(uStack_e8._1_7_,1);
    uStack_c8 = (code *)&uStack_e8;
    _ZN3std3sys4sync4once5futex4Once4call17h0f82344e1bccad40E
              (&_ZN3std2rt7cleanup7CLEANUP17h92480b9984e76ebbE,0,&uStack_c8,&UNK_0037d790,
               &UNK_0037d210);
  }
  lVar10 = (*(code *)PTR___errno_location_00380f10)();
  puVar12 = PTR_pause_00380cc0;
  lVar7 = 0;
  LOCK();
  bVar16 = _ZN3std3sys10exit_guard18unique_thread_exit17EXITING_THREAD_ID17heef9e30008c8568bE == 0;
  lVar5 = lVar10;
  if (!bVar16) {
    lVar7 = _ZN3std3sys10exit_guard18unique_thread_exit17EXITING_THREAD_ID17heef9e30008c8568bE;
    lVar5 = _ZN3std3sys10exit_guard18unique_thread_exit17EXITING_THREAD_ID17heef9e30008c8568bE;
  }
  _ZN3std3sys10exit_guard18unique_thread_exit17EXITING_THREAD_ID17heef9e30008c8568bE = lVar5;
  UNLOCK();
  if (bVar16) {
    return (ulong)puVar8 & 0xff;
  }
  if (lVar7 != lVar10) {
    do {
      (*(code *)puVar12)();
    } while( true );
  }
  _ZN4core9panicking14panic_nounwind17hc4ddb444060ec426E(&UNK_0034084c);
code_r0x00162a9f:
  puVar12 = &UNK_0037d390;
  piVar13 = &iStack_e0;
code_r0x00162ab9:
  _ZN4core9panicking13assert_failed17h9869ad7d614c2b94E(piVar13,&UNK_002fa10c,puVar12);
code_r0x00162ad3:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


