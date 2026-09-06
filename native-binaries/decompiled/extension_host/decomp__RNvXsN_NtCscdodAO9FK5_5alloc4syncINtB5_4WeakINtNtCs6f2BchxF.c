// 0013abe0  undefined _RNvXsN_NtCscdodAO9FK5_5alloc4syncINtB5_4WeakINtNtCs6f2BchxFEfg_14extension_host13client_writer25ClientWriterRegistryInnerNtNtNtBL_9transport4unix16UnixSocketWriterEENtNtNtCs4NRVxsYgnAr_4core3ops4drop4Drop4dropCs1oEx7o4003C_14extension_host(void)

/* WARNING: Switch with 1 destination removed at 0x0013abfa */

void _RNvXsN_NtCscdodAO9FK5_5alloc4syncINtB5_4WeakINtNtCs6f2BchxFEfg_14extension_host13client_writer25ClientWriterRegistryInnerNtNtNtBL_9transport4unix16UnixSocketWriterEENtNtNtCs4NRVxsYgnAr_4core3ops4drop4Drop4dropCs1oEx7o4003C_14extension_host
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
      (*(code *)PTR_free_001d3ad8)(lVar2,0x78,8);
      return;
    }
  }
  return;
}


