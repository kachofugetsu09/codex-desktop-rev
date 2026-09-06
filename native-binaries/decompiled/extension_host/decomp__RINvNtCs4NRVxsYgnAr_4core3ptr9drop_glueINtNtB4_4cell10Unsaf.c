// 0013e840  undefined _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueINtNtB4_4cell10UnsafeCellINtNtB4_6option6OptionINtNtB4_6result6ResultuINtNtCscdodAO9FK5_5alloc5boxed3BoxDNtNtB4_3any3AnyNtNtB4_6marker4SendEL_EEEEECs1oEx7o4003C_14extension_host(void)

/* WARNING: Switch with 1 destination removed at 0x0013e87a */

void _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueINtNtB4_4cell10UnsafeCellINtNtB4_6option6OptionINtNtB4_6result6ResultuINtNtCscdodAO9FK5_5alloc5boxed3BoxDNtNtB4_3any3AnyNtNtB4_6marker4SendEL_EEEEECs1oEx7o4003C_14extension_host
               (long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if ((*param_1 != 0) && (lVar1 = param_1[1], lVar1 != 0)) {
    puVar2 = (undefined8 *)param_1[2];
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(lVar1);
    }
    if (puVar2[1] != 0) {
      (*(code *)PTR_free_001d3ad8)(lVar1,puVar2[1],puVar2[2]);
      return;
    }
  }
  return;
}


