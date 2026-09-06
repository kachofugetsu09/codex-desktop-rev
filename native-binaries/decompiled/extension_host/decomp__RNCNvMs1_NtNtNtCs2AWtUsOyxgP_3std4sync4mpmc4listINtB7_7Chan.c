// 00134df0  undefined _RNCNvMs1_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc4listINtB7_7ChannelINtNtCscdodAO9FK5_5alloc4sync3ArcNtNtNtCs6f2BchxFEfg_14extension_host9transport4unix18UnixSocketShutdownEE4recvs_0Cs1oEx7o4003C_14extension_host(void)

void _RNCNvMs1_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc4listINtB7_7ChannelINtNtCscdodAO9FK5_5alloc4sync3ArcNtNtNtCs6f2BchxFEfg_14extension_host9transport4unix18UnixSocketShutdownEE4recvs_0Cs1oEx7o4003C_14extension_host
               (undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  bool bVar14;
  undefined1 auVar15 [12];
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
  puVar3 = (ulong *)param_1[1];
  _RNvMs0_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5wakerNtB5_9SyncWaker8register
            (puVar3 + 0x20,uVar2,param_2);
  if ((1 < (puVar3[0x10] ^ *puVar3)) || ((puVar3[0x10] & 1) != 0)) {
    LOCK();
    if (*(long *)(param_2 + 0x18) == 0) {
      *(long *)(param_2 + 0x18) = 1;
    }
    UNLOCK();
  }
  puVar9 = PTR__RNvMs_NtNtCs2AWtUsOyxgP_3std6thread6threadNtB4_6Thread4park_001d30e8;
  puVar8 = PTR__RNvMs_NtNtCs2AWtUsOyxgP_3std6thread6threadNtB4_6Thread12park_timeout_001d30d8;
  puVar7 = PTR__RNvMNtCs2AWtUsOyxgP_3std4timeNtB2_7Instant3now_001d30d0;
  uVar1 = *(uint *)((long *)param_1[2] + 1);
  if (uVar1 == 0xffffffff) {
    uVar13 = *(ulong *)(param_2 + 0x18);
    while (uVar13 == 0) {
      (*(code *)puVar9)(param_2 + 0x10);
      uVar13 = *(ulong *)(param_2 + 0x18);
    }
  }
  else {
    lVar4 = *(long *)param_1[2];
    uVar13 = *(ulong *)(param_2 + 0x18);
    while (uVar13 == 0) {
      auVar15 = (*(code *)puVar7)();
      lVar10 = auVar15._0_8_;
      bVar14 = lVar10 < lVar4;
      if (lVar10 == lVar4) {
        bVar14 = auVar15._8_4_ < uVar1;
      }
      if (!bVar14) {
        LOCK();
        uVar12 = *(ulong *)(param_2 + 0x18);
        bVar14 = uVar12 == 0;
        if (bVar14) {
          *(ulong *)(param_2 + 0x18) = 1;
          uVar12 = 0;
        }
        UNLOCK();
        uVar13 = 3;
        if (uVar12 < 3) {
          uVar13 = uVar12;
        }
        if (!bVar14) goto code_r0x00134f34;
        goto code_r0x00134f3e;
      }
      uVar11 = (*(code *)
                 PTR__RNvXs3_NtCs2AWtUsOyxgP_3std4timeNtB5_7InstantNtNtNtCs4NRVxsYgnAr_4core3ops5arith3Sub3sub_001d30e0
               )(lVar4,uVar1,lVar10);
      (*(code *)puVar8)(param_2 + 0x10,uVar11);
      uVar13 = *(ulong *)(param_2 + 0x18);
    }
  }
  if (uVar13 - 1 < 2) {
code_r0x00134f34:
    if (uVar13 - 1 < 2) {
code_r0x00134f3e:
      _RNvMs0_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5wakerNtB5_9SyncWaker10unregister
                (&uStack_48,puVar3 + 0x20,uVar2);
      if (CONCAT44(uStack_44,uStack_48) == 0) {
code_r0x00134fad:
        (*(code *)PTR__RNvNtCs4NRVxsYgnAr_4core6option13unwrap_failed_001d30c0)(&UNK_001cf400);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uStack_58 = uStack_38;
      uStack_68 = uStack_48;
      uStack_64 = uStack_44;
      uStack_60 = uStack_40;
      uStack_5c = uStack_3c;
      plVar6 = (long *)CONCAT44(uStack_44,uStack_48);
      LOCK();
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc7context5InnerE9drop_slowCs1oEx7o4003C_14extension_host
                  (&uStack_68);
      }
    }
    else if (uVar13 != 3) {
      (*(code *)PTR__RNvNtCs4NRVxsYgnAr_4core9panicking5panic_001d3030)
                (&UNK_001140ad,0x28,&UNK_001cf3e8);
      goto code_r0x00134fad;
    }
  }
  return;
}


