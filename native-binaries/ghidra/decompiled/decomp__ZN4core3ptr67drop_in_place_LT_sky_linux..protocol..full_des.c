// 00142ce0  undefined _ZN4core3ptr67drop_in_place$LT$sky_linux..protocol..full_desktop..drag..Input$GT$17h6ef28a92a9cd2393E(void)

void _ZN4core3ptr67drop_in_place_LT_sky_linux__protocol__full_desktop__drag__Input_GT_17h6ef28a92a9cd2393E
               (long *param_1)

{
  if (*param_1 != 0) {
    (*(code *)PTR_free_00380de0)(param_1[1]);
  }
  if ((param_1[3] & 0x7fffffffffffffffU) == 0) {
    return;
  }
  (*(code *)PTR_free_00380de0)(param_1[4]);
  return;
}


