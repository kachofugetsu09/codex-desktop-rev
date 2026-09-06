// 0040ea70  undefined _RNCNvXs3_NtCsl1aTsAD2QWw_8tectonic6driverNtB7_11BridgeStateNtCscAgbpKrHWfe_20tectonic_bridge_core11DriverHooks18sysrq_shell_escapes_0B9_(void)

void _RNCNvXs3_NtCsl1aTsAD2QWw_8tectonic6driverNtB7_11BridgeStateNtCscAgbpKrHWfe_20tectonic_bridge_core11DriverHooks18sysrq_shell_escapes_0B9_
               (undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_38;
  undefined4 *puStack_30;
  code *pcStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  uStack_20 = *(undefined4 *)(lVar3 + 8);
  uStack_1c = *(undefined4 *)(lVar3 + 0xc);
  uStack_18 = *(undefined4 *)(lVar3 + 0x10);
  uStack_14 = *(undefined4 *)(lVar3 + 0x14);
  puStack_30 = &uStack_20;
  pcStack_28 = 
  _RNvXs1b_NtCs268jdzri8zx_3std4pathNtB6_7DisplayNtNtCs7x1JxYRm7tp_4core3fmt7Display3fmt;
  uStack_38 = _RNvXs_NtCskAih3DnBuhX_6anyhow5errorNtB6_5ErrorINtNtCs7x1JxYRm7tp_4core7convert4FromNtNtNtCs268jdzri8zx_3std2io5error5ErrorE4fromCsl1aTsAD2QWw_8tectonic
                        (param_2);
  (**(code **)(lVar2 + 0x18))
            (uVar1,2,anon_4032773e2b5bcfd558884589254776ee_16_llvm_4690722840411069424,&puStack_30,
             &uStack_38);
  (*(code *)
    PTR__RNvXs4_NtCskAih3DnBuhX_6anyhow5errorNtB7_5ErrorNtNtNtCs7x1JxYRm7tp_4core3ops4drop4Drop4drop_01815138
  )(&uStack_38);
  return;
}


