// 001338e0  undefined _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5waker9SyncWakerECs1oEx7o4003C_14extension_host.llvm.18402832646499948387(void)

void _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5waker9SyncWakerECs1oEx7o4003C_14extension_host_llvm_18402832646499948387
               (long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueINtNtCscdodAO9FK5_5alloc3vec3VecNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5waker5EntryEECs1oEx7o4003C_14extension_host_llvm_18402832646499948387
            (param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar3 = 1 - *(long *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      plVar2 = *(long **)(lVar1 + lVar4);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc7context5InnerE9drop_slowCs1oEx7o4003C_14extension_host
                  (lVar1 + lVar4);
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x18;
    } while (lVar3 != 1);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_001d3048)
              (lVar1,*(long *)(param_1 + 0x20) * 0x18,8);
    return;
  }
  return;
}


