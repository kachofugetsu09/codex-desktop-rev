// 00139730  undefined _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueNtNtNtCs2AWtUsOyxgP_3std2io5error5ErrorECs1oEx7o4003C_14extension_host(void)

/* WARNING: Switch with 1 destination removed at 0x001397a3 */

void _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueNtNtNtCs2AWtUsOyxgP_3std2io5error5ErrorECs1oEx7o4003C_14extension_host
               (ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = *param_1;
  if ((1 < ((uint)uVar1 & 3) - 2) && ((uVar1 & 3) != 0)) {
    uVar2 = *(undefined8 *)(uVar1 - 1);
    puVar3 = *(undefined8 **)(uVar1 + 7);
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(uVar2);
    }
    if (puVar3[1] != 0) {
      (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_001d3048)
                (uVar2,puVar3[1],puVar3[2]);
    }
    (*(code *)PTR_free_001d3ad8)(uVar1 - 1,0x18,8);
    return;
  }
  return;
}


