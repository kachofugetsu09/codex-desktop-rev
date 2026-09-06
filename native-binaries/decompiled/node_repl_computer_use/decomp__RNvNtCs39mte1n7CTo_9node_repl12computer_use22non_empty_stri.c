// 004054a0  undefined _RNvNtCs39mte1n7CTo_9node_repl12computer_use22non_empty_string_value(void)

void _RNvNtCs39mte1n7CTo_9node_repl12computer_use22non_empty_string_value
               (long *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if (*param_2 == '\x03') {
    auVar4 = _RINvMNtCs7x1JxYRm7tp_4core3stre12trim_matchesNvMNtNtB5_4char7methodsc13is_whitespaceECs39mte1n7CTo_9node_repl
                       (*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
    lVar2 = auVar4._8_8_;
    if ((auVar4._0_8_ != 0) && (lVar2 != 0)) {
      if (lVar2 < 0) {
        uVar3 = 0;
      }
      else {
        (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_01084408)();
        uVar3 = 1;
        lVar1 = (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_01085810)(lVar2,1);
        if (lVar1 != 0) {
          (*(code *)PTR_memcpy_01081c18)(lVar1,auVar4._0_8_,lVar2);
          *param_1 = lVar2;
          param_1[1] = lVar1;
          param_1[2] = lVar2;
          return;
        }
      }
      (*(code *)PTR__RNvNtCskPe9mFtgPYj_5alloc7raw_vec12handle_error_01084288)(uVar3,lVar2);
    }
  }
  *param_1 = -1;
  return;
}


