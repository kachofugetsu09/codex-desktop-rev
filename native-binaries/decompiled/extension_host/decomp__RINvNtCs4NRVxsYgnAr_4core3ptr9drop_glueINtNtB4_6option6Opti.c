// 0013ac90  undefined _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueINtNtB4_6option6OptionNCNvMs1_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc4zeroINtB15_7ChannelINtNtCscdodAO9FK5_5alloc4sync3ArcNtNtNtCs6f2BchxFEfg_14extension_host9transport4unix18UnixSocketShutdownEE4send0EECs1oEx7o4003C_14extension_host(void)

void _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueINtNtB4_6option6OptionNCNvMs1_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc4zeroINtB15_7ChannelINtNtCscdodAO9FK5_5alloc4sync3ArcNtNtNtCs6f2BchxFEfg_14extension_host9transport4unix18UnixSocketShutdownEE4send0EECs1oEx7o4003C_14extension_host
               (long param_1)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  char cVar4;
  
  if (*(char *)(param_1 + 0x28) != '\x02') {
    plVar2 = *(long **)(param_1 + 8);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcNtNtNtCs6f2BchxFEfg_14extension_host9transport4unix18UnixSocketShutdownE9drop_slowCs1oEx7o4003C_14extension_host
                (param_1 + 8);
    }
    piVar3 = *(int **)(param_1 + 0x20);
    if ((*(char *)(param_1 + 0x28) == '\0') &&
       ((*(ulong *)
          PTR__RNvNtNtCs2AWtUsOyxgP_3std9panicking11panic_count18GLOBAL_PANIC_COUNT_001d3058 &
        0x7fffffffffffffff) != 0)) {
      cVar4 = (*(code *)
                PTR__RNvNtNtCs2AWtUsOyxgP_3std9panicking11panic_count17is_zero_slow_path_001d3068)()
      ;
      if (cVar4 == '\0') {
        *(undefined1 *)(piVar3 + 1) = 1;
      }
    }
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = 0;
    UNLOCK();
    if (iVar1 == 2) {
      (*(code *)PTR__RNvMNtNtNtNtCs2AWtUsOyxgP_3std3sys4sync5mutex5futexNtB2_5Mutex4wake_001d3060)
                (piVar3);
      return;
    }
  }
  return;
}


