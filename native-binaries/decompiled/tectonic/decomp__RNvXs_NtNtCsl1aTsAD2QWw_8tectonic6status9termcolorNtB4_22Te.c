// 004125a0  undefined _RNvXs_NtNtCsl1aTsAD2QWw_8tectonic6status9termcolorNtB4_22TermcolorStatusBackendNtCse2g6EDP0hHY_20tectonic_status_base13StatusBackend12report_error(void)

void _RNvXs_NtNtCsl1aTsAD2QWw_8tectonic6status9termcolorNtB4_22TermcolorStatusBackendNtCse2g6EDP0hHY_20tectonic_status_base13StatusBackend12report_error
               (undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined1 auStack_98 [16];
  undefined1 *puStack_88;
  code *pcStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  (*(code *)PTR__RNvMNtCskAih3DnBuhX_6anyhow5errorNtB4_5Error5chain_018171c0)(&uStack_50);
  uStack_68 = uStack_40;
  uStack_64 = uStack_3c;
  uStack_60 = uStack_38;
  uStack_5c = uStack_34;
  uStack_78 = uStack_50;
  uStack_74 = uStack_4c;
  uStack_70 = uStack_48;
  uStack_6c = uStack_44;
  auVar1 = (*(code *)
             PTR__RNvXs_NtCskAih3DnBuhX_6anyhow5chainNtB6_5ChainNtNtNtNtCs7x1JxYRm7tp_4core4iter6traits8iterator8Iterator4next_01818e80
           )(&uStack_78);
  if (auVar1._0_8_ != 0) {
    pcStack_80 = 
    _RNvXs1i_NtCs7x1JxYRm7tp_4core3fmtRDNtNtB8_5error5ErrorEL_NtB6_7Display3fmtCsl1aTsAD2QWw_8tectonic
    ;
    puStack_88 = auStack_98;
    auStack_98 = auVar1;
    _RNvMNtNtCsl1aTsAD2QWw_8tectonic6status9termcolorNtB2_22TermcolorStatusBackend15generic_message
              (param_1,2,0);
    while( true ) {
      auVar1 = _RNvXs_NtCskAih3DnBuhX_6anyhow5chainNtB6_5ChainNtNtNtNtCs7x1JxYRm7tp_4core4iter6traits8iterator8Iterator4next
                         (&uStack_78);
      if (auVar1._0_8_ == 0) break;
      pcStack_80 = 
      _RNvXs1i_NtCs7x1JxYRm7tp_4core3fmtRDNtNtB8_5error5ErrorEL_NtB6_7Display3fmtCsl1aTsAD2QWw_8tectonic
      ;
      puStack_88 = auStack_98;
      auStack_98 = auVar1;
      _RNvMNtNtCsl1aTsAD2QWw_8tectonic6status9termcolorNtB2_22TermcolorStatusBackend15generic_message
                (param_1,2,&UNK_0113fb28,10,
                 &anon_a8bf6ecd6d9fb9b355f1cec0785c3ae5_2_llvm_4813436970414217209,&puStack_88);
    }
  }
  if ((CONCAT44(uStack_74,uStack_78) != 0) && (CONCAT44(uStack_64,uStack_68) != 0)) {
    (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_01816b68)
              (CONCAT44(uStack_74,uStack_78),CONCAT44(uStack_64,uStack_68) << 4,8);
  }
  return;
}


