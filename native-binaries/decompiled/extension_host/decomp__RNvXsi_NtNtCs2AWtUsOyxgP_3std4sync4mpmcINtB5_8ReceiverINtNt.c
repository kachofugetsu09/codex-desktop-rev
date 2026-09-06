// 00134b90  undefined _RNvXsi_NtNtCs2AWtUsOyxgP_3std4sync4mpmcINtB5_8ReceiverINtNtCscdodAO9FK5_5alloc4sync3ArcNtNtNtCs6f2BchxFEfg_14extension_host9transport4unix18UnixSocketShutdownEENtNtNtCs4NRVxsYgnAr_4core3ops4drop4Drop4dropCs1oEx7o4003C_14extension_host(void)

/* WARNING: Switch with 1 destination removed at 0x00147846 */
/* WARNING: Switch with 1 destination removed at 0x00147a28 */
/* WARNING: Switch with 1 destination removed at 0x00147e85 */

void _RNvXsi_NtNtCs2AWtUsOyxgP_3std4sync4mpmcINtB5_8ReceiverINtNtCscdodAO9FK5_5alloc4sync3ArcNtNtNtCs6f2BchxFEfg_14extension_host9transport4unix18UnixSocketShutdownEENtNtNtCs4NRVxsYgnAr_4core3ops4drop4Drop4dropCs1oEx7o4003C_14extension_host
               (long *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  
  plVar8 = param_1 + 1;
  if (*param_1 == 0) {
    puVar10 = (ulong *)*plVar8;
    LOCK();
    puVar1 = puVar10 + 0x41;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (*puVar1 == 0) {
      _RNvMs_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5arrayINtB4_7ChannelINtNtCscdodAO9FK5_5alloc4sync3ArcNtNtNtCs6f2BchxFEfg_14extension_host9transport4unix18UnixSocketShutdownEE20disconnect_receiversCs1oEx7o4003C_14extension_host
                (puVar10);
      LOCK();
      uVar3 = puVar10[0x42];
      *(char *)(puVar10 + 0x42) = '\x01';
      UNLOCK();
      if ((char)uVar3 != '\0') {
        if (puVar10[0x34] != 0) {
          (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_001d3048)
                    (puVar10[0x33],puVar10[0x34] << 4,8);
        }
        _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5waker5WakerECs1oEx7o4003C_14extension_host_llvm_644012735571134924
                  (puVar10 + 0x21);
        _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5waker5WakerECs1oEx7o4003C_14extension_host_llvm_644012735571134924
                  (puVar10 + 0x29);
        uVar6 = 0x280;
        uVar5 = 0x80;
        goto _RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc;
      }
    }
    return;
  }
  if ((int)*param_1 == 1) {
    puVar10 = (ulong *)*plVar8;
    LOCK();
    puVar1 = puVar10 + 0x31;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (*puVar1 == 0) {
      _RNvMs1_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc4listINtB5_7ChannelINtNtCscdodAO9FK5_5alloc4sync3ArcNtNtNtCs6f2BchxFEfg_14extension_host9transport4unix18UnixSocketShutdownEE20disconnect_receiversCs1oEx7o4003C_14extension_host
                (puVar10);
      LOCK();
      uVar3 = puVar10[0x32];
      *(char *)(puVar10 + 0x32) = '\x01';
      puVar4 = PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_001d3048;
      UNLOCK();
      if ((char)uVar3 != '\0') {
        uVar3 = puVar10[0x10];
        uVar2 = puVar10[1];
        for (uVar12 = *puVar10 & 0xfffffffffffffffe; uVar12 != (uVar3 & 0xfffffffffffffffe);
            uVar12 = uVar12 + 2) {
          uVar7 = (uint)(uVar12 >> 1) & 0x1f;
          if (uVar7 == 0x1f) {
            uVar11 = *(ulong *)(uVar2 + 0x1f0);
            (*(code *)puVar4)(uVar2,0x1f8,8);
          }
          else {
            uVar9 = (ulong)(uVar7 << 4);
            plVar8 = *(long **)(uVar2 + uVar9);
            LOCK();
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            uVar11 = uVar2;
            if (*plVar8 == 0) {
              _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcNtNtNtCs6f2BchxFEfg_14extension_host9transport4unix18UnixSocketShutdownE9drop_slowCs1oEx7o4003C_14extension_host
                        (uVar9 + uVar2);
            }
          }
          uVar2 = uVar11;
        }
        if (uVar2 != 0) {
          (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_001d3048)(uVar2,0x1f8,8);
        }
        _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5waker5WakerECs1oEx7o4003C_14extension_host_llvm_644012735571134924
                  (puVar10 + 0x21);
        uVar6 = 0x200;
        uVar5 = 0x80;
_RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc:
        (*(code *)PTR_free_001d3ad8)(puVar10,uVar6,uVar5);
        return;
      }
    }
    return;
  }
  puVar10 = (ulong *)*plVar8;
  LOCK();
  puVar1 = puVar10 + 0xf;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if (*puVar1 == 0) {
    _RNvMs1_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc4zeroINtB5_7ChannelNtNtCs6f2BchxFEfg_14extension_host13client_writer17ClientWriterEventE10disconnectCs1oEx7o4003C_14extension_host
              (puVar10);
    LOCK();
    uVar3 = puVar10[0x10];
    *(char *)(puVar10 + 0x10) = '\x01';
    UNLOCK();
    if ((char)uVar3 != '\0') {
      _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5waker5WakerECs1oEx7o4003C_14extension_host_llvm_644012735571134924
                (puVar10 + 1);
      _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5waker5WakerECs1oEx7o4003C_14extension_host_llvm_644012735571134924
                (puVar10 + 7);
      uVar6 = 0x88;
      uVar5 = 8;
      goto _RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc;
    }
  }
  return;
}


