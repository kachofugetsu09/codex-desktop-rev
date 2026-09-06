// 00401e80  undefined _RINvMs6_NtCs68qq9mATycw_12sharded_slab3tidNtB6_12Registration8registerNtNtB8_3cfg13DefaultConfigECs72o0HLIKWBT_8tectonic(void)

void _RINvMs6_NtCs68qq9mATycw_12sharded_slab3tidNtB6_12Registration8registerNtNtB8_3cfg13DefaultConfigECs72o0HLIKWBT_8tectonic
               (undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  long lVar6;
  ulong *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  bool bVar12;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined1 auStack_c8 [24];
  undefined *puStack_b0;
  long *plStack_a8;
  ulong uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  
  puStack_b0 = &UNK_00401e9e;
  lVar6 = (*(code *)
            PTR__RNvXs9_NtCs68qq9mATycw_12sharded_slab3tidNtB5_8REGISTRYNtNtNtCs7x1JxYRm7tp_4core3ops5deref5Deref5deref_018187b8
          )(&_RNvNtCs68qq9mATycw_12sharded_slab3tid8REGISTRY);
  LOCK();
  bVar12 = *(int *)(lVar6 + 8) == 0;
  if (bVar12) {
    *(int *)(lVar6 + 8) = 1;
  }
  UNLOCK();
  if (!bVar12) {
    puStack_b0 = &UNK_00401fba;
    (*(code *)
      PTR__RNvMNtNtNtNtCs268jdzri8zx_3std3sys4sync5mutex5futexNtB2_5Mutex14lock_contended_01818978)
              (lVar6 + 8);
  }
  if ((_RNvNtNtCs268jdzri8zx_3std9panicking11panic_count18GLOBAL_PANIC_COUNT & 0x7fffffffffffffff)
      == 0) {
    if (*(char *)(lVar6 + 0xc) != '\0') {
code_r0x00401ee2:
      if ((_RNvNtNtCs268jdzri8zx_3std9panicking11panic_count18GLOBAL_PANIC_COUNT &
          0x7fffffffffffffff) != 0) {
        puStack_b0 = &UNK_004020ca;
        cVar5 = (*(code *)
                  PTR__RNvNtNtCs268jdzri8zx_3std9panicking11panic_count17is_zero_slow_path_01817f90)
                          ();
        if (cVar5 == '\0') {
          *(undefined1 *)(lVar6 + 0xc) = 1;
        }
      }
      goto code_r0x00401eef;
    }
    bVar4 = 0;
    uVar9 = *(ulong *)(lVar6 + 0x28);
    uStack_a0 = 0;
    bVar3 = 0;
    if (1 < uVar9) {
code_r0x00401f15:
      bVar4 = bVar3;
      lVar2 = *(long *)(lVar6 + 0x20);
      uVar11 = 0;
      if (*(ulong *)(lVar6 + 0x10) <= lVar2 + 1U) {
        uVar11 = *(ulong *)(lVar6 + 0x10);
      }
      *(ulong *)(lVar6 + 0x20) = (lVar2 - uVar11) + 1;
      *(ulong *)(lVar6 + 0x28) = uVar9 - 1;
      uStack_a0 = *(ulong *)(*(long *)(lVar6 + 0x18) + lVar2 * 8);
    }
code_r0x00401f49:
    if ((bVar4 == 0) &&
       ((_RNvNtNtCs268jdzri8zx_3std9panicking11panic_count18GLOBAL_PANIC_COUNT & 0x7fffffffffffffff)
        != 0)) {
      puStack_b0 = &UNK_0040211f;
      uStack_88 = uStack_a0;
      cVar5 = (*(code *)
                PTR__RNvNtNtCs268jdzri8zx_3std9panicking11panic_count17is_zero_slow_path_01817f90)()
      ;
      uStack_a0 = uStack_88;
      if (cVar5 == '\0') {
        *(undefined1 *)(lVar6 + 0xc) = 1;
      }
    }
    LOCK();
    iVar1 = *(int *)(lVar6 + 8);
    *(int *)(lVar6 + 8) = 0;
    UNLOCK();
    if (iVar1 == 2) {
      puStack_b0 = &UNK_004020ec;
      (*(code *)PTR__RNvMNtNtNtNtCs268jdzri8zx_3std3sys4sync5mutex5futexNtB2_5Mutex4wake_01813720)
                (lVar6 + 8);
    }
    if (1 < uVar9) goto code_r0x00401f96;
  }
  else {
    puStack_b0 = &UNK_00401fc5;
    bVar4 = (*(code *)
              PTR__RNvNtNtCs268jdzri8zx_3std9panicking11panic_count17is_zero_slow_path_01817f90)();
    if (*(char *)(lVar6 + 0xc) == '\0') {
      bVar4 = bVar4 ^ 1;
      uVar9 = *(ulong *)(lVar6 + 0x28);
      bVar3 = bVar4;
      if (1 < uVar9) goto code_r0x00401f15;
      uStack_a0 = 0;
      goto code_r0x00401f49;
    }
    if (bVar4 != 0) goto code_r0x00401ee2;
code_r0x00401eef:
    LOCK();
    iVar1 = *(int *)(lVar6 + 8);
    *(int *)(lVar6 + 8) = 0;
    UNLOCK();
    if (iVar1 == 2) {
      puStack_b0 = &UNK_00401f07;
      (*(code *)PTR__RNvMNtNtNtNtCs268jdzri8zx_3std3sys4sync5mutex5futexNtB2_5Mutex4wake_01813720)
                (lVar6 + 8);
    }
  }
  puStack_b0 = &UNK_00401f7c;
  puVar7 = (ulong *)(*(code *)
                      PTR__RNvXs9_NtCs68qq9mATycw_12sharded_slab3tidNtB5_8REGISTRYNtNtNtCs7x1JxYRm7tp_4core3ops5deref5Deref5deref_018187b8
                    )(&_RNvNtCs68qq9mATycw_12sharded_slab3tid8REGISTRY);
  LOCK();
  uStack_a0 = *puVar7;
  *puVar7 = *puVar7 + 1;
  UNLOCK();
  if (uStack_a0 < 0x2000) {
code_r0x00401f96:
    *param_1 = 1;
    param_1[1] = uStack_a0;
    return;
  }
  if ((_RNvNtNtCs268jdzri8zx_3std9panicking11panic_count18GLOBAL_PANIC_COUNT & 0x7fffffffffffffff)
      != 0) {
    puStack_b0 = &UNK_00401ff8;
    cVar5 = (*(code *)
              PTR__RNvNtNtCs268jdzri8zx_3std9panicking11panic_count17is_zero_slow_path_01817f90)();
    if (cVar5 == '\0') {
      puStack_b0 = &UNK_00402006;
      plStack_a8 = (long *)(*(code *)PTR__RNvNtNtCs268jdzri8zx_3std6thread7current7current_01818168)
                                     ();
      puStack_b0 = &UNK_00402013;
      auStack_40 = (*(code *)
                     PTR__RNvMs_NtNtCs268jdzri8zx_3std6thread6threadNtB4_6Thread4name_01815d90)
                             (&plStack_a8);
      if (auStack_40._0_8_ == 0) {
        auStack_40._8_8_ = 9;
        auStack_40._0_8_ = &UNK_01126e0b;
      }
      puStack_98 = &UNK_01126b99;
      uStack_90 = 0x20;
      puStack_80 = (ulong *)auStack_40;
      pcStack_78 = _RNvXs1i_NtCs7x1JxYRm7tp_4core3fmtReNtB6_7Display3fmtCs72o0HLIKWBT_8tectonic;
      ppuStack_70 = (undefined **)&uStack_a0;
      pcStack_68 = _RNvXsi_NtNtNtCs7x1JxYRm7tp_4core3fmt3num3impjNtB9_7Display3fmt;
      ppuStack_60 = &puStack_98;
      pcStack_58 = _RNvXs1i_NtCs7x1JxYRm7tp_4core3fmtReNtB6_7Display3fmtCs72o0HLIKWBT_8tectonic;
      puStack_50 = &UNK_01126b60;
      pcStack_48 = _RNvXsi_NtNtNtCs7x1JxYRm7tp_4core3fmt3num3impjNtB9_7Display3fmt;
      puStack_b0 = &UNK_004020a7;
      (*(code *)PTR__RNvNtNtCs268jdzri8zx_3std2io5stdio7__eprint_01816068)
                (&UNK_01126e14,&puStack_80);
      LOCK();
      *plStack_a8 = *plStack_a8 + -1;
      UNLOCK();
      if (*plStack_a8 == 0) {
        puStack_b0 = &UNK_004020ba;
        (*(code *)
          PTR__RNvMsn_NtCskPe9mFtgPYj_5alloc4syncINtB5_3ArcNtNtNtCs268jdzri8zx_3std6thread6thread5InnerNtNtBM_5alloc6SystemE9drop_slowBM__018133f8
        )(&plStack_a8);
      }
      goto code_r0x00401f96;
    }
  }
  puStack_98 = &UNK_01126b99;
  uStack_90 = 0x20;
  puStack_80 = &uStack_a0;
  pcStack_78 = _RNvXsi_NtNtNtCs7x1JxYRm7tp_4core3fmt3num3impjNtB9_7Display3fmt;
  ppuStack_70 = &puStack_98;
  pcStack_68 = _RNvXs1i_NtCs7x1JxYRm7tp_4core3fmtReNtB6_7Display3fmtCs72o0HLIKWBT_8tectonic;
  ppuStack_60 = (undefined **)&UNK_01126b60;
  pcStack_58 = _RNvXsi_NtNtNtCs7x1JxYRm7tp_4core3fmt3num3impjNtB9_7Display3fmt;
  puStack_b0 = &UNK_004021a3;
  uVar8 = (*(code *)PTR__RNvNtCs7x1JxYRm7tp_4core9panicking9panic_fmt_018125d8)
                    (&UNK_01126bb9,&puStack_80,&UNK_01659010);
  LOCK();
  *plStack_a8 = *plStack_a8 + -1;
  UNLOCK();
  if (*plStack_a8 == 0) {
    puStack_b0 = &UNK_004021b9;
    (*(code *)
      PTR__RNvMsn_NtCskPe9mFtgPYj_5alloc4syncINtB5_3ArcNtNtNtCs268jdzri8zx_3std6thread6thread5InnerNtNtBM_5alloc6SystemE9drop_slowBM__018133f8
    )(&plStack_a8);
  }
  puStack_b0 = &UNK_004021c1;
  uVar10 = uVar8;
  _Unwind_Resume();
  puStack_b0 = &UNK_004021c7;
  (*(code *)PTR__RNvNtCs7x1JxYRm7tp_4core9panicking16panic_in_cleanup_01814a48)();
  pcStack_d0 = 
  _RNvXs1i_NtCs7x1JxYRm7tp_4core3fmtRNtNtCskPe9mFtgPYj_5alloc6string6StringNtB6_7Display3fmtCs72o0HLIKWBT_8tectonic
  ;
  uStack_d8 = uVar10;
  puStack_b0 = (undefined *)uVar8;
  (*(code *)PTR__RNvNvNtCskPe9mFtgPYj_5alloc3fmt6format12format_inner_01813bc8)
            (auStack_c8,&UNK_01126f35,&uStack_d8);
  _RINvMNtCskAih3DnBuhX_6anyhow5errorNtB5_5Error3msgNtNtCskPe9mFtgPYj_5alloc6string6StringECs72o0HLIKWBT_8tectonic
            (auStack_c8);
  return;
}


