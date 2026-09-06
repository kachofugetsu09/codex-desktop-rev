// 00133920  undefined _RINvNtNtNtNtCs2AWtUsOyxgP_3std3sys12thread_local6native4lazy7destroyINtNtCs4NRVxsYgnAr_4core4cell4CellINtNtB19_6option6OptionNtNtNtNtBa_4sync4mpmc7context7ContextEEECs1oEx7o4003C_14extension_host.llvm.18402832646499948387(void)

undefined8
_RINvNtNtNtNtCs2AWtUsOyxgP_3std3sys12thread_local6native4lazy7destroyINtNtCs4NRVxsYgnAr_4core4cell4CellINtNtB19_6option6OptionNtNtNtNtBa_4sync4mpmc7context7ContextEEECs1oEx7o4003C_14extension_host_llvm_18402832646499948387
          (undefined8 *param_1)

{
  char cVar1;
  long *plVar2;
  undefined8 in_RAX;
  
  cVar1 = *(char *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = 2;
  if ((cVar1 == '\x01') && (plVar2 = (long *)*param_1, plVar2 != (long *)0x0)) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc7context5InnerE9drop_slowCs1oEx7o4003C_14extension_host
                ();
    }
  }
  return in_RAX;
}


