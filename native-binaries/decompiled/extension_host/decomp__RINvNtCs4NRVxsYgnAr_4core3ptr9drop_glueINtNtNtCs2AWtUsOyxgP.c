// 0013ad20  undefined _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueINtNtNtCs2AWtUsOyxgP_3std4sync6poison11PoisonErrorINtNtBE_5mutex10MutexGuardNtNtNtBG_4mpmc4zero5InnerEEECs1oEx7o4003C_14extension_host(void)

void _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueINtNtNtCs2AWtUsOyxgP_3std4sync6poison11PoisonErrorINtNtBE_5mutex10MutexGuardNtNtNtBG_4mpmc4zero5InnerEEECs1oEx7o4003C_14extension_host
               (undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  
  piVar2 = (int *)*param_1;
  if ((*(char *)(param_1 + 1) == '\0') &&
     ((*(ulong *)PTR__RNvNtNtCs2AWtUsOyxgP_3std9panicking11panic_count18GLOBAL_PANIC_COUNT_001d3058
      & 0x7fffffffffffffff) != 0)) {
    cVar3 = (*(code *)
              PTR__RNvNtNtCs2AWtUsOyxgP_3std9panicking11panic_count17is_zero_slow_path_001d3068)();
    if (cVar3 == '\0') {
      *(undefined1 *)(piVar2 + 1) = 1;
    }
  }
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = 0;
  UNLOCK();
  if (iVar1 != 2) {
    return;
  }
  (*(code *)PTR__RNvMNtNtNtNtCs2AWtUsOyxgP_3std3sys4sync5mutex5futexNtB2_5Mutex4wake_001d3060)
            (piVar2);
  return;
}


