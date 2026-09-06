// 00134be0  undefined _RNvXsi_NtNtCs2AWtUsOyxgP_3std4sync4mpmcINtB5_8ReceiverNtNtCs6f2BchxFEfg_14extension_host13client_writer17ClientWriterEventENtNtNtCs4NRVxsYgnAr_4core3ops4drop4Drop4dropCs1oEx7o4003C_14extension_host(void)

/* WARNING: Switch with 1 destination removed at 0x0014796c */
/* WARNING: Switch with 1 destination removed at 0x00147ab8 */
/* WARNING: Switch with 1 destination removed at 0x00147e85 */

void _RNvXsi_NtNtCs2AWtUsOyxgP_3std4sync4mpmcINtB5_8ReceiverNtNtCs6f2BchxFEfg_14extension_host13client_writer17ClientWriterEventENtNtNtCs4NRVxsYgnAr_4core3ops4drop4Drop4dropCs1oEx7o4003C_14extension_host
               (long *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong *puVar12;
  ulong uVar13;
  uint uVar14;
  bool bVar15;
  
  plVar11 = param_1 + 1;
  if (*param_1 == 0) {
    puVar12 = (ulong *)*plVar11;
    LOCK();
    puVar1 = puVar12 + 0x41;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (*puVar1 == 0) {
      uVar6 = puVar12[0x10];
      do {
        LOCK();
        uVar4 = puVar12[0x10];
        bVar15 = uVar6 == uVar4;
        if (bVar15) {
          puVar12[0x10] = uVar6 | puVar12[0x32];
          uVar4 = uVar6;
        }
        UNLOCK();
        uVar6 = uVar4;
      } while (!bVar15);
      uVar6 = puVar12[0x32];
      if ((uVar6 & uVar4) == 0) {
        _RNvMs0_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5wakerNtB5_9SyncWaker10disconnect_llvm_5286960656326560824
                  (puVar12 + 0x20);
        uVar6 = puVar12[0x32];
      }
      puVar3 = PTR__RNvNtNtCs2AWtUsOyxgP_3std6thread9functions9yield_now_001d3100;
      uVar9 = ~uVar6;
      uVar14 = 0;
      uVar13 = *puVar12;
      while( true ) {
        while( true ) {
          uVar6 = uVar6 - 1 & uVar13;
          uVar2 = *(ulong *)(puVar12[0x33] + uVar6 * 0x10);
          if (uVar13 + 1 != uVar2) break;
          if (uVar6 + 1 < puVar12[0x30]) {
            uVar6 = puVar12[0x32];
            uVar13 = uVar2;
          }
          else {
            uVar13 = (uVar13 & -puVar12[0x31]) + puVar12[0x31];
            uVar6 = puVar12[0x32];
          }
        }
        if ((uVar4 & uVar9) == uVar13) break;
        if (uVar14 < 7) {
          if (uVar14 != 0) {
            uVar7 = uVar14 * uVar14;
            uVar5 = uVar7 & 5;
            if (7 < uVar7) {
              uVar7 = uVar7 & 0x38;
              do {
                uVar7 = uVar7 - 8;
              } while (uVar7 != 0);
              if (uVar5 == 0) goto code_r0x00147c49;
            }
            do {
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
        }
        else {
          (*(code *)puVar3)();
        }
code_r0x00147c49:
        uVar14 = uVar14 + 1;
        uVar6 = puVar12[0x32];
      }
      LOCK();
      uVar6 = puVar12[0x42];
      *(char *)(puVar12 + 0x42) = '\x01';
      UNLOCK();
      if ((char)uVar6 != '\0') {
        if (puVar12[0x34] != 0) {
          (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_001d3048)
                    (puVar12[0x33],puVar12[0x34] << 4,8);
        }
        _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5waker5WakerECs1oEx7o4003C_14extension_host_llvm_644012735571134924
                  (puVar12 + 0x21);
        _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5waker5WakerECs1oEx7o4003C_14extension_host_llvm_644012735571134924
                  (puVar12 + 0x29);
        uVar10 = 0x280;
        uVar8 = 0x80;
        goto _RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc;
      }
    }
    return;
  }
  if ((int)*param_1 == 1) {
    puVar12 = (ulong *)*plVar11;
    LOCK();
    puVar1 = puVar12 + 0x31;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (*puVar1 == 0) {
      _RNvMs1_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc4listINtB5_7ChannelNtNtCs6f2BchxFEfg_14extension_host13client_writer17ClientWriterEventE20disconnect_receiversCs1oEx7o4003C_14extension_host
                (puVar12);
      LOCK();
      uVar6 = puVar12[0x32];
      *(char *)(puVar12 + 0x32) = '\x01';
      puVar3 = PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_001d3048;
      UNLOCK();
      if ((char)uVar6 != '\0') {
        uVar6 = puVar12[0x10];
        uVar4 = puVar12[1];
        for (uVar13 = *puVar12 & 0xfffffffffffffffe; uVar13 != (uVar6 & 0xfffffffffffffffe);
            uVar13 = uVar13 + 2) {
          uVar9 = uVar4;
          if ((~(uint)uVar13 & 0x3e) == 0) {
            uVar9 = *(ulong *)(uVar4 + 0x1f0);
            (*(code *)puVar3)(uVar4,0x1f8,8);
          }
          uVar4 = uVar9;
        }
        if (uVar4 != 0) {
          (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_001d3048)(uVar4,0x1f8,8);
        }
        _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5waker5WakerECs1oEx7o4003C_14extension_host_llvm_644012735571134924
                  (puVar12 + 0x21);
        uVar10 = 0x200;
        uVar8 = 0x80;
_RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc:
        (*(code *)PTR_free_001d3ad8)(puVar12,uVar10,uVar8);
        return;
      }
    }
    return;
  }
  puVar12 = (ulong *)*plVar11;
  LOCK();
  puVar1 = puVar12 + 0xf;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if (*puVar1 == 0) {
    _RNvMs1_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc4zeroINtB5_7ChannelNtNtCs6f2BchxFEfg_14extension_host13client_writer17ClientWriterEventE10disconnectCs1oEx7o4003C_14extension_host
              (puVar12);
    LOCK();
    uVar6 = puVar12[0x10];
    *(char *)(puVar12 + 0x10) = '\x01';
    UNLOCK();
    if ((char)uVar6 != '\0') {
      _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5waker5WakerECs1oEx7o4003C_14extension_host_llvm_644012735571134924
                (puVar12 + 1);
      _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5waker5WakerECs1oEx7o4003C_14extension_host_llvm_644012735571134924
                (puVar12 + 7);
      uVar10 = 0x88;
      uVar8 = 8;
      goto _RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc;
    }
  }
  return;
}


