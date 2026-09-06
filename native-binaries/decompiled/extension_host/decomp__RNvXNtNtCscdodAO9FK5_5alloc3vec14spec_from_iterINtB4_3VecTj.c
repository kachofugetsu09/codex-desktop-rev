// 00134310  undefined _RNvXNtNtCscdodAO9FK5_5alloc3vec14spec_from_iterINtB4_3VecTjINtNtB6_4sync3ArcINtNtCs6f2BchxFEfg_14extension_host13client_writer12ClientWriterNtNtNtB1h_9transport4unix18UnixSocketShutdownEEEEINtB2_12SpecFromIterBT_INtNtNtNtCs4NRVxsYgnAr_4core4iter8adapters3map3MapINtNtNtNtCs2AWtUsOyxgP_3std11collections4hash3map4IterjBV_ENCNvMB1f_INtB1f_20ClientWriterRegistryNtB2g_16UnixSocketWriterE9broadcast0EE9from_iterCs1oEx7o4003C_14extension_host(void)

ulong * _RNvXNtNtCscdodAO9FK5_5alloc3vec14spec_from_iterINtB4_3VecTjINtNtB6_4sync3ArcINtNtCs6f2BchxFEfg_14extension_host13client_writer12ClientWriterNtNtNtB1h_9transport4unix18UnixSocketShutdownEEEEINtB2_12SpecFromIterBT_INtNtNtNtCs4NRVxsYgnAr_4core4iter8adapters3map3MapINtNtNtNtCs2AWtUsOyxgP_3std11collections4hash3map4IterjBV_ENCNvMB1f_INtB1f_20ClientWriterRegistryNtB2g_16UnixSocketWriterE9broadcast0EE9from_iterCs1oEx7o4003C_14extension_host
                  (ulong *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  long lVar10;
  undefined1 (*pauVar11) [16];
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uStack_68;
  undefined8 *puStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  long *plStack_40;
  ulong *puStack_38;
  
  uVar2 = param_2[4];
  if (uVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    return param_1;
  }
  uVar9 = (uint)*(ushort *)(param_2 + 3);
  lVar13 = *param_2;
  if (*(ushort *)(param_2 + 3) == 0) {
    pauVar11 = (undefined1 (*) [16])param_2[1];
    do {
      auVar1 = *pauVar11;
      lVar13 = lVar13 + -0x100;
      pauVar11 = pauVar11 + 1;
      uVar9 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
    } while (uVar9 == 0);
    param_2[1] = (long)pauVar11;
    *param_2 = lVar13;
  }
  iVar6 = 0;
  for (uVar7 = uVar9; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
    iVar6 = iVar6 + 1;
  }
  uVar9 = uVar9 - 1 & uVar9;
  *(short *)(param_2 + 3) = (short)uVar9;
  lVar10 = lVar13 - (ulong)(uint)(iVar6 << 4);
  lVar12 = uVar2 - 1;
  param_2[4] = lVar12;
  uVar3 = *(undefined8 *)(lVar10 + -0x10);
  plVar4 = *(long **)(lVar10 + -8);
  LOCK();
  lVar10 = *plVar4;
  *plVar4 = *plVar4 + 1;
  UNLOCK();
  puStack_38 = param_1;
  if (*plVar4 != 0 && SCARRY8(lVar10,1) == *plVar4 < 0) {
    uVar15 = 4;
    if (4 < uVar2) {
      uVar15 = uVar2;
    }
    uVar16 = uVar15 << 4;
    uStack_50 = uVar3;
    plStack_48 = plVar4;
    if (uVar16 < 0x7ffffffffffffff9 && uVar2 >> 0x3c == 0) {
      plStack_40 = param_2;
      (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_001d3078)();
      puVar8 = (undefined8 *)
               (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_001d3080)(uVar16,8);
      uVar14 = 8;
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = uVar3;
        puVar8[1] = plVar4;
        uStack_58 = 1;
        uStack_68 = uVar15;
        puStack_60 = puVar8;
        if (lVar12 != 0) {
          pauVar11 = (undefined1 (*) [16])plStack_40[1];
          do {
            uVar2 = uStack_58;
            if ((short)uVar9 == 0) {
              do {
                auVar1 = *pauVar11;
                lVar13 = lVar13 + -0x100;
                pauVar11 = pauVar11 + 1;
                uVar9 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
              } while (uVar9 == 0);
            }
            iVar6 = 0;
            for (uVar7 = uVar9; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
              iVar6 = iVar6 + 1;
            }
            lVar10 = lVar13 - (ulong)(uint)(iVar6 << 4);
            uVar3 = *(undefined8 *)(lVar10 + -0x10);
            plVar4 = *(long **)(lVar10 + -8);
            LOCK();
            lVar10 = *plVar4;
            *plVar4 = *plVar4 + 1;
            UNLOCK();
            if (*plVar4 == 0 || SCARRY8(lVar10,1) != *plVar4 < 0) goto code_r0x001343db;
            uStack_50 = uVar3;
            plStack_48 = plVar4;
            if (uStack_58 == uStack_68) {
              _RINvNvMs2_NtCscdodAO9FK5_5alloc7raw_vecINtB8_11RawVecInnerpE7reserve21do_reserve_and_handleNtNtBa_5alloc6GlobalECs1oEx7o4003C_14extension_host
                        (&uStack_68,uStack_58);
              puVar8 = puStack_60;
            }
            uVar9 = uVar9 - 1 & uVar9;
            lVar12 = lVar12 + -1;
            puVar8[uVar2 * 2] = uVar3;
            puVar8[uVar2 * 2 + 1] = plVar4;
            uStack_58 = uVar2 + 1;
          } while (lVar12 != 0);
        }
        puStack_38[2] = uStack_58;
        *puStack_38 = uStack_68;
        puStack_38[1] = (ulong)puStack_60;
        return puStack_38;
      }
    }
    else {
      uVar14 = 0;
    }
    (*(code *)PTR__RNvNtCscdodAO9FK5_5alloc7raw_vec12handle_error_001d3098)(uVar14,uVar16);
  }
code_r0x001343db:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}


