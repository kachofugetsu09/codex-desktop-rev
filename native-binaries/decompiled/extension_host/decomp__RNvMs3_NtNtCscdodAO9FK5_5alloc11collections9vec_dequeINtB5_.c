// 00133be0  undefined _RNvMs3_NtNtCscdodAO9FK5_5alloc11collections9vec_dequeINtB5_8VecDequeINtNtB9_4sync3ArcShEE8truncateCs1oEx7o4003C_14extension_host(void)

void _RNvMs3_NtNtCscdodAO9FK5_5alloc11collections9vec_dequeINtB5_8VecDequeINtNtB9_4sync3ArcShEE8truncateCs1oEx7o4003C_14extension_host
               (ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  uVar1 = param_1[3];
  if (param_2 < uVar1) {
    uVar2 = param_1[2];
    uVar6 = *param_1;
    puVar5 = (undefined8 *)param_1[1];
    uVar4 = uVar6;
    if (uVar2 < uVar6) {
      uVar4 = 0;
    }
    lVar7 = uVar2 - uVar4;
    uVar9 = uVar6 - lVar7;
    uVar8 = uVar1 - uVar9;
    if (uVar1 < uVar9) {
      uVar8 = 0;
    }
    uVar10 = lVar7 + uVar1;
    if (uVar1 >= uVar9 && uVar1 - uVar9 != 0) {
      uVar10 = uVar6;
    }
    uVar10 = uVar10 - lVar7;
    param_1[3] = param_2;
    uVar6 = param_2 - uVar10;
    if (param_2 < uVar10 || uVar6 == 0) {
      if (uVar6 != 0) {
        lVar7 = uVar6 + 1;
        lVar11 = param_2 * 0x10 + uVar2 * 0x10 + uVar4 * -0x10;
        do {
          plVar3 = *(long **)((long)puVar5 + lVar11);
          LOCK();
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcShE9drop_slowCs1oEx7o4003C_14extension_host
                      ((long)puVar5 + lVar11);
          }
          lVar7 = lVar7 + 1;
          lVar11 = lVar11 + 0x10;
        } while (lVar7 != 1);
      }
      if (uVar9 < uVar1) {
        lVar7 = (uVar10 - uVar1) + 1;
        do {
          plVar3 = (long *)*puVar5;
          LOCK();
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcShE9drop_slowCs1oEx7o4003C_14extension_host
                      (puVar5);
          }
          lVar7 = lVar7 + 1;
          puVar5 = puVar5 + 2;
        } while (lVar7 != 1);
      }
    }
    else if (uVar8 != uVar6) {
      lVar7 = (param_2 - uVar1) + 1;
      puVar5 = puVar5 + uVar10 * -2 + param_2 * 2;
      do {
        plVar3 = (long *)*puVar5;
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcShE9drop_slowCs1oEx7o4003C_14extension_host
                    (puVar5);
        }
        lVar7 = lVar7 + 1;
        puVar5 = puVar5 + 2;
      } while (lVar7 != 1);
    }
  }
  return;
}


