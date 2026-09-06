// 00140fe0  undefined _ZN4core3ptr101drop_in_place$LT$alloc..vec..Vec$LT$sky_linux..protocol..full_desktop..screenshot..Screenshot$GT$$GT$17h1f3555aa0614540fE(void)

void _ZN4core3ptr101drop_in_place_LT_alloc__vec__Vec_LT_sky_linux__protocol__full_desktop__screenshot__Screenshot_GT__GT_17h1f3555aa0614540fE
               (long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar2 = PTR_free_00380de0;
  lVar1 = param_1[1];
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    puVar3 = (undefined8 *)(lVar1 + 8);
    do {
      if (puVar3[-1] != 0) {
        (*(code *)puVar2)(*puVar3);
      }
      puVar3 = puVar3 + 3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (*param_1 != 0) {
    (*(code *)PTR_free_00380de0)(lVar1);
    return;
  }
  return;
}


