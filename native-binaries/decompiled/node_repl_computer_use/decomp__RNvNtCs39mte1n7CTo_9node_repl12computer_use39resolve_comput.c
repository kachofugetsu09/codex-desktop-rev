// 00406d10  undefined _RNvNtCs39mte1n7CTo_9node_repl12computer_use39resolve_computer_use_session_state_path(void)

void _RNvNtCs39mte1n7CTo_9node_repl12computer_use39resolve_computer_use_session_state_path
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte *param_4,long param_5
               )

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  byte *pbStack_30;
  long lStack_28;
  
  if (param_5 - 1U < 0x80) {
    pbVar5 = param_4;
    do {
      if (pbVar5 == param_4 + param_5) {
        pbStack_30 = param_4;
        lStack_28 = param_5;
        auVar9 = (*(code *)PTR__RNvMs16_NtCs268jdzri8zx_3std4pathNtB6_4Path6parent_010824d8)
                           (param_2,param_3);
        uVar6 = auVar9._8_8_;
        puVar4 = auVar9._0_8_;
        if (puVar4 == (undefined *)0x0) {
          uVar6 = 1;
        }
        puVar7 = &UNK_00d2269c;
        if (puVar4 != (undefined *)0x0) {
          puVar7 = puVar4;
        }
        (*(code *)PTR__RNvMs16_NtCs268jdzri8zx_3std4pathNtB6_4Path5__join_01082178)
                  (&lStack_60,puVar7,uVar6,&UNK_00c9bec0,8);
        uStack_78 = &pbStack_30;
        uStack_70 = _RNvXs1i_NtCs7x1JxYRm7tp_4core3fmtReNtB6_7Display3fmtCs39mte1n7CTo_9node_repl;
        (*(code *)PTR__RNvNvNtCskPe9mFtgPYj_5alloc3fmt6format12format_inner_01082008)
                  (&lStack_48,&UNK_00c7d4ad,&uStack_78);
        (*(code *)PTR__RNvMs16_NtCs268jdzri8zx_3std4pathNtB6_4Path5__join_01082178)
                  (&uStack_78,uStack_58,uStack_50,uStack_40,uStack_38);
        if (lStack_48 != 0) {
          (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_01084ef0)
                    (uStack_40,lStack_48,1);
        }
        param_1[2] = uStack_68;
        *(undefined4 *)param_1 = (undefined4)uStack_78;
        *(undefined4 *)((long)param_1 + 4) = uStack_78._4_4_;
        *(undefined4 *)(param_1 + 1) = (undefined4)uStack_70;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_70._4_4_;
        if (lStack_60 == 0) {
          return;
        }
        (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_01084ef0)(uStack_58,lStack_60,1);
        return;
      }
      bVar2 = *pbVar5;
      uVar3 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        pbVar1 = pbVar5 + 1;
        if (bVar2 < 0xe0) {
          pbVar5 = pbVar5 + 2;
          uVar3 = (uVar3 & 0x1f) << 6 | *pbVar1 & 0x3f;
        }
        else {
          uVar8 = pbVar5[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
          if (bVar2 < 0xf0) {
            pbVar5 = pbVar5 + 3;
            uVar3 = uVar8 | (uVar3 & 0x1f) << 0xc;
          }
          else {
            pbVar1 = pbVar5 + 3;
            pbVar5 = pbVar5 + 4;
            uVar3 = *pbVar1 & 0x3f | uVar8 << 6 | (uVar3 & 7) << 0x12;
          }
        }
      }
      else {
        pbVar5 = pbVar5 + 1;
      }
    } while ((((uVar3 == 0x5f) || (uVar3 == 0x2d)) || (0xfffffff5 < uVar3 - 0x3a)) ||
            (0xffffffe5 < (uVar3 & 0xffffffdf) - 0x5b));
  }
  *param_1 = 0xffffffffffffffff;
  return;
}


