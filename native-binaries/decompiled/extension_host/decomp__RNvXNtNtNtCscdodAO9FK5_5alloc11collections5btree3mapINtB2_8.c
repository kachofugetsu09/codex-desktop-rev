// 00134580  undefined _RNvXNtNtNtCscdodAO9FK5_5alloc11collections5btree3mapINtB2_8BTreeMapNtNtB8_6string6StringNtNtCsgz2V7y4M3Xr_10serde_json5value5ValueENtNtNtCs4NRVxsYgnAr_4core3ops4drop4Drop4dropCs1oEx7o4003C_14extension_host(void)

void _RNvXNtNtNtCscdodAO9FK5_5alloc11collections5btree3mapINtB2_8BTreeMapNtNtB8_6string6StringNtNtCsgz2V7y4M3Xr_10serde_json5value5ValueENtNtNtCs4NRVxsYgnAr_4core3ops4drop4Drop4dropCs1oEx7o4003C_14extension_host
               (long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long alStack_88 [2];
  long lStack_78;
  ulong auStack_70 [3];
  long lStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    lStack_30 = 0;
  }
  else {
    lStack_58 = param_1[1];
    lStack_30 = param_1[2];
    auStack_70[1] = 0;
    uStack_48 = 0;
    auStack_70[2] = lVar1;
    lStack_40 = lVar1;
    lStack_38 = lStack_58;
  }
  auStack_70[0] = (ulong)(lVar1 != 0);
  uStack_50 = auStack_70[0];
  _RNvMsz_NtNtNtCscdodAO9FK5_5alloc11collections5btree3mapINtB5_8IntoIterNtNtBb_6string6StringNtNtCsgz2V7y4M3Xr_10serde_json5value5ValueE10dying_nextCs1oEx7o4003C_14extension_host_llvm_18402832646499948387
            (alStack_88,auStack_70);
  puVar2 = PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_001d3048;
  if (alStack_88[0] != 0) {
    do {
      lVar4 = lStack_78;
      lVar3 = alStack_88[0];
      lVar1 = *(long *)(alStack_88[0] + 0x168 + lStack_78 * 0x18);
      if (lVar1 != 0) {
        (*(code *)puVar2)(*(undefined8 *)(alStack_88[0] + lStack_78 * 0x18 + 0x170),lVar1,1);
      }
      _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueNtNtCsgz2V7y4M3Xr_10serde_json5value5ValueECs1oEx7o4003C_14extension_host_llvm_18402832646499948387
                (lVar3 + lVar4 * 0x20);
      _RNvMsz_NtNtNtCscdodAO9FK5_5alloc11collections5btree3mapINtB5_8IntoIterNtNtBb_6string6StringNtNtCsgz2V7y4M3Xr_10serde_json5value5ValueE10dying_nextCs1oEx7o4003C_14extension_host_llvm_18402832646499948387
                (alStack_88,auStack_70);
    } while (alStack_88[0] != 0);
  }
  return;
}


