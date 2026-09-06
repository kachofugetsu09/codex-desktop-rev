// 00134810  undefined _RNvXs4_NtNtCs2AWtUsOyxgP_3std4sync4mpmcINtB5_6SenderNtNtCs6f2BchxFEfg_14extension_host13client_writer17ClientWriterEventENtNtNtCs4NRVxsYgnAr_4core3ops4drop4Drop4dropCs1oEx7o4003C_14extension_host(void)

/* WARNING: Switch with 1 destination removed at 0x00147614 */
/* WARNING: Switch with 1 destination removed at 0x00147778 */
/* WARNING: Switch with 1 destination removed at 0x00147e85 */

void _RNvXs4_NtNtCs2AWtUsOyxgP_3std4sync4mpmcINtB5_6SenderNtNtCs6f2BchxFEfg_14extension_host13client_writer17ClientWriterEventENtNtNtCs4NRVxsYgnAr_4core3ops4drop4Drop4dropCs1oEx7o4003C_14extension_host
               (long *param_1)

{
  ulong *puVar1;
  char cVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  bool bVar12;
  
  plVar8 = param_1 + 1;
  if (*param_1 == 0) {
    puVar10 = (ulong *)*plVar8;
    LOCK();
    puVar1 = puVar10 + 0x40;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (*puVar1 == 0) {
      uVar4 = puVar10[0x10];
      do {
        LOCK();
        uVar5 = puVar10[0x10];
        bVar12 = uVar4 == uVar5;
        if (bVar12) {
          puVar10[0x10] = uVar4 | puVar10[0x32];
          uVar5 = uVar4;
        }
        UNLOCK();
        uVar4 = uVar5;
      } while (!bVar12);
      if ((puVar10[0x32] & uVar5) == 0) {
        _RNvMs0_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5wakerNtB5_9SyncWaker10disconnect_llvm_5286960656326560824
                  (puVar10 + 0x28);
        LOCK();
        cVar2 = (char)puVar10[0x42];
        *(char *)(puVar10 + 0x42) = '\x01';
        UNLOCK();
      }
      else {
        LOCK();
        cVar2 = (char)puVar10[0x42];
        *(char *)(puVar10 + 0x42) = '\x01';
        UNLOCK();
      }
      if (cVar2 != '\0') {
        if (puVar10[0x34] != 0) {
          (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_001d3048)
                    (puVar10[0x33],puVar10[0x34] << 4,8);
        }
        _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5waker5WakerECs1oEx7o4003C_14extension_host_llvm_644012735571134924
                  (puVar10 + 0x21);
        _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5waker5WakerECs1oEx7o4003C_14extension_host_llvm_644012735571134924
                  (puVar10 + 0x29);
        uVar7 = 0x280;
        uVar6 = 0x80;
        goto _RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc;
      }
    }
    return;
  }
  if ((int)*param_1 == 1) {
    puVar10 = (ulong *)*plVar8;
    LOCK();
    puVar1 = puVar10 + 0x30;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (*puVar1 == 0) {
      LOCK();
      puVar1 = puVar10 + 0x10;
      uVar4 = *puVar1;
      *puVar1 = *puVar1 | 1;
      UNLOCK();
      if ((uVar4 & 1) == 0) {
        _RNvMs0_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5wakerNtB5_9SyncWaker10disconnect_llvm_13085812190131402244
                  (puVar10 + 0x20);
        LOCK();
        cVar2 = (char)puVar10[0x32];
        *(char *)(puVar10 + 0x32) = '\x01';
        UNLOCK();
        pcVar3 = (code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_001d3048;
      }
      else {
        LOCK();
        cVar2 = (char)puVar10[0x32];
        *(char *)(puVar10 + 0x32) = '\x01';
        UNLOCK();
        pcVar3 = (code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_001d3048;
      }
      PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_001d3048 = pcVar3;
      if (cVar2 != '\0') {
        uVar4 = puVar10[0x10];
        uVar5 = puVar10[1];
        for (uVar11 = *puVar10 & 0xfffffffffffffffe; uVar11 != (uVar4 & 0xfffffffffffffffe);
            uVar11 = uVar11 + 2) {
          uVar9 = uVar5;
          if ((~(uint)uVar11 & 0x3e) == 0) {
            uVar9 = *(ulong *)(uVar5 + 0x1f0);
            (*pcVar3)(uVar5,0x1f8,8);
          }
          uVar5 = uVar9;
        }
        if (uVar5 != 0) {
          (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_001d3048)(uVar5,0x1f8,8);
        }
        _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5waker5WakerECs1oEx7o4003C_14extension_host_llvm_644012735571134924
                  (puVar10 + 0x21);
        uVar7 = 0x200;
        uVar6 = 0x80;
_RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc:
        (*(code *)PTR_free_001d3ad8)(puVar10,uVar7,uVar6);
        return;
      }
    }
    return;
  }
  puVar10 = (ulong *)*plVar8;
  LOCK();
  puVar1 = puVar10 + 0xe;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if (*puVar1 == 0) {
    _RNvMs1_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc4zeroINtB5_7ChannelNtNtCs6f2BchxFEfg_14extension_host13client_writer17ClientWriterEventE10disconnectCs1oEx7o4003C_14extension_host
              (puVar10);
    LOCK();
    uVar4 = puVar10[0x10];
    *(char *)(puVar10 + 0x10) = '\x01';
    UNLOCK();
    if ((char)uVar4 != '\0') {
      _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5waker5WakerECs1oEx7o4003C_14extension_host_llvm_644012735571134924
                (puVar10 + 1);
      _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5waker5WakerECs1oEx7o4003C_14extension_host_llvm_644012735571134924
                (puVar10 + 7);
      uVar7 = 0x88;
      uVar6 = 8;
      goto _RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc;
    }
  }
  return;
}


