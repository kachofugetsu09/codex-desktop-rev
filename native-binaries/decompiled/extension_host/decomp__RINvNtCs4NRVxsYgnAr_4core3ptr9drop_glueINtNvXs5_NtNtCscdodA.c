// 00133600  undefined _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueINtNvXs5_NtNtCscdodAO9FK5_5alloc3vec5drainINtBK_5DrainppENtNtNtB4_3ops4drop4Drop4drop9DropGuardNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5waker5EntryNtNtBO_5alloc6GlobalEECs1oEx7o4003C_14extension_host(void)

void _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueINtNvXs5_NtNtCscdodAO9FK5_5alloc3vec5drainINtBK_5DrainppENtNtNtB4_3ops4drop4Drop4drop9DropGuardNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5waker5EntryNtNtBO_5alloc6GlobalEECs1oEx7o4003C_14extension_host
               (long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(lVar1 + 0x10);
    if (*(long *)(param_1 + 0x18) != lVar2) {
      (*(code *)PTR_memmove_001d3070)
                (*(long *)(lVar1 + 8) + lVar2 * 0x18,
                 *(long *)(lVar1 + 8) + *(long *)(param_1 + 0x18) * 0x18,lVar3 * 0x18);
      lVar3 = *(long *)(param_1 + 0x20);
    }
    *(long *)(lVar1 + 0x10) = lVar3 + lVar2;
  }
  return;
}


