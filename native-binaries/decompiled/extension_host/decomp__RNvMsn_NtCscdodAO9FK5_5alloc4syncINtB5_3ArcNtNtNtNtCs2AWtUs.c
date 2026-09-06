// 0013ab00  undefined _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc7context5InnerE9drop_slowCs1oEx7o4003C_14extension_host(void)

/* WARNING: Switch with 1 destination removed at 0x0013ab3c */

void _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc7context5InnerE9drop_slowCs1oEx7o4003C_14extension_host
               (long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_1;
  plVar2 = *(long **)(lVar1 + 0x10);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    (*(code *)
      PTR__RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcNtNtNtCs2AWtUsOyxgP_3std6thread6thread5InnerNtNtBL_5alloc6SystemE9drop_slowBL__001d3140
    )(lVar1 + 0x10);
  }
  if (lVar1 != -1) {
    LOCK();
    plVar2 = (long *)(lVar1 + 8);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_free_001d3ad8)(lVar1,0x30,8);
      return;
    }
  }
  return;
}


