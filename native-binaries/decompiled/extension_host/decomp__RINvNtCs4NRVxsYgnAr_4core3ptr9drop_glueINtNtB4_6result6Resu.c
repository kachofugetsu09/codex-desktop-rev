// 0013e910  undefined _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueINtNtB4_6result6ResultuNtNtNtCs2AWtUsOyxgP_3std2io5error5ErrorEECs1oEx7o4003C_14extension_host.llvm.12688782964324013805(void)

/* WARNING: Switch with 1 destination removed at 0x0013e985 */

void _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueINtNtB4_6result6ResultuNtNtNtCs2AWtUsOyxgP_3std2io5error5ErrorEECs1oEx7o4003C_14extension_host_llvm_12688782964324013805
               (ulong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (((param_1 != 0) && (1 < ((uint)param_1 & 3) - 2)) && ((param_1 & 3) != 0)) {
    uVar1 = *(undefined8 *)(param_1 - 1);
    puVar2 = *(undefined8 **)(param_1 + 7);
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(uVar1);
    }
    if (puVar2[1] != 0) {
      (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_001d3048)
                (uVar1,puVar2[1],puVar2[2]);
    }
    (*(code *)PTR_free_001d3ad8)(param_1 - 1,0x18,8);
    return;
  }
  return;
}


