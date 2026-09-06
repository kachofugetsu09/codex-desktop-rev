// 001374a0  undefined _RNCNvMs_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5arrayINtB6_7ChannelINtNtCscdodAO9FK5_5alloc4sync3ArcNtNtNtCs6f2BchxFEfg_14extension_host9transport4unix18UnixSocketShutdownEE4send0Cs1oEx7o4003C_14extension_host(void)

void _RNCNvMs_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5arrayINtB6_7ChannelINtNtCscdodAO9FK5_5alloc4sync3ArcNtNtNtCs6f2BchxFEfg_14extension_host9transport4unix18UnixSocketShutdownEE4send0Cs1oEx7o4003C_14extension_host
               (undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  bool bVar13;
  undefined1 auVar14 [12];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  uVar2 = *param_1;
  plVar3 = (long *)param_1[1];
  _RNvMs0_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5wakerNtB5_9SyncWaker8register
            (plVar3 + 0x20,uVar2,param_2);
  if ((*plVar3 + plVar3[0x31] != (~plVar3[0x32] & plVar3[0x10])) ||
     ((plVar3[0x32] & plVar3[0x10]) != 0)) {
    LOCK();
    if (*(long *)(param_2 + 0x18) == 0) {
      *(long *)(param_2 + 0x18) = 1;
    }
    UNLOCK();
  }
  puVar8 = PTR__RNvMs_NtNtCs2AWtUsOyxgP_3std6thread6threadNtB4_6Thread4park_001d30e8;
  puVar7 = PTR__RNvMs_NtNtCs2AWtUsOyxgP_3std6thread6threadNtB4_6Thread12park_timeout_001d30d8;
  puVar6 = PTR__RNvMNtCs2AWtUsOyxgP_3std4timeNtB2_7Instant3now_001d30d0;
  uVar1 = *(uint *)((long *)param_1[2] + 1);
  if (uVar1 == 0xffffffff) {
    uVar12 = *(ulong *)(param_2 + 0x18);
    while (uVar12 == 0) {
      (*(code *)puVar8)(param_2 + 0x10);
      uVar12 = *(ulong *)(param_2 + 0x18);
    }
  }
  else {
    lVar4 = *(long *)param_1[2];
    uVar12 = *(ulong *)(param_2 + 0x18);
    while (uVar12 == 0) {
      auVar14 = (*(code *)puVar6)();
      lVar9 = auVar14._0_8_;
      bVar13 = lVar9 < lVar4;
      if (lVar9 == lVar4) {
        bVar13 = auVar14._8_4_ < uVar1;
      }
      if (!bVar13) {
        LOCK();
        uVar11 = *(ulong *)(param_2 + 0x18);
        bVar13 = uVar11 == 0;
        if (bVar13) {
          *(ulong *)(param_2 + 0x18) = 1;
          uVar11 = 0;
        }
        UNLOCK();
        uVar12 = 3;
        if (uVar11 < 3) {
          uVar12 = uVar11;
        }
        if (bVar13) goto code_r0x0013760e;
        goto code_r0x00137604;
      }
      uVar10 = (*(code *)
                 PTR__RNvXs3_NtCs2AWtUsOyxgP_3std4timeNtB5_7InstantNtNtNtCs4NRVxsYgnAr_4core3ops5arith3Sub3sub_001d30e0
               )(lVar4,uVar1,lVar9);
      (*(code *)puVar7)(param_2 + 0x10,uVar10);
      uVar12 = *(ulong *)(param_2 + 0x18);
    }
  }
  if (uVar12 - 1 < 2) {
code_r0x00137604:
    if (uVar12 - 1 < 2) {
code_r0x0013760e:
      _RNvMs0_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5wakerNtB5_9SyncWaker10unregister
                (&uStack_48,plVar3 + 0x20,uVar2);
      if (CONCAT44(uStack_44,uStack_48) == 0) {
code_r0x0013767d:
        (*(code *)PTR__RNvNtCs4NRVxsYgnAr_4core6option13unwrap_failed_001d30c0)(&UNK_001cf540);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uStack_58 = uStack_38;
      uStack_68 = uStack_48;
      uStack_64 = uStack_44;
      uStack_60 = uStack_40;
      uStack_5c = uStack_3c;
      plVar3 = (long *)CONCAT44(uStack_44,uStack_48);
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc7context5InnerE9drop_slowCs1oEx7o4003C_14extension_host
                  (&uStack_68);
      }
    }
    else if (uVar12 != 3) {
      (*(code *)PTR__RNvNtCs4NRVxsYgnAr_4core9panicking5panic_001d3030)
                (&UNK_00114100,0x28,&UNK_001cf528);
      goto code_r0x0013767d;
    }
  }
  return;
}


