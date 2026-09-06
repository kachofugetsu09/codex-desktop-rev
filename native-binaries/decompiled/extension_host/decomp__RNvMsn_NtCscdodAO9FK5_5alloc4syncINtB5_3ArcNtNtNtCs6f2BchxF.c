// 0013aac0  undefined _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcNtNtNtCs6f2BchxFEfg_14extension_host9transport4unix18UnixSocketShutdownE9drop_slowCs1oEx7o4003C_14extension_host(void)

/* WARNING: Switch with 1 destination removed at 0x0013aaf2 */

void _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcNtNtNtCs6f2BchxFEfg_14extension_host9transport4unix18UnixSocketShutdownE9drop_slowCs1oEx7o4003C_14extension_host
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
    _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcNtNtNtNtNtCs2AWtUsOyxgP_3std2os4unix3net6stream10UnixStreamE9drop_slowCs1oEx7o4003C_14extension_host
              (lVar1 + 0x10);
  }
  if (lVar1 != -1) {
    LOCK();
    plVar2 = (long *)(lVar1 + 8);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_free_001d3ad8)(lVar1,0x18,8);
      return;
    }
  }
  return;
}


