// 00132f00  undefined _RINvMs0_NtNtNtNtCs2AWtUsOyxgP_3std3sys12thread_local6native4lazyINtB6_7StorageINtNtCs4NRVxsYgnAr_4core4cell4CellINtNtB1j_6option6OptionNtNtNtNtBe_4sync4mpmc7context7ContextEEuE16get_or_init_slowNvNvNvMB2b_B29_4with7CONTEXT27___rust_std_internal_init_fnECs1oEx7o4003C_14extension_host(void)

undefined8 *
_RINvMs0_NtNtNtNtCs2AWtUsOyxgP_3std3sys12thread_local6native4lazyINtB6_7StorageINtNtCs4NRVxsYgnAr_4core4cell4CellINtNtB1j_6option6OptionNtNtNtNtBe_4sync4mpmc7context7ContextEEuE16get_or_init_slowNvNvNvMB2b_B29_4with7CONTEXT27___rust_std_internal_init_fnECs1oEx7o4003C_14extension_host
          (undefined8 *param_1,int *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long *plStack_10;
  
  if (*(char *)(param_1 + 1) != '\0') {
    if (*(char *)(param_1 + 1) == '\x01') {
      return param_1;
    }
    return (undefined8 *)0x0;
  }
  if (param_2 != (int *)0x0) {
    param_2[0] = 0;
    param_2[1] = 0;
    if (*param_2 == 1) {
      *param_1 = *(undefined8 *)(param_2 + 2);
      *(undefined1 *)(param_1 + 1) = 1;
      goto code_r0x00132f3b;
    }
  }
  uVar2 = (*(code *)PTR__RNvMNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc7contextNtB2_7Context3new_001d3028)()
  ;
  cVar1 = *(char *)(param_1 + 1);
  plStack_10 = (long *)*param_1;
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = 1;
  if (cVar1 == '\x01') {
    if (plStack_10 == (long *)0x0) {
      return param_1;
    }
    LOCK();
    *plStack_10 = *plStack_10 + -1;
    UNLOCK();
    if (*plStack_10 == 0) {
      _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc7context5InnerE9drop_slowCs1oEx7o4003C_14extension_host
                (&plStack_10);
      return param_1;
    }
    return param_1;
  }
  if (cVar1 == '\x02') {
    (*(code *)PTR__RNvNtCs4NRVxsYgnAr_4core9panicking5panic_001d3030)
              (anon_d17b1c48995d123d9a2d802b565773f8_0_llvm_18402832646499948387,0x28,
               anon_d17b1c48995d123d9a2d802b565773f8_2_llvm_18402832646499948387);
  }
code_r0x00132f3b:
  (*(code *)
    PTR__RNvNtNtNtNtCs2AWtUsOyxgP_3std3sys12thread_local11destructors10linux_like8register_001d3020)
            (param_1,
             _RINvNtNtNtNtCs2AWtUsOyxgP_3std3sys12thread_local6native4lazy7destroyINtNtCs4NRVxsYgnAr_4core4cell4CellINtNtB19_6option6OptionNtNtNtNtBa_4sync4mpmc7context7ContextEEECs1oEx7o4003C_14extension_host_llvm_18402832646499948387
            );
  return param_1;
}


