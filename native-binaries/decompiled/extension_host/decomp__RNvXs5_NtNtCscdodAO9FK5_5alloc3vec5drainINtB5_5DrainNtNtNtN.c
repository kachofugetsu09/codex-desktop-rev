// 001348a0  undefined _RNvXs5_NtNtCscdodAO9FK5_5alloc3vec5drainINtB5_5DrainNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5waker5EntryENtNtNtCs4NRVxsYgnAr_4core3ops4drop4Drop4dropCs1oEx7o4003C_14extension_host(void)

long * _RNvXs5_NtNtCscdodAO9FK5_5alloc3vec5drainINtB5_5DrainNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5waker5EntryENtNtNtCs4NRVxsYgnAr_4core3ops4drop4Drop4dropCs1oEx7o4003C_14extension_host
                 (undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  ulong uVar6;
  long *plVar7;
  long lVar8;
  
  puVar1 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  uVar6 = (long)puVar2 - (long)puVar1;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar6;
  plVar7 = SUB168(auVar5 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  *param_1 = 8;
  param_1[1] = 8;
  if (puVar2 == puVar1) {
    lVar8 = param_1[4];
    if (lVar8 != 0) {
      lVar3 = param_1[2];
      plVar4 = *(long **)(lVar3 + 0x10);
      plVar7 = (long *)param_1[3];
      if (plVar7 != plVar4) {
        plVar7 = (long *)(*(code *)PTR_memmove_001d3070)
                                   (*(long *)(lVar3 + 8) + (long)plVar4 * 0x18,
                                    *(long *)(lVar3 + 8) + (long)plVar7 * 0x18,lVar8 * 0x18);
      }
      *(long *)(lVar3 + 0x10) = (long)plVar4 + lVar8;
    }
  }
  else {
    lVar8 = 1 - uVar6 / 0x18;
    do {
      plVar7 = (long *)*puVar1;
      LOCK();
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        plVar7 = (long *)_RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc7context5InnerE9drop_slowCs1oEx7o4003C_14extension_host
                                   (puVar1);
      }
      lVar8 = lVar8 + 1;
      puVar1 = puVar1 + 3;
    } while (lVar8 != 1);
    lVar8 = param_1[4];
    if (lVar8 != 0) {
      lVar3 = param_1[2];
      plVar7 = (long *)param_1[3];
      plVar4 = *(long **)(lVar3 + 0x10);
      if (plVar7 != plVar4) {
        plVar7 = (long *)(*(code *)PTR_memmove_001d3070)
                                   (*(long *)(lVar3 + 8) + (long)plVar4 * 0x18,
                                    *(long *)(lVar3 + 8) + (long)plVar7 * 0x18,lVar8 * 0x18);
      }
      *(long *)(lVar3 + 0x10) = (long)plVar4 + lVar8;
    }
  }
  return plVar7;
}


