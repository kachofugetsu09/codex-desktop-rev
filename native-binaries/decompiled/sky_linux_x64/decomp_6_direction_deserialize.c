// 0013a1c0  undefined _ZN201_$LT$sky_linux..protocol..direction.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$sky_linux..protocol..direction..Direction$GT$..deserialize..__Visitor$u20$as$u20$serde_core..de..Visitor$GT$10visit_enum17hf9f657c54fe2a0c8E(void)

void _ZN201__LT_sky_linux__protocol__direction______LT_impl_u20_serde_core__de__Deserialize_u20_for_u20_sky_linux__protocol__direction__Direction_GT___deserialize____Visitor_u20_as_u20_serde_core__de__Visitor_GT_10visit_enum17hf9f657c54fe2a0c8E
               (undefined1 *param_1,long *param_2)

{
  long lVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 unaff_RBX;
  undefined1 uStack_59;
  undefined1 *puStack_58;
  char cStack_50;
  undefined4 uStack_4f;
  undefined4 uStack_4b;
  undefined4 uStack_47;
  undefined4 uStack_43;
  undefined3 uStack_3f;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  lVar1 = *param_2;
  piVar2 = (int *)param_2[1];
  puStack_58 = param_1;
  switch(param_2[2]) {
  case 1:
    switch((char)*piVar2) {
    case 'd':
      uVar6 = 5;
      break;
    default:
      goto code_r0x0013a325;
    case 'l':
      uVar6 = 6;
      break;
    case 'r':
      uVar6 = 7;
      break;
    case 'u':
      uVar6 = 4;
    }
    break;
  case 2:
    if ((short)*piVar2 != 0x7075) goto code_r0x0013a325;
    bVar4 = false;
    bVar3 = false;
    goto joined_r0x0013a27d;
  default:
code_r0x0013a325:
    unaff_RBX = _ZN10serde_core2de5Error15unknown_variant17hb8a349cfa620b4bfE
                          (piVar2,param_2[2],&UNK_00371ab0,8);
    bVar4 = true;
    bVar3 = true;
    param_1 = puStack_58;
joined_r0x0013a27d:
    uVar6 = 0;
    puStack_58 = param_1;
    goto joined_r0x0013a27d;
  case 4:
    if (*piVar2 == 0x6e776f64) {
      uVar6 = 1;
    }
    else {
      if (*piVar2 != 0x7466656c) goto code_r0x0013a325;
      uVar6 = 2;
    }
    break;
  case 5:
    if ((char)piVar2[1] != 't' || *piVar2 != 0x68676972) goto code_r0x0013a325;
    uVar6 = 3;
  }
  bVar4 = false;
  bVar3 = false;
joined_r0x0013a27d:
  if (lVar1 != 0) {
    (*(code *)PTR_free_00380de0)(piVar2);
    bVar3 = bVar4;
  }
  cStack_50 = (char)param_2[3];
  if (bVar3) {
    uVar6 = unaff_RBX;
    if (cStack_50 != '\x06') {
      _ZN4core3ptr45drop_in_place_LT_serde_json__value__Value_GT_17h98f3fc0ab0f3ae18E(param_2 + 3);
    }
  }
  else if (cStack_50 != '\a') {
    uStack_4f = *(undefined4 *)((long)param_2 + 0x19);
    uStack_4b = *(undefined4 *)((long)param_2 + 0x1d);
    uStack_47 = *(undefined4 *)((long)param_2 + 0x21);
    uStack_43 = *(undefined4 *)((long)param_2 + 0x25);
    uStack_3c = *(undefined4 *)((long)param_2 + 0x2c);
    uStack_38 = (undefined4)param_2[6];
    uStack_34 = *(undefined4 *)((long)param_2 + 0x34);
    uStack_3f = (undefined3)((uint)(int)param_2[5] >> 8);
    if (cStack_50 != '\x06') {
      if (cStack_50 != '\0') {
        uVar6 = _ZN10serde_json5value2de42__LT_impl_u20_serde_json__value__Value_GT_12invalid_type17h644ef519e39ced4bE
                          (&cStack_50,&uStack_59);
        _ZN4core3ptr45drop_in_place_LT_serde_json__value__Value_GT_17h6b5ded73cbbaa288E(&cStack_50);
        goto code_r0x0013a2d2;
      }
      _ZN4core3ptr45drop_in_place_LT_serde_json__value__Value_GT_17h6b5ded73cbbaa288E(&cStack_50);
    }
    puStack_58[1] = (char)uVar6;
    uVar5 = 0;
    goto code_r0x0013a314;
  }
code_r0x0013a2d2:
  *(undefined8 *)(puStack_58 + 8) = uVar6;
  uVar5 = 1;
code_r0x0013a314:
  *puStack_58 = uVar5;
  return;
}


