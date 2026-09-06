// 003f6110  undefined _RINvMs_NtCskPe9mFtgPYj_5alloc3vecINtB5_3VecNtNtCsleeWMjgK1Yj_9toml_edit4item4ItemE6retainNCINvMs0_NtBJ_5arrayNtB1y_5Array6retainNCNvNtCs39mte1n7CTo_9node_repl12computer_use21remove_app_from_table0E0EB28_(void)

void _RINvMs_NtCskPe9mFtgPYj_5alloc3vecINtB5_3VecNtNtCsleeWMjgK1Yj_9toml_edit4item4ItemE6retainNCINvMs0_NtBJ_5arrayNtB1y_5Array6retainNCNvNtCs39mte1n7CTo_9node_repl12computer_use21remove_app_from_table0E0EB28_
               (long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_38;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (uVar1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    uVar5 = 0;
    lVar6 = lVar2;
    uStack_38 = param_2;
    do {
      cVar4 = _RNCINvMs_NtCskPe9mFtgPYj_5alloc3vecINtB7_3VecNtNtCsleeWMjgK1Yj_9toml_edit4item4ItemE6retainNCINvMs0_NtBL_5arrayNtB1A_5Array6retainNCNvNtCs39mte1n7CTo_9node_repl12computer_use21remove_app_from_table0E0E0B2a__llvm_13720879441590287736
                        (&uStack_38,lVar6);
      if (cVar4 == '\0') {
        _RINvNtCs7x1JxYRm7tp_4core3ptr9drop_glueNtNtCsleeWMjgK1Yj_9toml_edit4item4ItemECs39mte1n7CTo_9node_repl_llvm_13720879441590287736
                  (lVar6);
        uVar3 = uVar5;
        while (uVar3 = uVar3 + 1, uVar3 < uVar1) {
          lVar6 = lVar6 + 0xb0;
          cVar4 = _RNCINvMs_NtCskPe9mFtgPYj_5alloc3vecINtB7_3VecNtNtCsleeWMjgK1Yj_9toml_edit4item4ItemE6retainNCINvMs0_NtBL_5arrayNtB1A_5Array6retainNCNvNtCs39mte1n7CTo_9node_repl12computer_use21remove_app_from_table0E0E0B2a__llvm_13720879441590287736
                            (&uStack_38,lVar6);
          if (cVar4 == '\0') {
            _RINvNtCs7x1JxYRm7tp_4core3ptr9drop_glueNtNtCsleeWMjgK1Yj_9toml_edit4item4ItemECs39mte1n7CTo_9node_repl_llvm_13720879441590287736
                      (lVar6);
          }
          else {
            (*(code *)PTR_memcpy_01081c18)(uVar5 * 0xb0 + lVar2,lVar6,0xb0);
            uVar5 = uVar5 + 1;
          }
        }
        *(ulong *)(param_1 + 0x10) = uVar5;
        return;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0xb0;
    } while (uVar1 != uVar5);
  }
  return;
}


