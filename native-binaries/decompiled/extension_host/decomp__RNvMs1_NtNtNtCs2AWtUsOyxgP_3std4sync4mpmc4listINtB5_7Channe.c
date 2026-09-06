// 00136e40  undefined _RNvMs1_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc4listINtB5_7ChannelNtNtCs6f2BchxFEfg_14extension_host13client_writer17ClientWriterEventE4sendCs1oEx7o4003C_14extension_host(void)

/* WARNING: Removing unreachable block (ram,0x001370e0) */

undefined1  [16]
_RNvMs1_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc4listINtB5_7ChannelNtNtCs6f2BchxFEfg_14extension_host13client_writer17ClientWriterEventE4sendCs1oEx7o4003C_14extension_host
          (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  
  uVar10 = *(ulong *)(param_1 + 0x80);
  lVar9 = *(long *)(param_1 + 0x88);
  uVar3 = 1;
  if ((uVar10 & 1) == 0) {
    uVar7 = 0;
    lVar4 = 0;
    do {
      uVar8 = (uint)(uVar10 >> 1) & 0x1f;
      if (uVar8 == 0x1f) {
        if (uVar7 < 7) {
          if (uVar7 != 0) {
            uVar6 = uVar7 * uVar7;
            uVar8 = uVar6 & 5;
            if (7 < uVar6) {
              uVar6 = uVar6 & 0x38;
              do {
                uVar6 = uVar6 - 8;
              } while (uVar6 != 0);
              if (uVar8 == 0) goto code_r0x00136e86;
            }
            do {
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
        }
        else {
          (*(code *)PTR__RNvNtNtCs2AWtUsOyxgP_3std6thread9functions9yield_now_001d3100)();
        }
code_r0x00136e86:
        uVar7 = uVar7 + 1;
        lVar5 = lVar4;
      }
      else {
        if (uVar8 == 0x1e && lVar4 == 0) {
          (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_001d3078)
                    ();
          lVar4 = (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc19___rust_alloc_zeroed_001d30a8)(0x1f8,8)
          ;
          if (lVar4 == 0) {
            (*(code *)PTR__RNvNtCscdodAO9FK5_5alloc5alloc18handle_alloc_error_001d3090)(8,0x1f8);
            goto code_r0x001370b7;
          }
        }
        if (lVar9 == 0) {
          (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_001d3078)
                    ();
          lVar5 = (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc19___rust_alloc_zeroed_001d30a8)(0x1f8,8)
          ;
          if (lVar5 == 0) {
code_r0x001370b7:
            (*(code *)PTR__RNvNtCscdodAO9FK5_5alloc5alloc18handle_alloc_error_001d3090)(8,0x1f8);
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          LOCK();
          bVar11 = *(long *)(param_1 + 0x88) == 0;
          if (bVar11) {
            *(long *)(param_1 + 0x88) = lVar5;
          }
          UNLOCK();
          if (bVar11) {
            *(long *)(param_1 + 8) = lVar5;
            LOCK();
            bVar11 = uVar10 == *(ulong *)(param_1 + 0x80);
            if (bVar11) {
              *(ulong *)(param_1 + 0x80) = uVar10 + 2;
            }
            UNLOCK();
            lVar9 = lVar5;
            goto joined_r0x00136fde;
          }
          if (lVar4 != 0) {
            (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_001d3048)(lVar4,0x1f8,8);
          }
        }
        else {
          LOCK();
          bVar11 = uVar10 == *(ulong *)(param_1 + 0x80);
          if (bVar11) {
            *(ulong *)(param_1 + 0x80) = uVar10 + 2;
          }
          UNLOCK();
joined_r0x00136fde:
          if (bVar11) {
            if (uVar8 != 0x1e) goto code_r0x00137015;
            if (lVar4 == 0) {
              uVar3 = (*(code *)PTR__RNvNtCs4NRVxsYgnAr_4core6option13unwrap_failed_001d30c0)
                                (&UNK_001cf4c8);
              func_0x001ce2f0(uVar3);
              pcVar2 = (code *)swi(3);
              auVar12 = (*pcVar2)();
              return auVar12;
            }
            *(long *)(param_1 + 0x88) = lVar4;
            LOCK();
            *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 2;
            UNLOCK();
            *(long *)(lVar9 + 0x1f0) = lVar4;
            uVar8 = 0x1e;
            goto code_r0x0013706c;
          }
          uVar8 = 6;
          if (uVar7 < 6) {
            uVar8 = uVar7;
          }
          if (uVar7 != 0) {
            uVar8 = uVar8 * uVar8;
            uVar6 = uVar8 & 5;
            if (7 < uVar8) {
              uVar8 = uVar8 & 0x38;
              do {
                uVar8 = uVar8 - 8;
              } while (uVar8 != 0);
              if (uVar6 == 0) goto code_r0x00136e86;
            }
            do {
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
            goto code_r0x00136e86;
          }
          uVar7 = 1;
          lVar5 = lVar4;
        }
      }
      uVar10 = *(ulong *)(param_1 + 0x80);
      lVar9 = *(long *)(param_1 + 0x88);
      lVar4 = lVar5;
    } while ((uVar10 & 1) == 0);
    lVar9 = 0;
    uVar8 = 0;
code_r0x00137015:
    if (lVar4 != 0) {
      (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_001d3048)(lVar4,0x1f8,8);
    }
    uVar3 = 1;
    if (lVar9 != 0) {
code_r0x0013706c:
      *(undefined8 *)(lVar9 + (ulong)(uVar8 << 4)) = param_2;
      LOCK();
      puVar1 = (ulong *)(lVar9 + 8 + (ulong)(uVar8 << 4));
      *puVar1 = *puVar1 | 1;
      UNLOCK();
      _RNvMs0_NtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5wakerNtB5_9SyncWaker6notify(param_1 + 0x100);
      uVar3 = 2;
    }
  }
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = uVar3;
  return auVar12;
}


