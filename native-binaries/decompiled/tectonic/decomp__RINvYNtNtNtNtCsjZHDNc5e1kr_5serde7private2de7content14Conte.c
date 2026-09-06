// 00402750  undefined _RINvYNtNtNtNtCsjZHDNc5e1kr_5serde7private2de7content14ContentVisitorNtNtCsa0iawoYldi8_10serde_core2de7Visitor10visit_u128NtNtNtCs6BuOKapWo4J_4toml2de5error5ErrorECs72o0HLIKWBT_8tectonic(void)

undefined8
_RINvYNtNtNtNtCsjZHDNc5e1kr_5serde7private2de7content14ContentVisitorNtNtCsa0iawoYldi8_10serde_core2de7Visitor10visit_u128NtNtNtCs6BuOKapWo4J_4toml2de5error5ErrorECs72o0HLIKWBT_8tectonic
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 uVar4;
  byte bVar5;
  uint uVar6;
  ulong uVar7;
  uint auStack_b8 [2];
  undefined1 uStack_b0;
  uint *puStack_a8;
  undefined *puStack_a0;
  undefined1 uStack_89;
  undefined8 *puStack_88;
  undefined1 auStack_80 [16];
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  undefined7 uStack_1f;
  undefined1 uStack_18;
  undefined8 uStack_17;
  
  uStack_18 = 0;
  uStack_17 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_1f = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  puStack_70 = &uStack_48;
  uStack_68 = 0x39;
  uStack_60 = 0;
  puStack_88 = &uStack_58;
  auStack_80._0_8_ = _RNvXNtNtCs7x1JxYRm7tp_4core3fmt3numoNtB4_7Display3fmt;
  puStack_a0 = &UNK_004027cc;
  uStack_58 = param_2;
  uStack_50 = param_3;
  cVar3 = (*(code *)PTR__RNvNtCs7x1JxYRm7tp_4core3fmt5write_01817860)
                    (&puStack_70,anon_59bad85d762e64a1e7a41763bef55ebb_39_llvm_8818779079761765746,
                     anon_9cac46c184b9866b06490b5b8312995e_15_llvm_4554655233059556531,&puStack_88);
  if (cVar3 == '\0') {
    puStack_a0 = &UNK_004027db;
    auStack_80 = (*(code *)PTR__RNvMNtCsa0iawoYldi8_10serde_core6formatNtB2_3Buf6as_str_01812a60)
                           (&puStack_70);
    puStack_88 = (undefined8 *)CONCAT71(puStack_88._1_7_,0x11);
    puStack_a0 = &UNK_00402803;
    _RNvYNtNtNtCs6BuOKapWo4J_4toml2de5error5ErrorNtNtCsa0iawoYldi8_10serde_core2de5Error12invalid_typeCs72o0HLIKWBT_8tectonic
              (param_1,&puStack_88,&uStack_89,
               anon_59bad85d762e64a1e7a41763bef55ebb_42_llvm_8818779079761765746);
    return param_1;
  }
  uVar7 = 0x2b;
  puStack_a0 = &UNK_00402834;
  (*(code *)PTR__RNvNtCs7x1JxYRm7tp_4core6result13unwrap_failed_01818178)
            (anon_59bad85d762e64a1e7a41763bef55ebb_53_llvm_8818779079761765746,0x2b,&uStack_89,
             anon_59bad85d762e64a1e7a41763bef55ebb_54_llvm_8818779079761765746,
             anon_59bad85d762e64a1e7a41763bef55ebb_44_llvm_8818779079761765746);
  uVar6 = (uint)uVar7;
  bVar5 = (byte)uVar7;
  if (uVar6 < 0x80) {
    auStack_b8[0] = (uint)bVar5;
    puStack_a0 = (undefined *)0x1;
  }
  else {
    uVar1 = (undefined1)(uVar7 >> 6);
    if (uVar6 < 0x800) {
      auStack_b8[0] = (ushort)(CONCAT11(bVar5,uVar1) | 0xc0) & 0xffff3fff | 0x8000;
      puStack_a0 = (undefined *)0x2;
    }
    else {
      uVar2 = (undefined1)(uVar7 >> 0xc);
      if (uVar6 < 0x10000) {
        auStack_b8[0] =
             (CONCAT12(bVar5,CONCAT11(uVar1,uVar2)) & 0xff3fff | 0x80e0) & 0xff3fffff | 0x800000;
        puStack_a0 = (undefined *)0x3;
      }
      else {
        auStack_b8[0] =
             CONCAT13(bVar5,CONCAT12(uVar1,CONCAT11(uVar2,(char)(uVar6 >> 0x12)))) & 0x3f3f3fff |
             0x808080f0;
        puStack_a0 = (undefined *)0x4;
      }
    }
  }
  puStack_a8 = auStack_b8;
  uStack_b0 = 5;
  uVar4 = _RNvYNtNtNtCs6BuOKapWo4J_4toml2de5error5ErrorNtNtCsa0iawoYldi8_10serde_core2de5Error12invalid_typeCs72o0HLIKWBT_8tectonic
                    ();
  return uVar4;
}


