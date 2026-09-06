// 00402560  undefined _RINvNtNtNtCsjZHDNc5e1kr_5serde7private2de7content21visit_content_seq_refNtNvXNvNtNtNtNtNtCs72o0HLIKWBT_8tectonic5v2cli8commands6bundle6select4specs0_1__NtB1f_17BundleSearchOrderNtNtCsa0iawoYldi8_10serde_core2de11Deserialize11deserialize9___VisitorNtNtNtCs6BuOKapWo4J_4toml2de5error5ErrorEB1p_(void)

void _RINvNtNtNtCsjZHDNc5e1kr_5serde7private2de7content21visit_content_seq_refNtNvXNvNtNtNtNtNtCs72o0HLIKWBT_8tectonic5v2cli8commands6bundle6select4specs0_1__NtB1f_17BundleSearchOrderNtNtCsa0iawoYldi8_10serde_core2de11Deserialize11deserialize9___VisitorNtNtNtCs6BuOKapWo4J_4toml2de5error5ErrorEB1p_
               (int *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uStack_81;
  undefined8 uStack_80;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  iStack_78 = CONCAT31(iStack_78._1_3_,10);
  _RNvYNtNtNtCs6BuOKapWo4J_4toml2de5error5ErrorNtNtCsa0iawoYldi8_10serde_core2de5Error12invalid_typeCs72o0HLIKWBT_8tectonic
            (param_1,&iStack_78,&uStack_81,&UNK_01659560);
  if (*param_1 == 2) {
    if (param_2 != 0) {
      lVar1 = *(long *)(param_1 + 4);
      uVar2 = *(undefined8 *)(param_1 + 6);
      uStack_80 = 0;
      _RNvYNtNtNtCs6BuOKapWo4J_4toml2de5error5ErrorNtNtCsa0iawoYldi8_10serde_core2de5Error14invalid_lengthCs72o0HLIKWBT_8tectonic
                (&iStack_78,param_2,&uStack_80,&UNK_01659640);
      if (CONCAT44(iStack_74,iStack_78) != 2) {
        *(undefined8 *)(param_1 + 0x14) = uStack_28;
        *(undefined8 *)(param_1 + 0x10) = uStack_38;
        *(undefined8 *)(param_1 + 0x12) = uStack_30;
        param_1[0xc] = iStack_48;
        param_1[0xd] = iStack_44;
        param_1[0xe] = iStack_40;
        param_1[0xf] = iStack_3c;
        param_1[8] = iStack_58;
        param_1[9] = iStack_54;
        param_1[10] = iStack_50;
        param_1[0xb] = iStack_4c;
        param_1[4] = iStack_68;
        param_1[5] = iStack_64;
        param_1[6] = iStack_60;
        param_1[7] = iStack_5c;
        *param_1 = iStack_78;
        param_1[1] = iStack_74;
        param_1[2] = iStack_70;
        param_1[3] = iStack_6c;
        if (lVar1 == 0) {
          return;
        }
        (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_01816b68)(uVar2,lVar1,1);
        return;
      }
    }
    param_1[0] = 2;
    param_1[1] = 0;
  }
  return;
}


