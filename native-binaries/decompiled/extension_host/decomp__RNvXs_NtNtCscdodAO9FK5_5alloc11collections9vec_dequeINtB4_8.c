// 00134a00  undefined _RNvXs_NtNtCscdodAO9FK5_5alloc11collections9vec_dequeINtB4_8VecDequeINtNtB8_4sync3ArcShEENtNtNtCs4NRVxsYgnAr_4core3ops4drop4Drop4dropCs1oEx7o4003C_14extension_host(void)

/* WARNING: Removing unreachable block (ram,0x00134a57) */

void _RNvXs_NtNtCscdodAO9FK5_5alloc11collections9vec_dequeINtB4_8VecDequeINtNtB8_4sync3ArcShEENtNtNtCs4NRVxsYgnAr_4core3ops4drop4Drop4dropCs1oEx7o4003C_14extension_host
               (ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  uVar1 = param_1[3];
  if (uVar1 != 0) {
    uVar2 = param_1[2];
    uVar3 = *param_1;
    puVar4 = (undefined8 *)param_1[1];
    uVar6 = uVar3;
    if (uVar2 < uVar3) {
      uVar6 = 0;
    }
    lVar8 = uVar2 - uVar6;
    uVar9 = uVar3 - lVar8;
    uVar7 = lVar8 + uVar1;
    if (uVar9 < uVar1) {
      uVar7 = uVar3;
    }
    if (uVar7 - lVar8 != 0) {
      lVar10 = 1 - (uVar7 - lVar8);
      lVar8 = uVar2 * 0x10 + uVar6 * -0x10;
      do {
        plVar5 = *(long **)((long)puVar4 + lVar8);
        LOCK();
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcShE9drop_slowCs1oEx7o4003C_14extension_host
                    ((long)puVar4 + lVar8);
        }
        lVar10 = lVar10 + 1;
        lVar8 = lVar8 + 0x10;
      } while (lVar10 != 1);
    }
    if (uVar9 < uVar1) {
      lVar8 = (uVar9 - uVar1) + 1;
      do {
        plVar5 = (long *)*puVar4;
        LOCK();
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcShE9drop_slowCs1oEx7o4003C_14extension_host
                    (puVar4);
        }
        lVar8 = lVar8 + 1;
        puVar4 = puVar4 + 2;
      } while (lVar8 != 1);
    }
  }
  return;
}


