// 0013aa90  undefined _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcINtNtNtNtCs2AWtUsOyxgP_3std4sync6poison5mutex5MutexNtNtNtCs6f2BchxFEfg_14extension_host9transport5stdio11StdioWriterEE9drop_slowCs1oEx7o4003C_14extension_host(void)

/* WARNING: Switch with 1 destination removed at 0x0013aaaa */

void _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcINtNtNtNtCs2AWtUsOyxgP_3std4sync6poison5mutex5MutexNtNtNtCs6f2BchxFEfg_14extension_host9transport5stdio11StdioWriterEE9drop_slowCs1oEx7o4003C_14extension_host
               (long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (long *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_free_001d3ad8)(lVar2,0x20,8);
      return;
    }
  }
  return;
}


