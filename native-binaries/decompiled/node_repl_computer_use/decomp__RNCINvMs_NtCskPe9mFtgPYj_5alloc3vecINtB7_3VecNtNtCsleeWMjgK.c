// 003fef00  undefined _RNCINvMs_NtCskPe9mFtgPYj_5alloc3vecINtB7_3VecNtNtCsleeWMjgK1Yj_9toml_edit4item4ItemE6retainNCINvMs0_NtBL_5arrayNtB1A_5Array6retainNCNvNtCs39mte1n7CTo_9node_repl12computer_use21remove_app_from_table0E0E0B2a_.llvm.13720879441590287736(void)

byte _RNCINvMs_NtCskPe9mFtgPYj_5alloc3vecINtB7_3VecNtNtCsleeWMjgK1Yj_9toml_edit4item4ItemE6retainNCINvMs0_NtBL_5arrayNtB1A_5Array6retainNCNvNtCs39mte1n7CTo_9node_repl12computer_use21remove_app_from_table0E0E0B2a__llvm_13720879441590287736
               (long *param_1,ulong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  if (*param_2 < 8) {
    if ((int)*param_2 != 2) {
      return 1;
    }
    lVar3 = *(long *)*param_1;
    uVar4 = ((long *)*param_1)[1];
    auVar10 = _RINvMNtCs7x1JxYRm7tp_4core3stre12trim_matchesNvMNtNtB5_4char7methodsc13is_whitespaceECs39mte1n7CTo_9node_repl
                        (param_2[2],param_2[3]);
    uVar8 = auVar10._8_8_;
    if (auVar10._0_8_ == 0) {
      return 1;
    }
    if (uVar8 == 0) {
      return 1;
    }
    if ((long)uVar8 < 0) {
      uVar9 = 0;
    }
    else {
      (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01084408)();
      uVar9 = 1;
      lVar6 = (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_01085810)(uVar8,1);
      if (lVar6 != 0) {
        (*(code *)PTR_memcpy_01081c18)(lVar6,auVar10._0_8_,uVar8);
        bVar5 = 1;
        if (uVar8 == uVar4) {
          if (uVar4 < 0x10) {
            uVar7 = 0;
            do {
              bVar5 = uVar4 != uVar7;
              if (uVar4 == uVar7) break;
              pbVar1 = (byte *)(lVar6 + uVar7);
              bVar2 = *(byte *)(lVar3 + uVar7);
              uVar7 = uVar7 + 1;
            } while ((byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1) ==
                     (byte)(((byte)(bVar2 + 0xbf) < 0x1a) << 5 | bVar2));
          }
          else {
            bVar5 = _RINvMNtNtCs7x1JxYRm7tp_4core5slice5asciiSh27eq_ignore_ascii_case_chunksKj10_ECs39mte1n7CTo_9node_repl
                              (lVar6,uVar4,lVar3,uVar4);
            bVar5 = bVar5 ^ 1;
          }
        }
        (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_01084ef0)(lVar6,uVar8,1);
        return bVar5;
      }
    }
    (*(code *)PTR__RNvNtCskPe9mFtgPYj_5alloc7raw_vec12handle_error_01084288)(uVar9,uVar8);
  }
  return 0;
}


