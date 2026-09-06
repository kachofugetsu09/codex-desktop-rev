// 00416bd0  undefined _RINvMs0_NtNtNtNtCs268jdzri8zx_3std3sys12thread_local6native4lazyINtB6_7StorageINtNtCs7x1JxYRm7tp_4core4cell4CellTyyEEzE16get_or_init_slowNvNvNvMNtNtBe_4hash6randomNtB2i_11RandomState3new4KEYS27___rust_std_internal_init_fnECs14svwdtrmj2_24tectonic_engine_spx2html(void)

void _RINvMs0_NtNtNtNtCs268jdzri8zx_3std3sys12thread_local6native4lazyINtB6_7StorageINtNtCs7x1JxYRm7tp_4core4cell4CellTyyEEzE16get_or_init_slowNvNvNvMNtNtBe_4hash6randomNtB2i_11RandomState3new4KEYS27___rust_std_internal_init_fnECs14svwdtrmj2_24tectonic_engine_spx2html
               (undefined1 (*param_1) [16],byte *param_2)

{
  undefined1 auVar1 [16];
  
  if (param_1[1][0] != '\0') {
    return;
  }
  if (param_2 != (byte *)0x0) {
    auVar1 = *(undefined1 (*) [16])(param_2 + 8);
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    if ((*param_2 & 1) != 0) goto code_r0x00416c03;
  }
  auVar1 = (*(code *)PTR__RNvNtNtNtCs268jdzri8zx_3std3sys6random5linux19hashmap_random_keys_01814198
           )();
code_r0x00416c03:
  *param_1 = auVar1;
  param_1[1][0] = 1;
  return;
}


