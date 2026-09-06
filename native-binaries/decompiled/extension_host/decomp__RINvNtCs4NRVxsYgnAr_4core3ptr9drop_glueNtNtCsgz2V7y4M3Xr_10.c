// 001336f0  undefined _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueNtNtCsgz2V7y4M3Xr_10serde_json5value5ValueECs1oEx7o4003C_14extension_host.llvm.18402832646499948387(void)

void _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueNtNtCsgz2V7y4M3Xr_10serde_json5value5ValueECs1oEx7o4003C_14extension_host_llvm_18402832646499948387
               (byte *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long alStack_90 [2];
  long lStack_80;
  ulong auStack_78 [3];
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  bVar1 = *param_1;
  if (2 < bVar1) {
    if (bVar1 == 3) {
      lVar4 = *(long *)(param_1 + 8);
      if (lVar4 != 0) {
        lVar5 = *(long *)(param_1 + 0x10);
        uVar3 = 1;
code_r0x001337b3:
        (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_001d3048)(lVar5,lVar4,uVar3);
        return;
      }
    }
    else if (bVar1 == 4) {
      lVar5 = *(long *)(param_1 + 0x10);
      lVar4 = lVar5;
      for (lVar6 = *(long *)(param_1 + 0x18) + 1; lVar6 != 1; lVar6 = lVar6 + -1) {
        _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueNtNtCsgz2V7y4M3Xr_10serde_json5value5ValueECs1oEx7o4003C_14extension_host_llvm_18402832646499948387
                  (lVar4);
        lVar4 = lVar4 + 0x20;
      }
      if (*(long *)(param_1 + 8) != 0) {
        lVar4 = *(long *)(param_1 + 8) << 5;
        uVar3 = 8;
        goto code_r0x001337b3;
      }
    }
    else {
      lVar4 = *(long *)(param_1 + 8);
      if (lVar4 == 0) {
        uStack_38 = 0;
      }
      else {
        uStack_60 = *(undefined8 *)(param_1 + 0x10);
        uStack_38 = *(undefined8 *)(param_1 + 0x18);
        auStack_78[1] = 0;
        uStack_50 = 0;
        auStack_78[2] = lVar4;
        lStack_48 = lVar4;
        uStack_40 = uStack_60;
      }
      auStack_78[0] = (ulong)(lVar4 != 0);
      uStack_58 = auStack_78[0];
      _RNvMsz_NtNtNtCscdodAO9FK5_5alloc11collections5btree3mapINtB5_8IntoIterNtNtBb_6string6StringNtNtCsgz2V7y4M3Xr_10serde_json5value5ValueE10dying_nextCs1oEx7o4003C_14extension_host_llvm_18402832646499948387
                (alStack_90,auStack_78);
      puVar2 = PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_001d3048;
      if (alStack_90[0] != 0) {
        do {
          lVar6 = lStack_80;
          lVar5 = alStack_90[0];
          lVar4 = *(long *)(alStack_90[0] + 0x168 + lStack_80 * 0x18);
          if (lVar4 != 0) {
            (*(code *)puVar2)(*(undefined8 *)(alStack_90[0] + lStack_80 * 0x18 + 0x170),lVar4,1);
          }
          _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueNtNtCsgz2V7y4M3Xr_10serde_json5value5ValueECs1oEx7o4003C_14extension_host_llvm_18402832646499948387
                    (lVar5 + lVar6 * 0x20);
          _RNvMsz_NtNtNtCscdodAO9FK5_5alloc11collections5btree3mapINtB5_8IntoIterNtNtBb_6string6StringNtNtCsgz2V7y4M3Xr_10serde_json5value5ValueE10dying_nextCs1oEx7o4003C_14extension_host_llvm_18402832646499948387
                    (alStack_90,auStack_78);
        } while (alStack_90[0] != 0);
      }
    }
  }
  return;
}


