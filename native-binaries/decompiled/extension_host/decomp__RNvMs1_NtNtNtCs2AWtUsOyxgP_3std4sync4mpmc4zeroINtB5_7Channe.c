// 0013e290  undefined _RNvMs1_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc4zeroINtB5_7ChannelNtNtCs6f2BchxFEfg_14extension_host13client_writer17ClientWriterEventE4sendCs1oEx7o4003C_14extension_host(void)

undefined1  [16]
_RNvMs1_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc4zeroINtB5_7ChannelNtNtCs6f2BchxFEfg_14extension_host13client_writer17ClientWriterEventE4sendCs1oEx7o4003C_14extension_host
          (long *param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  undefined *puVar9;
  byte bVar10;
  char cVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long *in_FS_OFFSET;
  bool bVar18;
  undefined1 auVar19 [16];
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  undefined8 *puStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  byte bStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  undefined8 *puStack_98;
  long *plStack_90;
  long *plStack_88;
  byte bStack_80;
  ulong uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_58 = 0;
  uStack_50 = 0;
  puStack_38 = (undefined8 *)0x0;
  LOCK();
  bVar18 = (int)*param_1 == 0;
  if (bVar18) {
    *(int *)param_1 = 1;
  }
  UNLOCK();
  uStack_68 = param_3;
  uStack_60 = param_4;
  if (!bVar18) {
    (*(code *)
      PTR__RNvMNtNtNtNtCs2AWtUsOyxgP_3std3sys4sync5mutex5futexNtB2_5Mutex14lock_contended_001d30b0)
              (param_1);
  }
  puVar9 = PTR__RNvNtNtCs2AWtUsOyxgP_3std9panicking11panic_count18GLOBAL_PANIC_COUNT_001d3058;
  if ((*(ulong *)PTR__RNvNtNtCs2AWtUsOyxgP_3std9panicking11panic_count18GLOBAL_PANIC_COUNT_001d3058
      & 0x7fffffffffffffff) == 0) {
    bVar10 = 0;
    cVar11 = *(char *)((long)param_1 + 4);
  }
  else {
    bVar10 = (*(code *)
               PTR__RNvNtNtCs2AWtUsOyxgP_3std9panicking11panic_count17is_zero_slow_path_001d3068)();
    bVar10 = bVar10 ^ 1;
    cVar11 = *(char *)((long)param_1 + 4);
  }
  if (cVar11 != '\0') {
    uVar14 = (ulong)plStack_d0 >> 8;
    plStack_d0 = (long *)CONCAT71((int7)uVar14,bVar10);
    plStack_d8 = param_1;
    (*(code *)PTR__RNvNtCs4NRVxsYgnAr_4core6result13unwrap_failed_001d30f8)
              (&UNK_00114258,0x2b,&plStack_d8,&UNK_001cf7d0,&UNK_001cf880);
code_r0x0013e7a7:
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  lVar3 = param_1[9];
  if (lVar3 != 0) {
    lVar4 = *in_FS_OFFSET;
    lVar5 = param_1[8];
    lVar15 = 1;
    lVar16 = 0;
    do {
      lVar6 = *(long *)(lVar5 + lVar16);
      if (*(long *)(lVar6 + 0x28) != lVar4 + -0x90) {
        LOCK();
        bVar18 = *(long *)(lVar6 + 0x18) == 0;
        if (bVar18) {
          *(long *)(lVar6 + 0x18) = *(long *)(lVar5 + 8 + lVar16);
        }
        UNLOCK();
        if (bVar18) {
          lVar3 = *(long *)(lVar5 + 0x10 + lVar16);
          if (lVar3 != 0) {
            *(long *)(lVar6 + 0x20) = lVar3;
          }
          lVar3 = *(long *)(lVar6 + 0x10);
          LOCK();
          piVar1 = (int *)(lVar3 + 0x28);
          iVar2 = *piVar1;
          *piVar1 = 1;
          UNLOCK();
          if (iVar2 == -1) {
            (*(code *)PTR__RNvNtNtNtNtCs2AWtUsOyxgP_3std3sys3pal4unix5futex10futex_wake_001d30f0)
                      (lVar3 + 0x28);
          }
          uStack_78 = lVar15 - 1;
          uVar14 = param_1[9];
          plStack_70 = param_2;
          if (uStack_78 < uVar14) {
            lVar3 = param_1[8];
            plVar7 = *(long **)(lVar3 + lVar16);
            plVar13 = (long *)(lVar3 + 8 + lVar16);
            plStack_a8 = (long *)*plVar13;
            plStack_a0 = (long *)plVar13[1];
            (*(code *)PTR_memmove_001d3070)
                      (lVar3 + lVar16,lVar3 + lVar16 + 0x18,(uVar14 - lVar15) * 0x18);
            uVar14 = uVar14 - 1;
            param_1[9] = uVar14;
            if (plVar7 != (long *)0x0) {
              plStack_d0 = plStack_a8;
              puStack_c8 = plStack_a0;
              puStack_38 = plStack_a0;
              plStack_d8 = plVar7;
              if (((bVar10 == 0) &&
                  ((*(ulong *)
                     PTR__RNvNtNtCs2AWtUsOyxgP_3std9panicking11panic_count18GLOBAL_PANIC_COUNT_001d3058
                   & 0x7fffffffffffffff) != 0)) &&
                 (cVar11 = (*(code *)
                             PTR__RNvNtNtCs2AWtUsOyxgP_3std9panicking11panic_count17is_zero_slow_path_001d3068
                           )(), cVar11 == '\0')) {
                *(undefined1 *)((long)param_1 + 4) = 1;
              }
              param_2 = plStack_70;
              LOCK();
              lVar3 = *param_1;
              *(int *)param_1 = 0;
              UNLOCK();
              if ((int)lVar3 == 2) {
                (*(code *)
                  PTR__RNvMNtNtNtNtCs2AWtUsOyxgP_3std3sys4sync5mutex5futexNtB2_5Mutex4wake_001d3060)
                          (param_1);
              }
              if (puStack_38 == (undefined8 *)0x0) {
                (*(code *)PTR__RNvNtCs4NRVxsYgnAr_4core6option13unwrap_failed_001d30c0)
                          (&UNK_001cf898);
                goto code_r0x0013e7a7;
              }
              *puStack_38 = 1;
              puStack_38[1] = param_2;
              *(undefined1 *)(puStack_38 + 2) = 1;
              LOCK();
              *plStack_d8 = *plStack_d8 + -1;
              UNLOCK();
              if (*plStack_d8 == 0) {
                _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc7context5InnerE9drop_slowCs1oEx7o4003C_14extension_host
                          (&plStack_d8);
              }
              uVar12 = 2;
              goto code_r0x0013e5f4;
            }
          }
          (*(code *)
            PTR__RNvNvMs_NtCscdodAO9FK5_5alloc3vecINtB6_3VecppE6remove13assert_failed_001d30b8)
                    (uStack_78,uVar14,&UNK_001cf7f0);
          goto code_r0x0013e7a7;
        }
      }
      lVar16 = lVar16 + 0x18;
      lVar15 = lVar15 + 1;
    } while (lVar3 * 0x18 != lVar16);
  }
  if ((char)param_1[0xd] == '\0') {
    plStack_a0 = &lStack_58;
    puStack_98 = &uStack_68;
    puVar17 = (undefined8 *)(*in_FS_OFFSET + -0x20);
    plStack_a8 = param_2;
    plStack_90 = param_1;
    plStack_88 = param_1;
    bStack_80 = bVar10;
    if (((char)in_FS_OFFSET[-3] == '\x01') ||
       (puVar17 = (undefined8 *)
                  _RINvMs0_NtNtNtNtCs2AWtUsOyxgP_3std3sys12thread_local6native4lazyINtB6_7StorageINtNtCs4NRVxsYgnAr_4core4cell4CellINtNtB1j_6option6OptionNtNtNtNtBe_4sync4mpmc7context7ContextEEuE16get_or_init_slowNvNvNvMB2b_B29_4with7CONTEXT27___rust_std_internal_init_fnECs1oEx7o4003C_14extension_host
                            (puVar17,0), puVar17 != (undefined8 *)0x0)) {
      plVar13 = (long *)*puVar17;
      *puVar17 = 0;
      bStack_b0 = bVar10;
      if (plVar13 == (long *)0x0) {
        plVar13 = (long *)(*(code *)
                            PTR__RNvMNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc7contextNtB2_7Context3new_001d3028
                          )();
        bStack_80 = 2;
        plStack_d0 = &lStack_58;
        puStack_c8 = &uStack_68;
        plStack_e0 = plVar13;
        plStack_d8 = param_2;
        plStack_c0 = param_1;
        plStack_b8 = param_1;
        auVar19 = _RNCNvMs1_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc4zeroINtB7_7ChannelNtNtCs6f2BchxFEfg_14extension_host13client_writer17ClientWriterEventE4send0Cs1oEx7o4003C_14extension_host
                            (&plStack_d8,plVar13);
        LOCK();
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc7context5InnerE9drop_slowCs1oEx7o4003C_14extension_host
                    (&plStack_e0);
        }
      }
      else {
        plVar13[3] = 0;
        plVar13[4] = 0;
        bStack_80 = 2;
        plStack_d8 = plStack_a8;
        plStack_d0 = plStack_a0;
        puStack_c8 = puStack_98;
        plStack_c0 = plStack_90;
        plStack_b8 = plStack_88;
        plStack_e0 = plVar13;
        auVar19 = _RNCNvMs1_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc4zeroINtB7_7ChannelNtNtCs6f2BchxFEfg_14extension_host13client_writer17ClientWriterEventE4send0Cs1oEx7o4003C_14extension_host
                            (&plStack_d8,plVar13);
        plStack_d8 = (long *)*puVar17;
        *puVar17 = plVar13;
        if (plStack_d8 != (long *)0x0) {
          LOCK();
          *plStack_d8 = *plStack_d8 + -1;
          UNLOCK();
          if (*plStack_d8 == 0) {
            _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc7context5InnerE9drop_slowCs1oEx7o4003C_14extension_host
                      (&plStack_d8);
          }
        }
      }
    }
    else {
      auVar19 = _RNCINvMNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc7contextNtB5_7Context4withNCNvMs1_NtB7_4zeroINtB1b_7ChannelNtNtCs6f2BchxFEfg_14extension_host13client_writer17ClientWriterEventE4send0INtNtCs4NRVxsYgnAr_4core6result6ResultuINtNtB7_5error16SendTimeoutErrorB1A_EEEs0_0Cs1oEx7o4003C_14extension_host
                          (&plStack_a8);
    }
    plVar13 = plStack_88;
    param_2 = auVar19._8_8_;
    uVar12 = auVar19._0_8_;
    if (bStack_80 != 2) {
      if ((((bStack_80 & 1) == 0) && ((*(ulong *)puVar9 & 0x7fffffffffffffff) != 0)) &&
         (cVar11 = (*(code *)
                     PTR__RNvNtNtCs2AWtUsOyxgP_3std9panicking11panic_count17is_zero_slow_path_001d3068
                   )(), cVar11 == '\0')) {
        *(undefined1 *)((long)plVar13 + 4) = 1;
      }
      LOCK();
      lVar3 = *plVar13;
      *(int *)plVar13 = 0;
      UNLOCK();
      if ((int)lVar3 == 2) {
        (*(code *)PTR__RNvMNtNtNtNtCs2AWtUsOyxgP_3std3sys4sync5mutex5futexNtB2_5Mutex4wake_001d3060)
                  (plVar13);
      }
    }
  }
  else {
    if (((bVar10 == 0) && ((*(ulong *)puVar9 & 0x7fffffffffffffff) != 0)) &&
       (cVar11 = (*(code *)
                   PTR__RNvNtNtCs2AWtUsOyxgP_3std9panicking11panic_count17is_zero_slow_path_001d3068
                 )(), cVar11 == '\0')) {
      *(undefined1 *)((long)param_1 + 4) = 1;
    }
    LOCK();
    lVar3 = *param_1;
    *(int *)param_1 = 0;
    UNLOCK();
    uVar12 = 1;
    if ((int)lVar3 == 2) {
      (*(code *)PTR__RNvMNtNtNtNtCs2AWtUsOyxgP_3std3sys4sync5mutex5futexNtB2_5Mutex4wake_001d3060)
                (param_1);
      uVar12 = 1;
    }
  }
code_r0x0013e5f4:
  auVar19._8_8_ = param_2;
  auVar19._0_8_ = uVar12;
  return auVar19;
}


