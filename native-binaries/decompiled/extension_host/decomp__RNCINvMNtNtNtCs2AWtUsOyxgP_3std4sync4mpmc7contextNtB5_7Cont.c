// 0013afe0  undefined _RNCINvMNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc7contextNtB5_7Context4withNCNvMs1_NtB7_4zeroINtB1b_7ChannelNtNtCs6f2BchxFEfg_14extension_host13client_writer17ClientWriterEventE4send0INtNtCs4NRVxsYgnAr_4core6result6ResultuINtNtB7_5error16SendTimeoutErrorB1A_EEEs0_0Cs1oEx7o4003C_14extension_host(void)

undefined8
_RNCINvMNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc7contextNtB5_7Context4withNCNvMs1_NtB7_4zeroINtB1b_7ChannelNtNtCs6f2BchxFEfg_14extension_host13client_writer17ClientWriterEventE4send0INtNtCs4NRVxsYgnAr_4core6result6ResultuINtNtB7_5error16SendTimeoutErrorB1A_EEEs0_0Cs1oEx7o4003C_14extension_host
          (undefined4 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  char cStack_20;
  undefined3 uStack_1f;
  undefined1 uStack_1c;
  undefined3 uStack_1b;
  
  plStack_50 = (long *)(*(code *)
                         PTR__RNvMNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc7contextNtB2_7Context3new_001d3028
                       )();
  cStack_20 = *(char *)(param_1 + 10);
  *(undefined1 *)(param_1 + 10) = 2;
  if (cStack_20 != '\x02') {
    uStack_28 = *(undefined8 *)(param_1 + 8);
    uStack_48 = *param_1;
    uStack_44 = param_1[1];
    uStack_40 = param_1[2];
    uStack_3c = param_1[3];
    uStack_38 = param_1[4];
    uStack_34 = param_1[5];
    uStack_30 = param_1[6];
    uStack_2c = param_1[7];
    uStack_1f = (undefined3)*(undefined4 *)((long)param_1 + 0x29);
    uStack_1c = (undefined1)param_1[0xb];
    uStack_1b = (undefined3)((uint)param_1[0xb] >> 8);
    uVar2 = _RNCNvMs1_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc4zeroINtB7_7ChannelNtNtCs6f2BchxFEfg_14extension_host13client_writer17ClientWriterEventE4send0Cs1oEx7o4003C_14extension_host
                      (&uStack_48,plStack_50);
    LOCK();
    *plStack_50 = *plStack_50 + -1;
    UNLOCK();
    if (*plStack_50 == 0) {
      _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc7context5InnerE9drop_slowCs1oEx7o4003C_14extension_host
                (&plStack_50);
    }
    return uVar2;
  }
  (*(code *)PTR__RNvNtCs4NRVxsYgnAr_4core6option13unwrap_failed_001d30c0)(&UNK_001cf680);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


