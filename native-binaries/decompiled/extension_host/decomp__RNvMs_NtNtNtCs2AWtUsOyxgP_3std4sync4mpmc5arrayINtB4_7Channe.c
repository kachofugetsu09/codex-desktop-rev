// 00139000  undefined _RNvMs_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5arrayINtB4_7ChannelNtNtCs6f2BchxFEfg_14extension_host13client_writer17ClientWriterEventE4sendCs1oEx7o4003C_14extension_host(void)

undefined1  [16]
_RNvMs_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5arrayINtB4_7ChannelNtNtCs6f2BchxFEfg_14extension_host13client_writer17ClientWriterEventE4sendCs1oEx7o4003C_14extension_host
          (long *param_1,long param_2,long param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  long *in_FS_OFFSET;
  bool bVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  long lStack_a0;
  uint uStack_98;
  long **pplStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long **pplStack_48;
  long *plStack_40;
  long *plStack_38;
  
  uStack_68 = 0;
  uStack_60 = 0;
  plStack_78 = (long *)0x0;
  lStack_70 = 0;
  uStack_58 = 0;
  uVar8 = param_1[0x10];
  uVar4 = param_1[0x32];
  uVar11 = 1;
  if ((uVar4 & uVar8) != 0) {
code_r0x00139049:
    auVar13._8_8_ = param_2;
    auVar13._0_8_ = uVar11;
    return auVar13;
  }
  lVar1 = *in_FS_OFFSET;
  lStack_a0 = param_3;
  uStack_98 = param_4;
code_r0x00139076:
  uVar9 = 0;
  do {
    uVar7 = uStack_98;
    lVar2 = lStack_a0;
    uVar5 = uVar4 - 1 & uVar8;
    lVar10 = uVar5 * 0x10;
    uVar4 = *(ulong *)(param_1[0x33] + lVar10);
    if (uVar8 == uVar4) {
      if (uVar5 + 1 < (ulong)param_1[0x30]) {
        LOCK();
        bVar12 = uVar8 == param_1[0x10];
        if (bVar12) {
          param_1[0x10] = uVar8 + 1;
        }
        UNLOCK();
      }
      else {
        LOCK();
        bVar12 = uVar8 == param_1[0x10];
        if (bVar12) {
          param_1[0x10] = (-param_1[0x31] & uVar8) + param_1[0x31];
        }
        UNLOCK();
      }
      if (bVar12) {
        plStack_78 = (long *)(param_1[0x33] + lVar10);
        lStack_70 = uVar8 + 1;
        plStack_78[1] = param_2;
        *plStack_78 = lStack_70;
        _RNvMs0_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5wakerNtB5_9SyncWaker6notify(param_1 + 0x28);
        uVar11 = 2;
        goto code_r0x00139049;
      }
      uVar7 = 6;
      if (uVar9 < 6) {
        uVar7 = uVar9;
      }
      if (uVar9 != 0) {
        uVar7 = uVar7 * uVar7;
        uVar3 = uVar7 & 5;
        if (7 < uVar7) {
          uVar7 = uVar7 & 0x38;
          do {
            uVar7 = uVar7 - 8;
          } while (uVar7 != 0);
          if (uVar3 == 0) goto code_r0x00139080;
        }
        do {
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
        goto code_r0x00139080;
      }
code_r0x001391e0:
      uVar9 = 1;
      uVar8 = param_1[0x10];
      uVar4 = param_1[0x32];
      uVar5 = uVar4 & uVar8;
    }
    else {
      if (uVar4 + param_1[0x31] == uVar8 + 1) {
        LOCK();
        UNLOCK();
        if (*param_1 + param_1[0x31] == uVar8) break;
        uVar7 = 6;
        if (uVar9 < 6) {
          uVar7 = uVar9;
        }
        if (uVar9 == 0) goto code_r0x001391e0;
        uVar7 = uVar7 * uVar7;
        uVar3 = uVar7 & 5;
        if (7 < uVar7) {
          uVar7 = uVar7 & 0x38;
          do {
            uVar7 = uVar7 - 8;
          } while (uVar7 != 0);
          if (uVar3 == 0) goto code_r0x00139080;
        }
        do {
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      else if (uVar9 < 7) {
        if (uVar9 != 0) {
          uVar3 = uVar9 * uVar9;
          uVar7 = uVar3 & 5;
          if (7 < uVar3) {
            uVar3 = uVar3 & 0x38;
            do {
              uVar3 = uVar3 - 8;
            } while (uVar3 != 0);
            if (uVar7 == 0) goto code_r0x00139080;
          }
          do {
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
      }
      else {
        (*(code *)PTR__RNvNtNtCs2AWtUsOyxgP_3std6thread9functions9yield_now_001d3100)();
      }
code_r0x00139080:
      uVar9 = uVar9 + 1;
      uVar8 = param_1[0x10];
      uVar4 = param_1[0x32];
      uVar5 = uVar4 & uVar8;
    }
    if (uVar5 != 0) goto code_r0x00139049;
  } while( true );
  if (uStack_98 != 0xffffffff) {
    auVar14 = (*(code *)PTR__RNvMNtCs2AWtUsOyxgP_3std4timeNtB2_7Instant3now_001d30d0)();
    if (auVar14._0_8_ == lVar2) {
      if (uVar7 <= auVar14._8_4_) {
code_r0x00139411:
        uVar11 = 0;
        goto code_r0x00139049;
      }
    }
    else if (lVar2 <= auVar14._0_8_) goto code_r0x00139411;
  }
  pplStack_48 = &plStack_78;
  plStack_38 = &lStack_a0;
  plVar6 = (long *)(lVar1 + -0x20);
  plStack_40 = param_1;
  if (((char)in_FS_OFFSET[-3] == '\x01') ||
     (plVar6 = (long *)_RINvMs0_NtNtNtNtCs2AWtUsOyxgP_3std3sys12thread_local6native4lazyINtB6_7StorageINtNtCs4NRVxsYgnAr_4core4cell4CellINtNtB1j_6option6OptionNtNtNtNtBe_4sync4mpmc7context7ContextEEuE16get_or_init_slowNvNvNvMB2b_B29_4with7CONTEXT27___rust_std_internal_init_fnECs1oEx7o4003C_14extension_host
                                 (*in_FS_OFFSET + -0x20,0), plVar6 != (long *)0x0)) {
    lVar2 = *plVar6;
    *plVar6 = 0;
    if (lVar2 == 0) {
      plVar6 = (long *)(*(code *)
                         PTR__RNvMNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc7contextNtB2_7Context3new_001d3028
                       )();
      pplStack_48 = (long **)0x0;
      pplStack_90 = &plStack_78;
      plStack_80 = &lStack_a0;
      plStack_88 = param_1;
      _RNCNvMs_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5arrayINtB6_7ChannelINtNtCscdodAO9FK5_5alloc4sync3ArcNtNtNtCs6f2BchxFEfg_14extension_host9transport4unix18UnixSocketShutdownEE4send0Cs1oEx7o4003C_14extension_host
                (&pplStack_90,plVar6);
      LOCK();
      *plVar6 = *plVar6 + -1;
      plVar6 = (long *)*plVar6;
      UNLOCK();
    }
    else {
      *(undefined8 *)(lVar2 + 0x18) = 0;
      *(undefined8 *)(lVar2 + 0x20) = 0;
      pplStack_48 = (long **)0x0;
      pplStack_90 = &plStack_78;
      plStack_88 = plStack_40;
      plStack_80 = plStack_38;
      _RNCNvMs_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5arrayINtB6_7ChannelINtNtCscdodAO9FK5_5alloc4sync3ArcNtNtNtCs6f2BchxFEfg_14extension_host9transport4unix18UnixSocketShutdownEE4send0Cs1oEx7o4003C_14extension_host
                (&pplStack_90,lVar2);
      pplStack_90 = (long **)*plVar6;
      *plVar6 = lVar2;
      if (pplStack_90 == (long **)0x0) goto code_r0x00139341;
      LOCK();
      *pplStack_90 = (long *)((long)*pplStack_90 + -1);
      plVar6 = *pplStack_90;
      UNLOCK();
    }
    if (plVar6 == (long *)0x0) {
      _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc7context5InnerE9drop_slowCs1oEx7o4003C_14extension_host
                ();
    }
  }
  else {
    _RNCINvMNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc7contextNtB5_7Context4withNCNvMs_NtB7_5arrayINtB1a_7ChannelINtNtCscdodAO9FK5_5alloc4sync3ArcNtNtNtCs6f2BchxFEfg_14extension_host9transport4unix18UnixSocketShutdownEE4send0uEs0_0Cs1oEx7o4003C_14extension_host
              ();
  }
code_r0x00139341:
  uVar8 = param_1[0x10];
  uVar4 = param_1[0x32];
  if ((uVar4 & uVar8) != 0) goto code_r0x00139049;
  goto code_r0x00139076;
}


