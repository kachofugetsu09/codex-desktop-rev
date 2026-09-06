// 0013a380  undefined _ZN209_$LT$sky_linux..protocol..mouse_button.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$sky_linux..protocol..mouse_button..MouseButton$GT$..deserialize..__Visitor$u20$as$u20$serde_core..de..Visitor$GT$10visit_enum17h901f63f4424d4bd8E(void)

/* WARNING: Type propagation algorithm not settling */

void _ZN209__LT_sky_linux__protocol__mouse_button______LT_impl_u20_serde_core__de__Deserialize_u20_for_u20_sky_linux__protocol__mouse_button__MouseButton_GT___deserialize____Visitor_u20_as_u20_serde_core__de__Visitor_GT_10visit_enum17h901f63f4424d4bd8E
               (undefined1 *param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined1 unaff_BPL;
  undefined1 uStack_59;
  undefined8 uStack_58;
  long lStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long lStack_38;
  
  lVar2 = *param_2;
  piVar3 = (int *)param_2[1];
  switch(param_2[2]) {
  case 1:
    cVar1 = (char)*piVar3;
    if (cVar1 == 'l') {
      bVar5 = false;
      bVar4 = false;
      unaff_BPL = 3;
      uVar6 = 3;
    }
    else {
      if (cVar1 == 'm') {
        uVar6 = 5;
        unaff_BPL = 5;
      }
      else {
        if (cVar1 != 'r') goto code_r0x0013a4ea;
        uVar6 = 4;
        unaff_BPL = 4;
      }
      bVar5 = false;
      bVar4 = false;
    }
    break;
  case 4:
    if (*piVar3 != 0x7466656c) goto code_r0x0013a4ea;
    uVar6 = 0;
    unaff_BPL = 0;
joined_r0x0013a401:
    bVar5 = false;
    bVar4 = false;
    break;
  case 5:
    if ((char)piVar3[1] == 't' && *piVar3 == 0x68676972) {
      uVar6 = 1;
      unaff_BPL = 1;
      goto joined_r0x0013a401;
    }
  default:
code_r0x0013a4ea:
    uStack_58 = _ZN10serde_core2de5Error15unknown_variant17hb8a349cfa620b4bfE
                          (piVar3,param_2[2],&UNK_00371b30,6);
    bVar4 = true;
    bVar5 = true;
    uVar6 = unaff_BPL;
    break;
  case 6:
    if ((short)piVar3[1] != 0x656c || *piVar3 != 0x6464696d) goto code_r0x0013a4ea;
    unaff_BPL = 2;
    bVar5 = false;
    bVar4 = false;
    uVar6 = unaff_BPL;
  }
  if (lVar2 != 0) {
    (*(code *)PTR_free_00380de0)(piVar3);
    bVar4 = bVar5;
    unaff_BPL = uVar6;
  }
  if (bVar4) {
    if ((char)param_2[3] != '\x06') {
      _ZN4core3ptr45drop_in_place_LT_serde_json__value__Value_GT_17h98f3fc0ab0f3ae18E(param_2 + 3);
    }
code_r0x0013a450:
    *(undefined8 *)(param_1 + 8) = uStack_58;
    uVar6 = 1;
  }
  else {
    lStack_50 = param_2[3];
    lStack_38 = param_2[6];
    uStack_48 = (undefined4)param_2[4];
    uStack_44 = *(undefined4 *)((long)param_2 + 0x24);
    uStack_40 = (undefined4)param_2[5];
    uStack_3c = *(undefined4 *)((long)param_2 + 0x2c);
    if ((char)lStack_50 != '\x06') {
      if ((char)lStack_50 != '\0') {
        uVar7 = _ZN10serde_json5value2de42__LT_impl_u20_serde_json__value__Value_GT_12invalid_type17h644ef519e39ced4bE
                          (&lStack_50,&uStack_59);
        _ZN4core3ptr45drop_in_place_LT_serde_json__value__Value_GT_17h6b5ded73cbbaa288E(&lStack_50);
        uStack_58 = uVar7;
        goto code_r0x0013a450;
      }
      _ZN4core3ptr45drop_in_place_LT_serde_json__value__Value_GT_17h6b5ded73cbbaa288E(&lStack_50);
    }
    param_1[1] = unaff_BPL;
    uVar6 = 0;
  }
  *param_1 = uVar6;
  return;
}


