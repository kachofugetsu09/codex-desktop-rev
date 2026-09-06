// 001339d0  undefined _RNvMs2_NtNtCs2AWtUsOyxgP_3std4sync4mpmcINtB5_6SenderINtNtCscdodAO9FK5_5alloc4sync3ArcNtNtNtCs6f2BchxFEfg_14extension_host9transport4unix18UnixSocketShutdownEE4sendCs1oEx7o4003C_14extension_host(void)

undefined8
_RNvMs2_NtNtCs2AWtUsOyxgP_3std4sync4mpmcINtB5_6SenderINtNtCscdodAO9FK5_5alloc4sync3ArcNtNtNtCs6f2BchxFEfg_14extension_host9transport4unix18UnixSocketShutdownEE4sendCs1oEx7o4003C_14extension_host
          (long *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if (*param_1 == 0) {
    auVar4 = _RNvMs_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5arrayINtB4_7ChannelINtNtCscdodAO9FK5_5alloc4sync3ArcNtNtNtCs6f2BchxFEfg_14extension_host9transport4unix18UnixSocketShutdownEE4sendCs1oEx7o4003C_14extension_host
                       (param_1[1],param_2,param_3,0xffffffff);
  }
  else {
    if ((int)*param_1 == 1) {
      auVar4 = _RNvMs1_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc4listINtB5_7ChannelINtNtCscdodAO9FK5_5alloc4sync3ArcNtNtNtCs6f2BchxFEfg_14extension_host9transport4unix18UnixSocketShutdownEE4sendCs1oEx7o4003C_14extension_host
                         ();
      lVar2 = auVar4._0_8_;
      goto joined_r0x00133a0b;
    }
    auVar4 = _RNvMs1_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc4zeroINtB5_7ChannelINtNtCscdodAO9FK5_5alloc4sync3ArcNtNtNtCs6f2BchxFEfg_14extension_host9transport4unix18UnixSocketShutdownEE4sendCs1oEx7o4003C_14extension_host
                       ();
  }
  lVar2 = auVar4._0_8_;
joined_r0x00133a0b:
  if (lVar2 == 2) {
    uVar3 = 0;
  }
  else {
    uVar3 = auVar4._8_8_;
    if ((auVar4._0_8_ & 1) == 0) {
      (*(code *)PTR__RNvNtCs4NRVxsYgnAr_4core9panicking5panic_001d3030)
                (anon_d17b1c48995d123d9a2d802b565773f8_0_llvm_18402832646499948387,0x28,
                 anon_d17b1c48995d123d9a2d802b565773f8_9_llvm_18402832646499948387);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  return uVar3;
}


