// 0013c5c0  undefined _RNCNvMs1_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc4zeroINtB7_7ChannelNtNtCs6f2BchxFEfg_14extension_host13client_writer17ClientWriterEventE4send0Cs1oEx7o4003C_14extension_host(void)

undefined8
_RNCNvMs1_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc4zeroINtB7_7ChannelNtNtCs6f2BchxFEfg_14extension_host13client_writer17ClientWriterEventE4send0Cs1oEx7o4003C_14extension_host
          (undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  long *plVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  char cVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  undefined8 *puVar18;
  long *plVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  bool bVar23;
  undefined1 auVar24 [12];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined2 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  plVar19 = (long *)param_1[1];
  uStack_58 = *param_1;
  uStack_50 = 0x100;
  uStack_60 = 1;
  piVar4 = (int *)param_1[4];
  LOCK();
  lVar16 = *param_2;
  *param_2 = *param_2 + 1;
  UNLOCK();
  if (*param_2 == 0 || SCARRY8(lVar16,1) != *param_2 < 0) {
code_r0x0013cc0c:
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  uStack_70 = &uStack_60;
  lVar16 = *(long *)(piVar4 + 6);
  uStack_80 = param_2;
  uStack_78 = plVar19;
  if (lVar16 == *(long *)(piVar4 + 2)) {
    _RNvMs3_NtCscdodAO9FK5_5alloc7raw_vecINtB5_6RawVecNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5waker5EntryE8grow_oneCs1oEx7o4003C_14extension_host
              (piVar4 + 2);
  }
  lVar12 = *(long *)(piVar4 + 4);
  *(undefined8 **)(lVar12 + 0x10 + lVar16 * 0x18) = uStack_70;
  puVar2 = (undefined4 *)(lVar12 + lVar16 * 0x18);
  *puVar2 = (undefined4)uStack_80;
  puVar2[1] = uStack_80._4_4_;
  puVar2[2] = (undefined4)uStack_78;
  puVar2[3] = uStack_78._4_4_;
  *(long *)(piVar4 + 6) = lVar16 + 1;
  _RNvMNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5wakerNtB2_5Waker6notify(piVar4 + 0xe);
  if (((*(char *)(param_1 + 5) == '\0') &&
      ((*(ulong *)PTR__RNvNtNtCs2AWtUsOyxgP_3std9panicking11panic_count18GLOBAL_PANIC_COUNT_001d3058
       & 0x7fffffffffffffff) != 0)) &&
     (cVar10 = (*(code *)
                 PTR__RNvNtNtCs2AWtUsOyxgP_3std9panicking11panic_count17is_zero_slow_path_001d3068)
                         (), cVar10 == '\0')) {
    *(undefined1 *)(piVar4 + 1) = 1;
  }
  LOCK();
  iVar3 = *piVar4;
  *piVar4 = 0;
  UNLOCK();
  if (iVar3 == 2) {
    (*(code *)PTR__RNvMNtNtNtNtCs2AWtUsOyxgP_3std3sys4sync5mutex5futexNtB2_5Mutex4wake_001d3060)
              (piVar4);
  }
  puVar8 = PTR__RNvMs_NtNtCs2AWtUsOyxgP_3std6thread6threadNtB4_6Thread4park_001d30e8;
  puVar7 = PTR__RNvMNtCs2AWtUsOyxgP_3std4timeNtB2_7Instant3now_001d30d0;
  uVar17 = *(uint *)((long *)param_1[2] + 1);
  puStack_68 = param_1;
  if (uVar17 == 0xffffffff) {
    uVar21 = param_2[3];
    while (pcVar6 = (code *)PTR__RNvNtNtCs2AWtUsOyxgP_3std6thread9functions9yield_now_001d3100,
          uVar21 == 0) {
      (*(code *)puVar8)(param_2 + 2);
      uVar21 = param_2[3];
    }
  }
  else {
    lVar16 = *(long *)param_1[2];
    uVar21 = param_2[3];
    while (pcVar6 = (code *)PTR__RNvNtNtCs2AWtUsOyxgP_3std6thread9functions9yield_now_001d3100,
          uVar21 == 0) {
      auVar24 = (*(code *)puVar7)();
      lVar12 = auVar24._0_8_;
      bVar23 = lVar12 < lVar16;
      if (lVar12 == lVar16) {
        bVar23 = auVar24._8_4_ < uVar17;
      }
      if (!bVar23) {
        LOCK();
        uVar22 = param_2[3];
        bVar23 = uVar22 == 0;
        if (bVar23) {
          param_2[3] = 1;
          uVar22 = 0;
        }
        UNLOCK();
        uVar21 = 3;
        if (uVar22 < 3) {
          uVar21 = uVar22;
        }
        puVar18 = puStack_68;
        if (!bVar23) goto code_r0x0013c767;
        goto code_r0x0013c8ab;
      }
      uVar13 = (*(code *)
                 PTR__RNvXs3_NtCs2AWtUsOyxgP_3std4timeNtB5_7InstantNtNtNtCs4NRVxsYgnAr_4core3ops5arith3Sub3sub_001d30e0
               )(lVar16,uVar17,lVar12);
      (*(code *)PTR__RNvMs_NtNtCs2AWtUsOyxgP_3std6thread6threadNtB4_6Thread12park_timeout_001d30d8)
                (param_2 + 2,uVar13);
      uVar21 = param_2[3];
    }
  }
  PTR__RNvNtNtCs2AWtUsOyxgP_3std6thread9functions9yield_now_001d3100 = pcVar6;
  if (uVar21 - 1 < 2) {
code_r0x0013c767:
                    /* WARNING: Could not recover jumptable at 0x0013c775. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar13 = (*(code *)(&UNK_00114220 + *(int *)(&UNK_00114220 + uVar21 * 4)))();
    return uVar13;
  }
  if ((char)uStack_50 == '\0') {
    uVar20 = 0;
    uVar17 = 0;
    do {
      if (uVar17 < 7) {
        if (uVar17 != 0) {
          uVar11 = uVar20 & 7;
          if (6 < uVar20 - 1) {
            uVar14 = uVar20 & 0xfffffff8;
            do {
              uVar14 = uVar14 - 8;
            } while (uVar14 != 0);
            if (uVar11 == 0) goto code_r0x0013ca03;
          }
          do {
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
      }
      else {
        (*pcVar6)();
      }
code_r0x0013ca03:
      iVar3 = uVar17 * 2;
      uVar17 = uVar17 + 1;
      uVar20 = uVar20 + iVar3 + 1;
    } while ((char)uStack_50 == '\0');
  }
  return 2;
code_r0x0013c8ab:
  plVar5 = (long *)puVar18[3];
  LOCK();
  bVar23 = (int)*plVar5 == 0;
  if (bVar23) {
    *(int *)plVar5 = 1;
  }
  UNLOCK();
  if (!bVar23) {
    (*(code *)
      PTR__RNvMNtNtNtNtCs2AWtUsOyxgP_3std3sys4sync5mutex5futexNtB2_5Mutex14lock_contended_001d30b0)
              (plVar5);
  }
  puVar18 = (undefined8 *)
            PTR__RNvNtNtCs2AWtUsOyxgP_3std9panicking11panic_count18GLOBAL_PANIC_COUNT_001d3058;
  if ((*(ulong *)PTR__RNvNtNtCs2AWtUsOyxgP_3std9panicking11panic_count18GLOBAL_PANIC_COUNT_001d3058
      & 0x7fffffffffffffff) == 0) {
    bVar9 = 0;
    cVar10 = *(char *)((long)plVar5 + 4);
  }
  else {
    bVar9 = (*(code *)
              PTR__RNvNtNtCs2AWtUsOyxgP_3std9panicking11panic_count17is_zero_slow_path_001d3068)();
    bVar9 = bVar9 ^ 1;
    cVar10 = *(char *)((long)plVar5 + 4);
  }
  if (cVar10 != '\0') {
    uVar21 = (ulong)uStack_78 >> 8;
    uStack_78 = (long *)CONCAT71((int7)uVar21,bVar9);
    uStack_80 = plVar5;
    (*(code *)PTR__RNvNtCs4NRVxsYgnAr_4core6result13unwrap_failed_001d30f8)
              (&UNK_00114258,0x2b,&uStack_80,&UNK_001cf7d0,&UNK_001cf740);
    goto code_r0x0013cc0c;
  }
  lVar12 = plVar5[2];
  uVar21 = plVar5[3];
  uVar22 = 0xffffffffffffffff;
  lVar15 = 0;
  lVar16 = lVar12;
  do {
    if (uVar21 * 0x18 == lVar15) {
      (*(code *)PTR__RNvNtCs4NRVxsYgnAr_4core6option13unwrap_failed_001d30c0)(&UNK_001cf758);
      goto code_r0x0013cc0c;
    }
    lVar15 = lVar15 + 0x18;
    uVar22 = uVar22 + 1;
    puVar1 = (undefined8 *)(lVar16 + 8);
    lVar16 = lVar16 + 0x18;
  } while ((long *)*puVar1 != plVar19);
  if (uVar21 <= uVar22) {
code_r0x0013cbe4:
    (*(code *)PTR__RNvNvMs_NtCscdodAO9FK5_5alloc3vecINtB6_3VecppE6remove13assert_failed_001d30b8)
              (uVar22,uVar21,&UNK_001cf808);
    goto code_r0x0013cc0c;
  }
  plVar19 = *(long **)(lVar12 + -0x18 + lVar15);
  puVar2 = (undefined4 *)(lVar12 + -0x10 + lVar15);
  uStack_48 = *puVar2;
  uStack_44 = puVar2[1];
  uStack_40 = puVar2[2];
  uStack_3c = puVar2[3];
  (*(code *)PTR_memmove_001d3070)(lVar12 + lVar15 + -0x18,lVar12 + lVar15,uVar21 * 0x18 - lVar15);
  uVar21 = uVar21 - 1;
  plVar5[3] = uVar21;
  if (plVar19 == (long *)0x0) goto code_r0x0013cbe4;
  uStack_78 = (long *)CONCAT44(uStack_44,uStack_48);
  uStack_70 = (undefined8 *)CONCAT44(uStack_3c,uStack_40);
  LOCK();
  *plVar19 = *plVar19 + -1;
  UNLOCK();
  uStack_80 = plVar19;
  if (*plVar19 == 0) {
    _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc7context5InnerE9drop_slowCs1oEx7o4003C_14extension_host
              (&uStack_80);
  }
  if (((bVar9 == 0) && ((*puVar18 & 0x7fffffffffffffff) != 0)) &&
     (cVar10 = (*(code *)
                 PTR__RNvNtNtCs2AWtUsOyxgP_3std9panicking11panic_count17is_zero_slow_path_001d3068)
                         (), cVar10 == '\0')) {
    *(undefined1 *)((long)plVar5 + 4) = 1;
  }
  LOCK();
  lVar16 = *plVar5;
  *(int *)plVar5 = 0;
  UNLOCK();
  if ((int)lVar16 == 2) {
    (*(code *)PTR__RNvMNtNtNtNtCs2AWtUsOyxgP_3std3sys4sync5mutex5futexNtB2_5Mutex4wake_001d3060)
              (plVar5);
  }
  else {
  }
  if ((char)uStack_60 != '\0') {
    return 0;
  }
  uStack_60 = 0;
  (*(code *)PTR__RNvNtCs4NRVxsYgnAr_4core6option13unwrap_failed_001d30c0)(&UNK_001cf770);
  (*(code *)PTR__RNvMNtNtNtNtCs2AWtUsOyxgP_3std3sys4sync5mutex5futexNtB2_5Mutex4wake_001d3060)
            (plVar5);
  bVar23 = (char)uStack_60 != '\0';
  uStack_60 = 0;
  if (bVar23) {
    return 1;
  }
  (*(code *)PTR__RNvNtCs4NRVxsYgnAr_4core6option13unwrap_failed_001d30c0)(&UNK_001cf7b8);
  goto code_r0x0013c8ab;
}


