// 0013a620  undefined _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcINtNtCs6f2BchxFEfg_14extension_host13client_writer25ClientWriterRegistryInnerNtNtNtBK_9transport4unix16UnixSocketWriterEE9drop_slowCs1oEx7o4003C_14extension_host(void)

/* WARNING: Switch with 1 destination removed at 0x0013a803 */

void _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcINtNtCs6f2BchxFEfg_14extension_host13client_writer25ClientWriterRegistryInnerNtNtNtBK_9transport4unix16UnixSocketWriterEE9drop_slowCs1oEx7o4003C_14extension_host
               (long *param_1)

{
  char cVar1;
  undefined1 auVar2 [16];
  long lVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 (*pauVar10) [16];
  long lVar11;
  undefined1 (*pauVar12) [16];
  uint uVar13;
  bool bVar14;
  
  lVar3 = *param_1;
  lVar4 = *(long *)(lVar3 + 0x40);
  if (lVar4 != 0) {
    lVar11 = *(long *)(lVar3 + 0x50);
    if (lVar11 != 0) {
      pauVar12 = *(undefined1 (**) [16])(lVar3 + 0x38);
      auVar2 = *pauVar12;
      pauVar10 = pauVar12 + 1;
      uVar13 = ~(uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
      do {
        if ((short)uVar13 == 0) {
          do {
            auVar2 = *pauVar10;
            pauVar12 = pauVar12 + -0x10;
            pauVar10 = pauVar10 + 1;
            uVar13 = (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar13 == 0);
        }
        iVar6 = 0;
        for (uVar7 = uVar13; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          iVar6 = iVar6 + 1;
        }
        plVar5 = *(long **)((long)pauVar12 + (-8 - (ulong)(uint)(iVar6 << 4)));
        LOCK();
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcINtNtCs6f2BchxFEfg_14extension_host13client_writer12ClientWriterNtNtNtBK_9transport4unix18UnixSocketShutdownEE9drop_slowCs1oEx7o4003C_14extension_host
                    ((long)pauVar12 + (-8 - (ulong)(uint)(iVar6 << 4)));
        }
        uVar13 = uVar13 - 1 & uVar13;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    lVar11 = lVar4 * 0x11 + 0x21;
    if (lVar11 != 0) {
      (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_001d3048)
                (*(long *)(lVar3 + 0x38) + lVar4 * -0x10 + -0x10,lVar11,0x10);
    }
  }
  if (*(long *)(lVar3 + 0x10) == 0) {
    lVar4 = *(long *)(lVar3 + 0x18);
    LOCK();
    plVar5 = (long *)(lVar4 + 0x200);
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      uVar8 = *(ulong *)(lVar4 + 0x80);
      do {
        LOCK();
        uVar9 = *(ulong *)(lVar4 + 0x80);
        bVar14 = uVar8 == uVar9;
        if (bVar14) {
          *(ulong *)(lVar4 + 0x80) = uVar8 | *(ulong *)(lVar4 + 400);
          uVar9 = uVar8;
        }
        UNLOCK();
        uVar8 = uVar9;
      } while (!bVar14);
      if ((*(ulong *)(lVar4 + 400) & uVar9) == 0) {
        _RNvMs0_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5wakerNtB5_9SyncWaker10disconnect_llvm_5286960656326560824
                  (lVar4 + 0x140);
      }
      LOCK();
      cVar1 = *(char *)(lVar4 + 0x210);
      *(char *)(lVar4 + 0x210) = '\x01';
      UNLOCK();
      if (cVar1 != '\0') {
        _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueINtNtCscdodAO9FK5_5alloc5boxed3BoxINtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc7counter7CounterINtNtB1e_5array7ChannelNtNtCs6f2BchxFEfg_14extension_host13client_writer17ClientWriterEventEEEECs1oEx7o4003C_14extension_host_llvm_644012735571134924
                  (lVar4);
      }
    }
  }
  else if ((int)*(long *)(lVar3 + 0x10) == 1) {
    _RINvMNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc7counterINtB3_6SenderINtNtB5_4list7ChannelINtNtCscdodAO9FK5_5alloc4sync3ArcNtNtNtCs6f2BchxFEfg_14extension_host9transport4unix18UnixSocketShutdownEEE7releaseNCNvXs4_B5_INtB5_6SenderB1h_ENtNtNtCs4NRVxsYgnAr_4core3ops4drop4Drop4drops_0ECs1oEx7o4003C_14extension_host
              ();
  }
  else {
    _RINvMNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc7counterINtB3_6SenderINtNtB5_4zero7ChannelINtNtCscdodAO9FK5_5alloc4sync3ArcNtNtNtCs6f2BchxFEfg_14extension_host9transport4unix18UnixSocketShutdownEEE7releaseNCNvXs4_B5_INtB5_6SenderB1h_ENtNtNtCs4NRVxsYgnAr_4core3ops4drop4Drop4drops0_0ECs1oEx7o4003C_14extension_host
              ();
  }
  if (*(long *)(lVar3 + 0x20) == 2) {
    _RINvMNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc7counterINtB3_6SenderINtNtB5_4zero7ChannelNtNtCs6f2BchxFEfg_14extension_host13client_writer17ClientWriterEventEE7releaseNCNvXs4_B5_INtB5_6SenderB1h_ENtNtNtCs4NRVxsYgnAr_4core3ops4drop4Drop4drops0_0ECs1oEx7o4003C_14extension_host
              ();
  }
  else if ((int)*(long *)(lVar3 + 0x20) == 1) {
    _RINvMNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc7counterINtB3_6SenderINtNtB5_4list7ChannelNtNtCs6f2BchxFEfg_14extension_host13client_writer17ClientWriterEventEE7releaseNCNvXs4_B5_INtB5_6SenderB1h_ENtNtNtCs4NRVxsYgnAr_4core3ops4drop4Drop4drops_0ECs1oEx7o4003C_14extension_host
              ();
  }
  else {
    lVar4 = *(long *)(lVar3 + 0x28);
    LOCK();
    plVar5 = (long *)(lVar4 + 0x200);
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      uVar8 = *(ulong *)(lVar4 + 0x80);
      do {
        LOCK();
        uVar9 = *(ulong *)(lVar4 + 0x80);
        bVar14 = uVar8 == uVar9;
        if (bVar14) {
          *(ulong *)(lVar4 + 0x80) = uVar8 | *(ulong *)(lVar4 + 400);
          uVar9 = uVar8;
        }
        UNLOCK();
        uVar8 = uVar9;
      } while (!bVar14);
      if ((*(ulong *)(lVar4 + 400) & uVar9) == 0) {
        _RNvMs0_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5wakerNtB5_9SyncWaker10disconnect_llvm_5286960656326560824
                  (lVar4 + 0x140);
      }
      LOCK();
      cVar1 = *(char *)(lVar4 + 0x210);
      *(char *)(lVar4 + 0x210) = '\x01';
      UNLOCK();
      if (cVar1 != '\0') {
        _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueINtNtCscdodAO9FK5_5alloc5boxed3BoxINtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc7counter7CounterINtNtB1e_5array7ChannelNtNtCs6f2BchxFEfg_14extension_host13client_writer17ClientWriterEventEEEECs1oEx7o4003C_14extension_host_llvm_644012735571134924
                  (lVar4);
      }
    }
  }
  if (lVar3 != -1) {
    LOCK();
    plVar5 = (long *)(lVar3 + 8);
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      (*(code *)PTR_free_001d3ad8)(lVar3,0x78,8);
      return;
    }
  }
  return;
}


