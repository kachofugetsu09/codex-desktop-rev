// 0013abb0  undefined _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcShE9drop_slowCs1oEx7o4003C_14extension_host(void)

/* WARNING: Switch with 1 destination removed at 0x0013abd6 */

void _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcShE9drop_slowCs1oEx7o4003C_14extension_host
               (long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *param_1;
  if (lVar2 != -1) {
    lVar3 = param_1[1];
    LOCK();
    plVar1 = (long *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if ((*plVar1 == 0) && (uVar4 = lVar3 + 0x17U & 0xfffffffffffffff8, uVar4 != 0)) {
      (*(code *)PTR_free_001d3ad8)(lVar2,uVar4,8);
      return;
    }
  }
  return;
}


