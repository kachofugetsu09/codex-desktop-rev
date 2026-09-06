// 0013ad70  undefined _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueINtNtNtNtCs2AWtUsOyxgP_3std4sync6poison5mutex10MutexGuardNtNtNtBI_4mpmc4zero5InnerEECs1oEx7o4003C_14extension_host(void)

void _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueINtNtNtNtCs2AWtUsOyxgP_3std4sync6poison5mutex10MutexGuardNtNtNtBI_4mpmc4zero5InnerEECs1oEx7o4003C_14extension_host
               (int *param_1,byte param_2)

{
  int iVar1;
  char cVar2;
  
  if (((param_2 & 1) == 0) &&
     ((*(ulong *)PTR__RNvNtNtCs2AWtUsOyxgP_3std9panicking11panic_count18GLOBAL_PANIC_COUNT_001d3058
      & 0x7fffffffffffffff) != 0)) {
    cVar2 = (*(code *)
              PTR__RNvNtNtCs2AWtUsOyxgP_3std9panicking11panic_count17is_zero_slow_path_001d3068)();
    if (cVar2 == '\0') {
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  LOCK();
  iVar1 = *param_1;
  *param_1 = 0;
  UNLOCK();
  if (iVar1 != 2) {
    return;
  }
  (*(code *)PTR__RNvMNtNtNtNtCs2AWtUsOyxgP_3std3sys4sync5mutex5futexNtB2_5Mutex4wake_001d3060)();
  return;
}


