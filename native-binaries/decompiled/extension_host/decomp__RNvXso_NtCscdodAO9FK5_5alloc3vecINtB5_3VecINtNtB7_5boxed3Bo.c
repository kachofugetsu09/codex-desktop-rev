// 00134c00  undefined _RNvXso_NtCscdodAO9FK5_5alloc3vecINtB5_3VecINtNtB7_5boxed3BoxDINtNtNtCs4NRVxsYgnAr_4core3ops8function6FnOnceuEp6OutputuNtNtB14_6marker4SendEL_EENtNtB12_4drop4Drop4dropCs1oEx7o4003C_14extension_host(void)

void _RNvXso_NtCscdodAO9FK5_5alloc3vecINtB5_3VecINtNtB7_5boxed3BoxDINtNtNtCs4NRVxsYgnAr_4core3ops8function6FnOnceuEp6OutputuNtNtB14_6marker4SendEL_EENtNtB12_4drop4Drop4dropCs1oEx7o4003C_14extension_host
               (long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar3 = PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_001d3048;
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    lVar4 = *(long *)(param_1 + 8) + 0x18;
    do {
      uVar1 = *(undefined8 *)(lVar4 + -0x18);
      puVar2 = *(undefined8 **)(lVar4 + -0x10);
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(uVar1);
      }
      if (puVar2[1] != 0) {
        (*(code *)puVar3)(uVar1,puVar2[1],puVar2[2]);
      }
      lVar4 = lVar4 + 0x10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}


