// 00406ab0  undefined _RNvNtCs39mte1n7CTo_9node_repl12computer_use32read_existing_computer_use_state(void)

void _RNvNtCs39mte1n7CTo_9node_repl12computer_use32read_existing_computer_use_state
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_RDX;
  undefined8 *puStack_148;
  code *pcStack_140;
  undefined1 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  (*(code *)PTR__RNvNtNtCs268jdzri8zx_3std3sys2fs8metadata_01084d48)(&uStack_c0);
  if ((int)uStack_c0 == 1) {
    _RINvNtCs7x1JxYRm7tp_4core3ptr9drop_glueNtNtNtCs268jdzri8zx_3std2io5error5ErrorECs39mte1n7CTo_9node_repl
              (CONCAT44(uStack_b4,uStack_b8));
    *(undefined1 *)((long)param_1 + 0x1a) = 2;
  }
  else {
    (*(code *)PTR__RNvNvNtCs268jdzri8zx_3std2fs14read_to_string5inner_01086450)
              (&uStack_118,param_2,param_3);
    uVar3 = uStack_108;
    lVar1 = CONCAT44(uStack_114,uStack_118);
    puVar2 = (undefined8 *)CONCAT44(uStack_10c,uStack_110);
    if (lVar1 == -1) {
      uStack_130 = 
      _RNvXs5_NtNtCs268jdzri8zx_3std2io5errorNtB5_5ErrorNtNtCs7x1JxYRm7tp_4core3fmt7Display3fmt;
      puStack_148 = puVar2;
      puStack_138 = (undefined1 *)&puStack_148;
      (*(code *)PTR__RNvNvNtCskPe9mFtgPYj_5alloc3fmt6format12format_inner_01082008)
                (&uStack_c0,&UNK_00c7d379,&puStack_138);
      _RINvNtCs7x1JxYRm7tp_4core3ptr9drop_glueNtNtNtCs268jdzri8zx_3std2io5error5ErrorECs39mte1n7CTo_9node_repl
                (puStack_148);
      *param_1 = uStack_c0;
      param_1[1] = CONCAT44(uStack_b4,uStack_b8);
      param_1[2] = CONCAT44(uStack_ac,uStack_b0);
      *(undefined1 *)((long)param_1 + 0x1a) = 0xff;
    }
    else {
      _RINvMNtCs7x1JxYRm7tp_4core3stre12trim_matchesNvMNtNtB5_4char7methodsc13is_whitespaceECs39mte1n7CTo_9node_repl
                (puVar2,uStack_108);
      if (extraout_RDX == 0) {
        *param_1 = 0;
        param_1[2] = 0;
        *(undefined4 *)((long)param_1 + 0x17) = 0;
      }
      else {
        (*(code *)
          PTR__RNvXs0_NtCs7MYQMNoDlKr_4toml5tableINtNtB7_3map3MapNtNtCskPe9mFtgPYj_5alloc6string6StringNtNtB7_5value5ValueENtNtNtCs7x1JxYRm7tp_4core3str6traits7FromStr8from_str_01082fa8
        )(&uStack_118,puVar2,uVar3);
        uStack_130 = (code *)uStack_108;
        uVar3 = uStack_130;
        uStack_128 = uStack_100;
        uVar4 = uStack_128;
        uStack_120 = uStack_f8;
        uVar5 = uStack_120;
        uStack_130._0_4_ = (undefined4)uStack_108;
        uStack_130._4_4_ = (undefined4)((ulong)uStack_108 >> 0x20);
        if (CONCAT44(uStack_114,uStack_118) == 2) {
          param_1[2] = uStack_100;
          param_1[3] = uStack_f8;
          *(undefined4 *)param_1 = uStack_110;
          *(undefined4 *)((long)param_1 + 4) = uStack_10c;
          *(undefined4 *)(param_1 + 1) = (undefined4)uStack_130;
          *(undefined4 *)((long)param_1 + 0xc) = uStack_130._4_4_;
        }
        else {
          uStack_78 = uStack_d0;
          uStack_74 = uStack_cc;
          uStack_70 = uStack_c8;
          uStack_6c = uStack_c4;
          uStack_88 = uStack_e0;
          uStack_80 = uStack_d8;
          uStack_98 = uStack_f0;
          uStack_90 = uStack_e8;
          uStack_128._0_4_ = (undefined4)uStack_100;
          uStack_128._4_4_ = (undefined4)((ulong)uStack_100 >> 0x20);
          uStack_120._0_4_ = (undefined4)uStack_f8;
          uStack_120._4_4_ = (undefined4)((ulong)uStack_f8 >> 0x20);
          uStack_b8 = uStack_110;
          uStack_b4 = uStack_10c;
          uStack_b0 = (undefined4)uStack_130;
          uStack_ac = uStack_130._4_4_;
          uStack_a8 = (undefined4)uStack_128;
          uStack_a4 = uStack_128._4_4_;
          uStack_a0 = (undefined4)uStack_120;
          uStack_9c = uStack_120._4_4_;
          pcStack_140 = 
          _RNvXs0_NtNtCs7MYQMNoDlKr_4toml2de5errorNtB5_5ErrorNtNtCs7x1JxYRm7tp_4core3fmt7Display3fmt
          ;
          puStack_148 = &uStack_c0;
          uStack_130 = (code *)uVar3;
          uStack_128 = uVar4;
          uStack_120 = uVar5;
          (*(code *)PTR__RNvNvNtCskPe9mFtgPYj_5alloc3fmt6format12format_inner_01082008)
                    (&uStack_118,&UNK_00c7d39f,&puStack_148);
          _RINvNtCs7x1JxYRm7tp_4core3ptr9drop_glueNtNtCsleeWMjgK1Yj_9toml_edit5error9TomlErrorECs39mte1n7CTo_9node_repl
                    (&uStack_c0);
          param_1[2] = uStack_108;
          *(undefined4 *)param_1 = uStack_118;
          *(undefined4 *)((long)param_1 + 4) = uStack_114;
          *(undefined4 *)(param_1 + 1) = uStack_110;
          *(undefined4 *)((long)param_1 + 0xc) = uStack_10c;
          *(undefined1 *)((long)param_1 + 0x1a) = 0xff;
        }
      }
      if (lVar1 != 0) {
        (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_01084ef0)(puVar2,lVar1,1);
      }
    }
  }
  return;
}


