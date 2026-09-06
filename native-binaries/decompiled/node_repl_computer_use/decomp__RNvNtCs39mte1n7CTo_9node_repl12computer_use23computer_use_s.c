// 00405530  undefined _RNvNtCs39mte1n7CTo_9node_repl12computer_use23computer_use_state_path(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _RNvNtCs39mte1n7CTo_9node_repl12computer_use23computer_use_state_path(undefined8 *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined4 *puVar9;
  int extraout_EDX;
  ulong uVar10;
  uint uVar11;
  undefined *puVar12;
  ulong *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uStack_130;
  undefined4 *puStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [8];
  undefined8 uStack_110;
  undefined4 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  char acStack_e0 [33];
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  ulong *puStack_88;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  (*(code *)PTR__RNvNtCs268jdzri8zx_3std3env7__var_os_01083778)(&uStack_50,&UNK_00d225fb,10);
  lVar16 = CONCAT44(uStack_4c,uStack_50);
  if (lVar16 == -1) {
    (*(code *)PTR__RNvNtCs268jdzri8zx_3std3env7__var_os_01083778)(&uStack_50,&UNK_00c9b1cc,4);
    if (CONCAT44(uStack_4c,uStack_50) == -1) {
      (*(code *)PTR__RNvNtCs268jdzri8zx_3std3env7__var_os_01083778)(&uStack_38,&UNK_00d22202,0xb);
      lVar16 = CONCAT44(uStack_34,uStack_38);
    }
    else {
      uStack_28 = CONCAT44(uStack_3c,uStack_40);
      lVar16 = CONCAT44(uStack_4c,uStack_50);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
    }
    if (lVar16 != -1) {
      uVar17 = CONCAT44(uStack_2c,uStack_30);
      (*(code *)PTR__RNvMs16_NtCs268jdzri8zx_3std4pathNtB6_4Path5__join_01082178)
                (&uStack_50,uVar17,uStack_28,&UNK_00d2220d,6);
      if (lVar16 != 0) {
        (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_01084ef0)(uVar17,lVar16,1);
      }
      lVar16 = CONCAT44(uStack_4c,uStack_50);
      if (lVar16 != -1) goto code_r0x0040555e;
    }
  }
  else {
code_r0x0040555e:
    uVar17 = CONCAT44(uStack_44,uStack_48);
    (*(code *)PTR__RNvMs16_NtCs268jdzri8zx_3std4pathNtB6_4Path5__join_01082178)
              (&uStack_50,uVar17,CONCAT44(uStack_3c,uStack_40),&UNK_00d22684,0x18);
    if (lVar16 != 0) {
      (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_01084ef0)(uVar17,lVar16,1);
    }
    lVar16 = CONCAT44(uStack_4c,uStack_50);
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    if (lVar16 != -1) {
      param_1[2] = CONCAT44(uStack_44,uStack_48);
      param_1[3] = CONCAT44(uStack_3c,uStack_40);
      lVar5 = 8;
      uVar17 = 0;
      goto code_r0x004056e5;
    }
  }
  (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01084408)();
  lVar16 = 0x46;
  uVar17 = 1;
  puVar6 = (undefined8 *)(*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_01085810)(0x46,1);
  uVar14 = _UNK_00d22308;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[6] = _UNK_00d22300;
    puVar6[7] = uVar14;
    uVar14 = _UNK_00d222f8;
    puVar6[4] = _UNK_00d222f0;
    puVar6[5] = uVar14;
    uVar14 = _UNK_00d222e8;
    puVar6[2] = _UNK_00d222e0;
    puVar6[3] = uVar14;
    uVar14 = _UNK_00d222d8;
    *puVar6 = _UNK_00d222d0;
    puVar6[1] = uVar14;
    *(undefined8 *)((long)puVar6 + 0x3e) = 0x65636e6574736973;
    param_1[1] = 0x46;
    param_1[2] = puVar6;
    lVar5 = 0x18;
