// 00415e30  undefined _RINvMNtCskAih3DnBuhX_6anyhow5errorNtB5_5Error9constructINtNtB5_7wrapper12MessageErrorReEECs14svwdtrmj2_24tectonic_engine_spx2html.llvm.7000139736538535534(void)

void _RINvMNtCskAih3DnBuhX_6anyhow5errorNtB5_5Error9constructINtNtB5_7wrapper12MessageErrorReEECs14svwdtrmj2_24tectonic_engine_spx2html_llvm_7000139736538535534
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  uVar6 = param_3[4];
  uVar7 = param_3[5];
  (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_018160c0)();
  puVar8 = (undefined8 *)(*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_018174c8)(0x48,8);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[8] = param_2;
    puVar8[6] = uVar7;
    puVar8[7] = param_1;
    puVar8[4] = uVar5;
    puVar8[5] = uVar6;
    puVar8[2] = uVar3;
    puVar8[3] = uVar4;
    *puVar8 = anon_eaf4b044c375d2dc1b4a73742224354d_6_llvm_7000139736538535534;
    puVar8[1] = uVar2;
    return;
  }
  (*(code *)PTR__RNvNtCskPe9mFtgPYj_5alloc5alloc18handle_alloc_error_01818890)(8,0x48);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


