// 00134780  undefined _RNvXs4_NtNtCs2AWtUsOyxgP_3std4sync4mpmcINtB5_6SenderINtNtCscdodAO9FK5_5alloc4sync3ArcNtNtNtCs6f2BchxFEfg_14extension_host9transport4unix18UnixSocketShutdownEENtNtNtCs4NRVxsYgnAr_4core3ops4drop4Drop4dropCs1oEx7o4003C_14extension_host(void)

/* WARNING: Switch with 1 destination removed at 0x001474ce */
/* WARNING: Switch with 1 destination removed at 0x001476e8 */
/* WARNING: Switch with 1 destination removed at 0x00147e85 */

void _RNvXs4_NtNtCs2AWtUsOyxgP_3std4sync4mpmcINtB5_6SenderINtNtCscdodAO9FK5_5alloc4sync3ArcNtNtNtCs6f2BchxFEfg_14extension_host9transport4unix18UnixSocketShutdownEENtNtNtCs4NRVxsYgnAr_4core3ops4drop4Drop4dropCs1oEx7o4003C_14extension_host
               (long *param_1)

{
  ulong *puVar1;
  char cVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  bool bVar14;
  
  plVar9 = param_1 + 1;
  if (*param_1 == 0) {
    puVar11 = (ulong *)*plVar9;
    LOCK();
    puVar1 = puVar11 + 0x40;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (*puVar1 == 0) {
      uVar4 = puVar11[0x10];
      do {
        LOCK();
        uVar5 = puVar11[0x10];
        bVar14 = uVar4 == uVar5;
        if (bVar14) {
          puVar11[0x10] = uVar4 | puVar11[0x32];
          uVar5 = uVar4;
        }
        UNLOCK();
        uVar4 = uVar5;
      } while (!bVar14);
      if ((puVar11[0x32] & uVar5) == 0) {
        _RNvMs0_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5wakerNtB5_9SyncWaker10disconnect_llvm_5286960656326560824
                  (puVar11 + 0x28);
        LOCK();
        cVar2 = (char)puVar11[0x42];
        *(char *)(puVar11 + 0x42) = '\x01';
        UNLOCK();
      }
      else {
        LOCK();
        cVar2 = (char)puVar11[0x42];
        *(char *)(puVar11 + 0x42) = '\x01';
        UNLOCK();
      }
      if (cVar2 != '\0') {
        if (puVar11[0x34] != 0) {
          (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_001d3048)
                    (puVar11[0x33],puVar11[0x34] << 4,8);
        }
        _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5waker5WakerECs1oEx7o4003C_14extension_host_llvm_644012735571134924
                  (puVar11 + 0x21);
        _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5waker5WakerECs1oEx7o4003C_14extension_host_llvm_644012735571134924
                  (puVar11 + 0x29);
        uVar7 = 0x280;
        uVar6 = 0x80;
        goto _RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc;
      }
    }
    return;
  }
  if ((int)*param_1 == 1) {
    puVar11 = (ulong *)*plVar9;
    LOCK();
    puVar1 = puVar11 + 0x30;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (*puVar1 == 0) {
      LOCK();
      puVar1 = puVar11 + 0x10;
      uVar4 = *puVar1;
      *puVar1 = *puVar1 | 1;
      UNLOCK();
      if ((uVar4 & 1) == 0) {
        _RNvMs0_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5wakerNtB5_9SyncWaker10disconnect_llvm_13085812190131402244
                  (puVar11 + 0x20);
        LOCK();
        cVar2 = (char)puVar11[0x32];
        *(char *)(puVar11 + 0x32) = '\x01';
        UNLOCK();
        pcVar3 = (code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_001d3048;
      }
      else {
        LOCK();
        cVar2 = (char)puVar11[0x32];
        *(char *)(puVar11 + 0x32) = '\x01';
        UNLOCK();
        pcVar3 = (code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_001d3048;
      }
      PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_001d3048 = pcVar3;
      if (cVar2 != '\0') {
        uVar4 = puVar11[0x10];
        uVar5 = puVar11[1];
        for (uVar13 = *puVar11 & 0xfffffffffffffffe; uVar13 != (uVar4 & 0xfffffffffffffffe);
            uVar13 = uVar13 + 2) {
          uVar8 = (uint)(uVar13 >> 1) & 0x1f;
          if (uVar8 == 0x1f) {
            uVar12 = *(ulong *)(uVar5 + 0x1f0);
            (*pcVar3)(uVar5,0x1f8,8);
          }
          else {
            uVar10 = (ulong)(uVar8 << 4);
            plVar9 = *(long **)(uVar5 + uVar10);
            LOCK();
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            uVar12 = uVar5;
            if (*plVar9 == 0) {
              _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcNtNtNtCs6f2BchxFEfg_14extension_host9transport4unix18UnixSocketShutdownE9drop_slowCs1oEx7o4003C_14extension_host
                        (uVar10 + uVar5);
            }
          }
          uVar5 = uVar12;
        }
        if (uVar5 != 0) {
          (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_001d3048)(uVar5,0x1f8,8);
        }
        _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5waker5WakerECs1oEx7o4003C_14extension_host_llvm_644012735571134924
                  (puVar11 + 0x21);
        uVar7 = 0x200;
        uVar6 = 0x80;
_RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc:
        (*(code *)PTR_free_001d3ad8)(puVar11,uVar7,uVar6);
        return;
      }
    }
    return;
  }
  puVar11 = (ulong *)*plVar9;
  LOCK();
  puVar1 = puVar11 + 0xe;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if (*puVar1 == 0) {
    _RNvMs1_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc4zeroINtB5_7ChannelNtNtCs6f2BchxFEfg_14extension_host13client_writer17ClientWriterEventE10disconnectCs1oEx7o4003C_14extension_host
              (puVar11);
    LOCK();
    uVar4 = puVar11[0x10];
    *(char *)(puVar11 + 0x10) = '\x01';
    UNLOCK();
    if ((char)uVar4 != '\0') {
      _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5waker5WakerECs1oEx7o4003C_14extension_host_llvm_644012735571134924
                (puVar11 + 1);
      _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5waker5WakerECs1oEx7o4003C_14extension_host_llvm_644012735571134924
                (puVar11 + 7);
      uVar7 = 0x88;
      uVar6 = 8;
      goto _RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc;
    }
  }
  return;
}


