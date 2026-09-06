// 001397e0  undefined _RNvCs1oEx7o4003C_14extension_host4main(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _RNvCs1oEx7o4003C_14extension_host4main(void)

{
  long lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  uint3 *puVar9;
  undefined3 uVar10;
  uint3 uVar11;
  undefined3 uVar12;
  uint uVar13;
  undefined1 uVar14;
  uint3 *puVar15;
  uint3 *puVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  char cVar21;
  uint3 *puVar22;
  uint3 *puVar23;
  long lStack_2f0;
  uint3 *puStack_2e0;
  uint3 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  uint uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  uint uStack_290;
  undefined4 uStack_28c;
  undefined1 uStack_288;
  undefined4 uStack_287;
  undefined3 uStack_283;
  long lStack_280;
  uint3 *puStack_210;
  undefined4 uStack_204;
  long *plStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  uint3 uStack_1d8;
  undefined5 uStack_1d5;
  undefined3 uStack_1d0;
  undefined5 uStack_1cd;
  undefined3 uStack_1c8;
  uint uStack_1c5;
  undefined4 uStack_1c1;
  undefined4 uStack_1bd;
  undefined4 uStack_1b9;
  uint uStack_1b5;
  undefined4 uStack_1b1;
  undefined4 uStack_1ad;
  undefined4 uStack_1a9;
  long lStack_1a5;
  uint3 *puStack_148;
  uint3 *puStack_140;
  uint3 *puStack_138;
  uint3 *puStack_130;
  long lStack_120;
  uint3 *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  uint3 *puStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [16];
  uint uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  long lStack_c0;
  uint3 auStack_b8 [34];
  
  (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_001d3078)();
  puVar15 = (uint3 *)(*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_001d3080)(0x16,1);
  if (puVar15 == (uint3 *)0x0) {
    puVar15 = (uint3 *)(*(code *)PTR__RNvNtCscdodAO9FK5_5alloc7raw_vec12handle_error_001d3098)
                                 (1,0x16);
  }
  uVar4 = _UNK_001141a2;
  uVar3 = _UNK_0011419e;
  uVar7 = _UNK_0011419a;
  *(undefined4 *)puVar15 = _UNK_00114196;
  *(undefined4 *)(puVar15 + 1) = uVar7;
  *(undefined4 *)(puVar15 + 2) = uVar3;
  *(undefined4 *)(puVar15 + 3) = uVar4;
  *(undefined8 *)((long)puVar15 + 0xe) = 0x6573752d72657377;
  uStack_2c8 = (uint3 *)CONCAT35(uStack_2c8._5_3_,0x1ff);
  puVar16 = (uint3 *)(*(code *)
                       PTR__RNvMsD_NtCs2AWtUsOyxgP_3std2fsNtB5_10DirBuilder7__create_001d3150)
                               (&uStack_2c8,puVar15,0x16);
  if (puVar16 == (uint3 *)0x0) {
code_r0x0013985c:
    (*(code *)PTR__RNvNtNtCs2AWtUsOyxgP_3std3sys2fs16symlink_metadata_001d3158)
              (&uStack_2c8,puVar15,0x16);
    puVar16 = uStack_2c0;
    if ((int)uStack_2c8 == 2) goto code_r0x001399a9;
    if ((uStack_290 & 0xf000) != 0x4000) {
      puVar16 = (uint3 *)(*(code *)
                           PTR__RINvMs3_NtNtCs2AWtUsOyxgP_3std2io5errorNtB6_5Error3newReEBa__001d3178
                         )(0x14,&UNK_001141ac,0x2d);
      goto code_r0x001399a9;
    }
    if (((uStack_290 & 0xfff) != 0x3ff) &&
       (puVar16 = (uint3 *)(*(code *)PTR__RNvNtNtCs2AWtUsOyxgP_3std3sys2fs15set_permissions_001d3198
                           )(puVar15,0x16,0x3ff), puVar16 != (uint3 *)0x0)) goto code_r0x001399a9;
    (*(code *)PTR__RNvMNtCs52RhhGolJ90_4uuid2v4NtB4_4Uuid6new_v4_001d3160)(auStack_b8);
    uStack_2c0 = (uint3 *)
                 PTR__RNvXsV_NtCs52RhhGolJ90_4uuid3fmtNtB5_10HyphenatedNtNtCs4NRVxsYgnAr_4core3fmt8LowerHex3fmt_001d3168
    ;
    uStack_2c8 = auStack_b8;
    (*(code *)PTR__RNvNvNtCscdodAO9FK5_5alloc3fmt6format12format_inner_001d3170)
              (&uStack_1d8,&UNK_00112047,&uStack_2c8);
    _RINvMs16_NtCs2AWtUsOyxgP_3std4pathNtB7_4Path4joinNtNtCscdodAO9FK5_5alloc6string6StringECs1oEx7o4003C_14extension_host
              (&uStack_2c8,puVar15,0x16,&uStack_1d8);
    puVar23 = uStack_2c0;
    puVar22 = uStack_2c8;
    (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_001d3048)(puVar15,0x16,1);
    puVar16 = puVar23;
    if (puVar22 != (uint3 *)0xffffffffffffffff) {
      puStack_138 = puVar22;
      puStack_130 = puVar23;
      _RINvMs_NtNtCs6f2BchxFEfg_14extension_host9transport4unixNtB5_16UnixSocketServer4bindRNtNtCs2AWtUsOyxgP_3std4path7PathBufECs1oEx7o4003C_14extension_host
                (&uStack_2c8,&puStack_138);
      puVar16 = uStack_2c0;
      if ((int)uStack_2c8 != 1) {
        uVar7 = uStack_2c8._4_4_;
        uStack_204 = uStack_2c8._4_4_;
        (*(code *)
          PTR__RNvXs0_NtNtCs6f2BchxFEfg_14extension_host9transport5stdioNtB5_14StdioTransportNtNtB7_6traits9Transport5split_001d31a0
        )(&uStack_2c8);
        puVar16 = uStack_2c0;
        puVar15 = uStack_2c8;
        if (uStack_2c8 != (uint3 *)0x0) {
          (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_001d3078)
                    ();
          plVar17 = (long *)(*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_001d3080)
                                      (0x20,8);
          if (plVar17 == (long *)0x0) {
            (*(code *)PTR__RNvNtCscdodAO9FK5_5alloc5alloc18handle_alloc_error_001d3090)(8,0x20);
            goto code_r0x00139d94;
          }
          *plVar17 = 1;
          plVar17[1] = 1;
          plVar17[2] = 0;
          plVar17[3] = (long)puVar16;
          plStack_200 = plVar17;
          (*(code *)
            PTR__RNvMNtCs6f2BchxFEfg_14extension_host10rpc_routerNtB2_9RpcRouter3new_001d31b0)
                    (auStack_f0);
          lStack_1a5 = lStack_c0;
          uStack_1b5 = uStack_d0;
          uStack_1b1 = uStack_cc;
          uStack_1ad = uStack_c8;
          uStack_1a9 = uStack_c4;
          uStack_1c5 = uStack_e0;
          uStack_1c1 = uStack_dc;
          uStack_1bd = uStack_d8;
          uStack_1b9 = uStack_d4;
          uStack_1d5 = (undefined5)auStack_f0._0_8_;
          uStack_1d0 = SUB83(auStack_f0._0_8_,5);
          uStack_1cd = (undefined5)auStack_f0._8_8_;
          uStack_1c8 = SUB83(auStack_f0._8_8_,5);
          uStack_2c8 = (uint3 *)0x1;
          uStack_2c0 = (uint3 *)0x1;
          uStack_2b8 = 0;
          uStack_2b4 = (uint)uStack_1d8 << 8;
          uStack_2b0 = (undefined4)auStack_f0._0_8_;
          uStack_2ac = SUB84(auStack_f0._0_8_,4);
          uStack_2a8 = (undefined4)auStack_f0._8_8_;
          uStack_2a4 = SUB84(auStack_f0._8_8_,4);
          uStack_2a0 = uStack_e0;
          uStack_29c = uStack_dc;
          uStack_298 = uStack_d8;
          uStack_294 = uStack_d4;
          uStack_290 = uStack_d0;
          uStack_28c = uStack_cc;
          uStack_288 = (undefined1)uStack_c8;
          uStack_287 = (undefined4)(CONCAT44(uStack_c4,uStack_c8) >> 8);
          uStack_283 = (undefined3)((uint)uStack_c4 >> 8);
          lStack_280 = lStack_c0;
          (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_001d3078)
                    ();
          plVar18 = (long *)(*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_001d3080)
                                      (0x50,8);
          if (plVar18 == (long *)0x0) {
            (*(code *)PTR__RNvNtCscdodAO9FK5_5alloc5alloc18handle_alloc_error_001d3090)(8,0x50);
            goto code_r0x00139d94;
          }
          plVar18[8] = CONCAT35(uStack_283,CONCAT41(uStack_287,uStack_288));
          plVar18[9] = lStack_280;
          *(undefined4 *)(plVar18 + 6) = uStack_298;
          *(undefined4 *)((long)plVar18 + 0x34) = uStack_294;
          *(uint *)(plVar18 + 7) = uStack_290;
          *(undefined4 *)((long)plVar18 + 0x3c) = uStack_28c;
          *(undefined4 *)(plVar18 + 4) = uStack_2a8;
          *(undefined4 *)((long)plVar18 + 0x24) = uStack_2a4;
          *(uint *)(plVar18 + 5) = uStack_2a0;
          *(undefined4 *)((long)plVar18 + 0x2c) = uStack_29c;
          *(undefined4 *)(plVar18 + 2) = uStack_2b8;
          *(uint *)((long)plVar18 + 0x14) = uStack_2b4;
          *(undefined4 *)(plVar18 + 3) = uStack_2b0;
          *(undefined4 *)((long)plVar18 + 0x1c) = uStack_2ac;
          *(int *)plVar18 = (int)uStack_2c8;
          *(undefined4 *)((long)plVar18 + 4) = uStack_2c8._4_4_;
          *(undefined4 *)(plVar18 + 1) = (undefined4)uStack_2c0;
          *(undefined4 *)((long)plVar18 + 0xc) = uStack_2c0._4_4_;
          plStack_1f8 = plVar18;
          (*(code *)
            PTR__RNvMs0_NtCs6f2BchxFEfg_14extension_host10app_serverNtB5_16AppServerManager3new_001d31b8
          )(auStack_b8);
          puVar8 = PTR_memcpy_001d3088;
          (*(code *)PTR_memcpy_001d3088)(&uStack_1d5,auStack_b8,0x88);
          uStack_2c8 = (uint3 *)0x1;
          uStack_2c0 = (uint3 *)0x1;
          uStack_2b8 = 0;
          uStack_2b4 = uStack_2b4 & 0xffffff00;
          (*(code *)puVar8)((long)&uStack_2b4 + 1,&uStack_1d8,0x8b);
          (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_001d3078)
                    ();
          plVar19 = (long *)(*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_001d3080)
                                      (0xa0,8);
          if (plVar19 == (long *)0x0) {
            (*(code *)PTR__RNvNtCscdodAO9FK5_5alloc5alloc18handle_alloc_error_001d3090)(8,0xa0);
            goto code_r0x00139d94;
          }
          (*(code *)PTR_memcpy_001d3088)(plVar19,&uStack_2c8,0xa0);
          plStack_1f0 = plVar19;
          _RNvMNtCs6f2BchxFEfg_14extension_host13client_writerINtB2_20ClientWriterRegistryNtNtNtB4_9transport4unix16UnixSocketWriterE17with_queue_limitsCs1oEx7o4003C_14extension_host
                    (&uStack_2c8,0x400,0x8000008);
          puVar9 = uStack_2c0;
          puVar16 = uStack_2c8;
          if (uStack_2c0 != (uint3 *)0xffffffffffffffff) {
            puStack_210 = (uint3 *)CONCAT44(uStack_2b4,uStack_2b8);
            puStack_148 = uStack_2c0;
            uStack_2c8 = (uint3 *)0x1;
            uStack_2c0 = (uint3 *)0x1;
            uStack_2b8 = SUB84(puVar16,0);
            uStack_2b4 = (uint)((ulong)puVar16 >> 0x20);
            puStack_140 = puStack_210;
            (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_001d3078
            )();
            plVar20 = (long *)(*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_001d3080)
                                        (0x18,8);
            if (plVar20 == (long *)0x0) {
              (*(code *)PTR__RNvNtCscdodAO9FK5_5alloc5alloc18handle_alloc_error_001d3090)(8,0x18);
              goto code_r0x00139d94;
            }
            plVar20[2] = CONCAT44(uStack_2b4,uStack_2b8);
            *(int *)plVar20 = (int)uStack_2c8;
            *(undefined4 *)((long)plVar20 + 4) = uStack_2c8._4_4_;
            *(undefined4 *)(plVar20 + 1) = (undefined4)uStack_2c0;
            *(undefined4 *)((long)plVar20 + 0xc) = uStack_2c0._4_4_;
            LOCK();
            lVar1 = *plVar18;
            *plVar18 = *plVar18 + 1;
            UNLOCK();
            plStack_1e8 = plVar20;
            if (*plVar18 == 0 || SCARRY8(lVar1,1) != *plVar18 < 0) goto code_r0x00139d94;
            uStack_2b8 = 0xffffffff;
            uStack_2b4 = 0xffffffff;
            uStack_2c8 = (uint3 *)0x0;
            uStack_2a0 = uStack_2a0 & 0xffffff00;
            plStack_1e0 = plVar18;
            (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_001d3078
            )();
            puVar16 = (uint3 *)(*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_001d3080)
                                         (0x1c,1);
            uVar6 = _UNK_00114178;
            if (puVar16 == (uint3 *)0x0) {
              (*(code *)PTR__RNvNtCscdodAO9FK5_5alloc7raw_vec12handle_error_001d3098)(1,0x1c);
              goto code_r0x00139d94;
            }
            *(ulong *)(puVar16 + 3) = CONCAT44(_UNK_00114174,_UNK_00114170);
            *(undefined8 *)(puVar16 + 5) = uVar6;
            uVar5 = _UNK_00114170;
            uVar4 = _UNK_0011416c;
            uVar3 = _UNK_00114168;
            *(undefined4 *)puVar16 = _UNK_00114164;
            *(undefined4 *)(puVar16 + 1) = uVar3;
            *(undefined4 *)(puVar16 + 2) = uVar4;
            *(undefined4 *)(puVar16 + 3) = uVar5;
            puStack_2e0 = (uint3 *)0x1c;
            uStack_2d0 = 0x1c;
            puStack_2d8 = puVar16;
            (*(code *)PTR__RNvMNtNtCs2AWtUsOyxgP_3std6thread7builderNtB2_7Builder4name_001d31c0)
                      (&uStack_1d8,&uStack_2c8,&puStack_2e0);
            uStack_2c8 = puVar9;
            uStack_2c0 = puStack_210;
            uStack_2b8 = SUB84(plVar18,0);
            uStack_2b4 = (uint)((ulong)plVar18 >> 0x20);
            _RINvMNtNtCs2AWtUsOyxgP_3std6thread7builderNtB3_7Builder15spawn_uncheckedNCINvCs1oEx7o4003C_14extension_host35run_with_routing_platform_transportNtNtNtCs6f2BchxFEfg_14extension_host9transport4unix19UnixSocketTransportNCNvB1d_3run0E0uEB1d_
                      (&lStack_108,&uStack_1d8,&uStack_2c8);
            puVar16 = puStack_100;
            if (lStack_108 != 0) {
              lStack_120 = lStack_108;
              puStack_118 = puStack_100;
              uStack_110 = uStack_f8;
              _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueINtNtNtCs2AWtUsOyxgP_3std6thread11join_handle10JoinHandleuEECs1oEx7o4003C_14extension_host
                        (&lStack_120);
              LOCK();
              lVar1 = *plVar19;
              *plVar19 = *plVar19 + 1;
              UNLOCK();
              if (*plVar19 == 0 || SCARRY8(lVar1,1) != *plVar19 < 0) goto code_r0x00139d94;
              LOCK();
              lVar1 = *plVar20;
              *plVar20 = *plVar20 + 1;
              UNLOCK();
              if (*plVar20 == 0 || SCARRY8(lVar1,1) != *plVar20 < 0) goto code_r0x00139d94;
              LOCK();
              lVar1 = *plVar18;
              *plVar18 = *plVar18 + 1;
              UNLOCK();
              if (*plVar18 == 0 || SCARRY8(lVar1,1) != *plVar18 < 0) goto code_r0x00139d94;
              LOCK();
              lVar1 = *plVar17;
              *plVar17 = *plVar17 + 1;
              UNLOCK();
              if (*plVar17 == 0 || SCARRY8(lVar1,1) != *plVar17 < 0) goto code_r0x00139d94;
              uStack_1d8 = (uint3)puVar15;
              uStack_1d5 = (undefined5)((ulong)puVar15 >> 0x18);
              uStack_1d0 = SUB83(plVar19,0);
              uStack_1cd = (undefined5)((ulong)plVar19 >> 0x18);
              uStack_1c8 = SUB83(plVar17,0);
              uVar10 = uStack_1c8;
              uStack_1c5 = (uint)((ulong)plVar17 >> 0x18);
              uStack_1c1._0_1_ = (undefined1)((ulong)plVar17 >> 0x38);
              uStack_1c1._1_3_ = (uint3)plVar18;
              uVar11 = uStack_1c1._1_3_;
              uStack_1bd = (undefined4)((ulong)plVar18 >> 0x18);
              uStack_1b9._0_1_ = (undefined1)((ulong)plVar18 >> 0x38);
              uStack_1b9._1_3_ = SUB83(plVar20,0);
              uVar12 = uStack_1b9._1_3_;
              uStack_1b5 = (uint)((ulong)plVar20 >> 0x18);
              uVar13 = uStack_1b5;
              uStack_1b1._0_1_ = (undefined1)((ulong)plVar20 >> 0x38);
              uVar14 = (undefined1)uStack_1b1;
              uStack_2c8 = (uint3 *)0x0;
              uStack_2b8 = 0xffffffff;
              uStack_2b4 = 0xffffffff;
              uStack_2a0 = uStack_2a0 & 0xffffff00;
              _RINvMNtNtCs2AWtUsOyxgP_3std6thread7builderNtB3_7Builder15spawn_uncheckedNCINvCs1oEx7o4003C_14extension_host35run_with_routing_platform_transportNtNtNtCs6f2BchxFEfg_14extension_host9transport4unix19UnixSocketTransportNCNvB1d_3run0Es_0zEB1d_
                        (&puStack_2e0,&uStack_2c8,&uStack_1d8);
              if (puStack_2e0 == (uint3 *)0x0) {
                uStack_2c8 = puStack_2d8;
                (*(code *)PTR__RNvNtCs4NRVxsYgnAr_4core6result13unwrap_failed_001d30f8)
                          (&UNK_00114180,0x16,&uStack_2c8,&UNK_001cf620,&UNK_001cf608);
                goto code_r0x00139d94;
              }
              uStack_2b8 = (undefined4)uStack_2d0;
              uStack_2b4 = (uint)((ulong)uStack_2d0 >> 0x20);
              uStack_2c8 = puStack_2e0;
              uStack_2c0 = puStack_2d8;
              (*(code *)
                PTR__RNvXs1_NtNtNtCs2AWtUsOyxgP_3std3sys6thread4unixNtB5_6ThreadNtNtNtCs4NRVxsYgnAr_4core3ops4drop4Drop4drop_001d3138
              )(&uStack_2b8);
              LOCK();
              *(long *)uStack_2c8 = *(long *)uStack_2c8 + -1;
              UNLOCK();
              if (*(long *)uStack_2c8 == 0) {
                (*(code *)
                  PTR__RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcNtNtNtCs2AWtUsOyxgP_3std6thread6thread5InnerNtNtBL_5alloc6SystemE9drop_slowBL__001d3140
                )(&uStack_2c8);
              }
              LOCK();
              *(long *)uStack_2c0 = *(long *)uStack_2c0 + -1;
              UNLOCK();
              if (*(long *)uStack_2c0 == 0) {
                _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcINtNtNtCs2AWtUsOyxgP_3std6thread9lifecycle6PacketzEE9drop_slowCs1oEx7o4003C_14extension_host
                          (&uStack_2c0);
              }
              puStack_210 = (uint3 *)(plVar20 + 2);
              lStack_2f0 = 1;
              while( true ) {
                (*(code *)
                  PTR__RNvMs_NtNtCs6f2BchxFEfg_14extension_host9transport4unixNtB4_16UnixSocketServer6accept_001d31c8
                )(&uStack_2c8,&uStack_204);
                puVar16 = uStack_2c0;
                if ((int)uStack_2c8 == 1) break;
                (*(code *)
                  PTR__RNvXs0_NtNtCs6f2BchxFEfg_14extension_host9transport4unixNtB5_19UnixSocketTransportNtNtB7_6traits9Transport5split_001d31d0
                )(&uStack_2c8,uStack_2c8._4_4_);
                puVar15 = uStack_2c8;
                puVar16 = uStack_2c0;
                if ((int)uStack_2c8 == -1) break;
                puVar16 = (uint3 *)_RNvMNtCs6f2BchxFEfg_14extension_host13client_writerINtB2_20ClientWriterRegistryNtNtNtB4_9transport4unix16UnixSocketWriterE6insertCs1oEx7o4003C_14extension_host
                                             (puStack_210,lStack_2f0,uStack_2c0);
                if (puVar16 != (uint3 *)0x0) {
                  (*(code *)PTR_close_001d31a8)((ulong)puVar15 & 0xffffffff);
                  break;
                }
                LOCK();
                lVar1 = *plVar17;
                *plVar17 = *plVar17 + 1;
                UNLOCK();
                if (*plVar17 == 0 || SCARRY8(lVar1,1) != *plVar17 < 0) goto code_r0x00139d94;
                LOCK();
                lVar1 = *plVar20;
                *plVar20 = *plVar20 + 1;
                UNLOCK();
                if (*plVar20 == 0 || SCARRY8(lVar1,1) != *plVar20 < 0) goto code_r0x00139d94;
                LOCK();
                lVar1 = *plVar18;
                *plVar18 = *plVar18 + 1;
                UNLOCK();
                if (*plVar18 == 0 || SCARRY8(lVar1,1) != *plVar18 < 0) goto code_r0x00139d94;
                uStack_1b5._0_1_ = (undefined1)((ulong)puVar15 >> 0x18);
                uStack_1d5 = (undefined5)((ulong)plVar18 >> 0x18);
                uStack_1c1._1_3_ = (uint3)lStack_2f0;
                uStack_1bd = (undefined4)((ulong)lStack_2f0 >> 0x18);
                uStack_1b9._0_1_ = (undefined1)((ulong)lStack_2f0 >> 0x38);
                uStack_1b9 = CONCAT31((int3)puVar15,(undefined1)uStack_1b9);
                uStack_1cd = (undefined5)((ulong)plVar17 >> 0x18);
                uStack_1c1 = CONCAT31(uStack_1c1._1_3_,uVar14);
                uStack_2c8 = (uint3 *)0x0;
                uStack_2b8 = 0xffffffff;
                uStack_2b4 = 0xffffffff;
                uStack_2a0 = uStack_2a0 & 0xffffff00;
                uStack_1d8 = uVar11;
                uStack_1d0 = uVar10;
                uStack_1c8 = uVar12;
                uStack_1c5 = uVar13;
                _RINvMNtNtCs2AWtUsOyxgP_3std6thread7builderNtB3_7Builder15spawn_uncheckedNCINvCs1oEx7o4003C_14extension_host35run_with_routing_platform_transportNtNtNtCs6f2BchxFEfg_14extension_host9transport4unix19UnixSocketTransportNCNvB1d_3run0Es0_0uEB1d_
                          (&puStack_2e0,&uStack_2c8,&uStack_1d8);
                if (puStack_2e0 == (uint3 *)0x0) {
                  uStack_2c8 = puStack_2d8;
                  (*(code *)PTR__RNvNtCs4NRVxsYgnAr_4core6result13unwrap_failed_001d30f8)
                            (&UNK_00114180,0x16,&uStack_2c8,&UNK_001cf620,&UNK_001cf608);
                  goto code_r0x00139d94;
                }
                uStack_2b8 = (undefined4)uStack_2d0;
                uStack_2b4 = (uint)((ulong)uStack_2d0 >> 0x20);
                uStack_2c8 = puStack_2e0;
                uStack_2c0 = puStack_2d8;
                _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueINtNtNtCs2AWtUsOyxgP_3std6thread11join_handle10JoinHandleuEECs1oEx7o4003C_14extension_host
                          (&uStack_2c8);
                lStack_2f0 = lStack_2f0 + 1;
              }
            }
            LOCK();
            *plVar20 = *plVar20 + -1;
            UNLOCK();
            if (*plVar20 == 0) {
              _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcINtNtCs6f2BchxFEfg_14extension_host13client_writer20ClientWriterRegistryNtNtNtBK_9transport4unix16UnixSocketWriterEE9drop_slowCs1oEx7o4003C_14extension_host
                        (&plStack_1e8);
            }
          }
          LOCK();
          *plVar19 = *plVar19 + -1;
          UNLOCK();
          if (*plVar19 == 0) {
            _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcINtNtNtNtCs2AWtUsOyxgP_3std4sync6poison5mutex5MutexNtNtCs6f2BchxFEfg_14extension_host10app_server16AppServerManagerEE9drop_slowCs1oEx7o4003C_14extension_host
                      (&plStack_1f0);
          }
          LOCK();
          *plVar18 = *plVar18 + -1;
          UNLOCK();
          if (*plVar18 == 0) {
            _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcINtNtNtNtCs2AWtUsOyxgP_3std4sync6poison5mutex5MutexNtNtCs6f2BchxFEfg_14extension_host10rpc_router9RpcRouterEE9drop_slowCs1oEx7o4003C_14extension_host
                      (&plStack_1f8);
          }
          LOCK();
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcINtNtNtNtCs2AWtUsOyxgP_3std4sync6poison5mutex5MutexNtNtNtCs6f2BchxFEfg_14extension_host9transport5stdio11StdioWriterEE9drop_slowCs1oEx7o4003C_14extension_host
                      (&plStack_200);
          }
        }
        (*(code *)PTR_close_001d31a8)(uVar7);
      }
      if (puVar22 == (uint3 *)0x0) goto code_r0x001399bc;
      goto code_r0x001399b6;
    }
  }
  else {
    switch((uint)puVar16 & 3) {
    case 0:
      if ((char)puVar16[4] != '\f') goto code_r0x001399a9;
      goto code_r0x0013997b;
    case 1:
      cVar21 = *(char *)((long)puVar16 + 0xf);
      break;
    case 2:
      if ((int)((ulong)puVar16 >> 0x20) == 0x11) goto code_r0x0013997b;
      goto code_r0x001399a9;
    case 3:
      cVar21 = (char)((ulong)puVar16 >> 0x20);
    }
    if (cVar21 == '\f') {
code_r0x0013997b:
      uStack_2c8 = puVar16;
      _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueNtNtNtCs2AWtUsOyxgP_3std2io5error5ErrorECs1oEx7o4003C_14extension_host
                (&uStack_2c8);
      goto code_r0x0013985c;
    }
code_r0x001399a9:
    puVar22 = (uint3 *)0x16;
    puVar23 = puVar15;
code_r0x001399b6:
    (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_001d3048)(puVar23,puVar22,1);
  }
code_r0x001399bc:
  uStack_1d8 = (uint3)puVar16;
  uStack_1d5 = (undefined5)((ulong)puVar16 >> 0x18);
  uStack_2c8 = &uStack_1d8;
  uStack_2c0 = (uint3 *)
               PTR__RNvXs5_NtNtCs2AWtUsOyxgP_3std2io5errorNtB5_5ErrorNtNtCs4NRVxsYgnAr_4core3fmt7Display3fmt_001d3180
  ;
  (*(code *)PTR__RNvNtNtCs2AWtUsOyxgP_3std2io5stdio7__eprint_001d3188)(&UNK_001136f0,&uStack_2c8);
  (*(code *)PTR__RNvNtCs2AWtUsOyxgP_3std7process4exit_001d3190)(1);
code_r0x00139d94:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