code_r0x004056e5:
    *(long *)((long)param_1 + lVar5) = lVar16;
    *param_1 = uVar17;
    return;
  }
  puVar7 = (ulong *)(*(code *)PTR__RNvNtCskPe9mFtgPYj_5alloc7raw_vec12handle_error_01084288)(1);
  uVar11 = 0x46;
  (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_01084ef0)(1,0x46,1);
  puVar13 = puVar7;
  _Unwind_Resume();
  uVar10 = (ulong)uVar11 | 6;
  puVar15 = &UNK_00d22612;
  if (extraout_EDX != 0) {
    puVar15 = &UNK_00d2261e;
  }
  uVar17 = 6;
  uVar14 = 0xc;
  if (extraout_EDX != 0) {
    uVar14 = 6;
  }
  puStack_88 = puVar7;
  (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01084408)();
  uVar8 = (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_01085810)(uVar10,1);
  if (uVar8 == 0) {
    (*(code *)PTR__RNvNtCskPe9mFtgPYj_5alloc7raw_vec12handle_error_01084288)(1,uVar10);
code_r0x004059c2:
    (*(code *)PTR__RNvNtCskPe9mFtgPYj_5alloc7raw_vec12handle_error_01084288)(1,0x1c);
  }
  else {
    puVar12 = &UNK_00d22605;
    if ((char)uVar11 != '\0') {
      puVar12 = &UNK_00d2260b;
    }
    (*(code *)PTR_memcpy_01081c18)(uVar8,puVar12,uVar10);
    uStack_f8 = 0;
    uStack_e8 = 0;
    (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01084408)();
    puVar9 = (undefined4 *)(*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_01085810)(6,1);
    if (puVar9 != (undefined4 *)0x0) {
      *(undefined2 *)(puVar9 + 1) = 0x6563;
      *puVar9 = 0x72756f73;
      uStack_130 = 6;
      uStack_120 = 6;
      puStack_128 = puVar9;
      (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01084408)();
      puVar9 = (undefined4 *)
               (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_01085810)(0x1c,1);
      uVar17 = _UNK_00d22638;
      if (puVar9 == (undefined4 *)0x0) goto code_r0x004059c2;
      *(ulong *)(puVar9 + 3) = CONCAT44(_UNK_00d22634,_UNK_00d22630);
      *(undefined8 *)(puVar9 + 5) = uVar17;
      uVar4 = _UNK_00d22630;
      uVar3 = _UNK_00d2262c;
      uVar2 = _UNK_00d22628;
      *puVar9 = _UNK_00d22624;
      puVar9[1] = uVar2;
      puVar9[2] = uVar3;
      puVar9[3] = uVar4;
      auStack_118[0] = 3;
      uStack_110 = 0x1c;
      uStack_100 = 0x1c;
      puStack_108 = puVar9;
      _RNvMsi_NtNtNtCskPe9mFtgPYj_5alloc11collections5btree3mapINtB5_8BTreeMapNtNtBb_6string6StringNtNtCs1Ii18fn1Uai_10serde_json5value5ValueE6insertCs39mte1n7CTo_9node_repl
                (acStack_e0,&uStack_f8,&uStack_130,auStack_118);
      if (acStack_e0[0] != -1) {
        _RINvNtCs7x1JxYRm7tp_4core3ptr9drop_glueNtNtCs1Ii18fn1Uai_10serde_json5value5ValueECs39mte1n7CTo_9node_repl_llvm_13720879441590287736
                  (acStack_e0);
      }
      (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01084408)();
      uVar17 = 5;
      puVar9 = (undefined4 *)(*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_01085810)(5,1)
      ;
      if (puVar9 != (undefined4 *)0x0) {
        *(undefined1 *)(puVar9 + 1) = 0x65;
        *puVar9 = 0x706f6373;
        uStack_130 = 5;
        uStack_120 = 5;
        puStack_128 = puVar9;
        (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01084408)();
        lVar16 = (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_01085810)(uVar14,1);
        if (lVar16 != 0) {
          (*(code *)PTR_memcpy_01081c18)(lVar16,puVar15,uVar14);
          auStack_118[0] = 3;
          uStack_110 = uVar14;
          puStack_108 = (undefined4 *)lVar16;
          uStack_100 = uVar14;
          _RNvMsi_NtNtNtCskPe9mFtgPYj_5alloc11collections5btree3mapINtB5_8BTreeMapNtNtBb_6string6StringNtNtCs1Ii18fn1Uai_10serde_json5value5ValueE6insertCs39mte1n7CTo_9node_repl
                    (acStack_e0,&uStack_f8,&uStack_130,auStack_118);
          if (acStack_e0[0] != -1) {
            _RINvNtCs7x1JxYRm7tp_4core3ptr9drop_glueNtNtCs1Ii18fn1Uai_10serde_json5value5ValueECs39mte1n7CTo_9node_repl_llvm_13720879441590287736
                      (acStack_e0);
          }
          uStack_b8 = (undefined1)uStack_f8;
          uStack_b7 = (undefined7)((ulong)uStack_f8 >> 8);
          uStack_b0 = (undefined1)uStack_f0;
          *puVar13 = uVar10;
          puVar13[1] = uVar8;
          puVar13[2] = uVar10;
          *(undefined1 *)(puVar13 + 3) = 5;
          *(ulong *)((long)puVar13 + 0x19) = CONCAT17(uStack_b8,uStack_bf);
          *(ulong *)((long)puVar13 + 0x21) = CONCAT17(uStack_b0,uStack_b7);
          puVar13[5] = uStack_f0;
          puVar13[6] = uStack_e8;
          *(undefined1 *)(puVar13 + 7) = 0xff;
          return;
        }
        (*(code *)PTR__RNvNtCskPe9mFtgPYj_5alloc7raw_vec12handle_error_01084288)(1,uVar14);
        goto code_r0x004059e2;
      }
    }
    (*(code *)PTR__RNvNtCskPe9mFtgPYj_5alloc7raw_vec12handle_error_01084288)(1,uVar17);
  }
code_r0x004059e2:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


