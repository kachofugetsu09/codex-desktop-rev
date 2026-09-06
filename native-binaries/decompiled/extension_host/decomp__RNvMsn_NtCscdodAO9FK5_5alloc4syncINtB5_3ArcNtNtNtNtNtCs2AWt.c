// 0013ab80  undefined _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcNtNtNtNtNtCs2AWtUsOyxgP_3std2os4unix3net6stream10UnixStreamE9drop_slowCs1oEx7o4003C_14extension_host(void)

/* WARNING: Switch with 1 destination removed at 0x0013aba8 */

void _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcNtNtNtNtNtCs2AWtUsOyxgP_3std2os4unix3net6stream10UnixStreamE9drop_slowCs1oEx7o4003C_14extension_host
               (long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  (*(code *)PTR_close_001d31a8)(*(undefined4 *)(lVar2 + 0x10));
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (long *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_free_001d3ad8)(lVar2,0x18,8);
      return;
    }
  }
  return;
}


