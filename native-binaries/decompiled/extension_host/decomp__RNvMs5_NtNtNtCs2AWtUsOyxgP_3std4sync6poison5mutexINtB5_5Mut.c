// 00133ec0  undefined _RNvMs5_NtNtNtCs2AWtUsOyxgP_3std4sync6poison5mutexINtB5_5MutexNtNtNtCs6f2BchxFEfg_14extension_host9transport5stdio11StdioWriterE4lockCs1oEx7o4003C_14extension_host(void)

ulong * _RNvMs5_NtNtNtCs2AWtUsOyxgP_3std4sync6poison5mutexINtB5_5MutexNtNtNtCs6f2BchxFEfg_14extension_host9transport5stdio11StdioWriterE4lockCs1oEx7o4003C_14extension_host
                  (ulong *param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  
  LOCK();
  iVar1 = *param_2;
  if (iVar1 == 0) {
    *param_2 = 1;
  }
  UNLOCK();
  if (iVar1 != 0) {
    (*(code *)
      PTR__RNvMNtNtNtNtCs2AWtUsOyxgP_3std3sys4sync5mutex5futexNtB2_5Mutex14lock_contended_001d30b0)
              (param_2);
  }
  if ((*(ulong *)PTR__RNvNtNtCs2AWtUsOyxgP_3std9panicking11panic_count18GLOBAL_PANIC_COUNT_001d3058
      & 0x7fffffffffffffff) == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = (*(code *)
              PTR__RNvNtNtCs2AWtUsOyxgP_3std9panicking11panic_count17is_zero_slow_path_001d3068)();
    bVar2 = bVar2 ^ 1;
  }
  iVar1 = param_2[1];
  param_1[1] = (ulong)param_2;
  *(byte *)(param_1 + 2) = bVar2;
  *param_1 = (ulong)((char)iVar1 != '\0');
  return param_1;
}


