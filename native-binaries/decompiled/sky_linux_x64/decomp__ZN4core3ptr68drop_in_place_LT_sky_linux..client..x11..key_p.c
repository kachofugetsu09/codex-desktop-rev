// 00142d10  undefined _ZN4core3ptr68drop_in_place$LT$sky_linux..client..x11..key_presser..KeyPresser$GT$17h5d36ae4f446f3d27E(void)

void _ZN4core3ptr68drop_in_place_LT_sky_linux__client__x11__key_presser__KeyPresser_GT_17h5d36ae4f446f3d27E
               (long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  undefined8 ***pppuVar8;
  ulong uVar9;
  undefined8 *puStack_70;
  undefined8 **ppuStack_68;
  code *pcStack_60;
  ulong uStack_58;
  long lStack_50;
  long lStack_40;
  long lStack_38;
  
  puVar2 = PTR_nanosleep_00380f40;
  puVar1 = PTR___errno_location_00380f10;
  lVar7 = param_1[3];
  if (lVar7 != 0) {
    lStack_40 = lVar7;
    if (param_1[2] != 0) {
      lStack_38 = param_1[1];
      lVar7 = param_1[2] + lStack_38;
      do {
        puVar4 = (undefined8 *)
                 _ZN9sky_linux6client3x117context22send_event_at_position17h7a0bc0b8222f537bE
                           (3,*(undefined1 *)(lVar7 + -1),0,0);
        if (puVar4 != (undefined8 *)0x0) {
          ppuStack_68 = &puStack_70;
          pcStack_60 = 
          _ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h93a4a94ef4f42cfcE
          ;
          puStack_70 = puVar4;
          _ZN5alloc3fmt6format12format_inner17h655a6aa2517b043fE
                    (&uStack_58,&UNK_003018b8,&ppuStack_68);
          if (uStack_58 != 0) {
            (*(code *)PTR_free_00380de0)(lStack_50);
          }
          (**(code **)*puStack_70)();
        }
        lVar7 = lVar7 + -1;
        lVar5 = 33000000;
        uVar9 = 0;
        do {
          uStack_58 = 0x7fffffffffffffff;
          if (uVar9 < 0x7fffffffffffffff) {
            uStack_58 = uVar9;
          }
          uVar9 = uVar9 - uStack_58;
          lStack_50 = lVar5;
          iVar3 = (*(code *)puVar2)(&uStack_58,&uStack_58);
          if (iVar3 == -1) {
            piVar6 = (int *)(*(code *)puVar1)();
            ppuStack_68 = (undefined8 **)CONCAT44(ppuStack_68._4_4_,*piVar6);
            if (*piVar6 != 4) {
              pppuVar8 = &ppuStack_68;
              _ZN4core9panicking13assert_failed17h9869ad7d614c2b94E
                        (pppuVar8,&UNK_002fa110,&UNK_0037d4e0);
              if (((ulong)*pppuVar8 & 0x7fffffffffffffff) == 0) {
                return;
              }
              (*(code *)PTR_free_00380de0)(pppuVar8[1]);
              return;
            }
            uVar9 = uVar9 + uStack_58;
            lVar5 = lStack_50;
          }
          else {
            lVar5 = 0;
          }
        } while (0 < lVar5 || uVar9 != 0);
      } while (lStack_38 != lVar7);
    }
    (*(code *)PTR_XCloseDisplay_00380e00)(lStack_40);
  }
  if (*param_1 != 0) {
    (*(code *)PTR_free_00380de0)(param_1[1]);
  }
  return;
}


