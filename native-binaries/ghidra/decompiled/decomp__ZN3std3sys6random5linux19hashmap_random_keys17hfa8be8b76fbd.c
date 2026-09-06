// 002c0c70  undefined _ZN3std3sys6random5linux19hashmap_random_keys17hfa8be8b76fbdbfc1E(void)

undefined1  [16] _ZN3std3sys6random5linux19hashmap_random_keys17hfa8be8b76fbdbfc1E(void)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  code *pcVar4;
  char cVar5;
  ulong uVar6;
  undefined4 *puVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_48 = 0;
  uStack_40 = 0;
  if (_ZN3std3sys6random5linux9getrandom19GETRANDOM_AVAILABLE17h8cfca5359503d428E_0 != '\0') {
    uVar10 = 0x10;
    puVar11 = &uStack_48;
    if (PTR_getrandom_00380e58 == (undefined *)0x0) {
code_r0x002c0d3a:
      while( true ) {
        cVar5 = _ZN3std3sys6random5linux9getrandom23GRND_INSECURE_AVAILABLE17hbf84d3795def3979E_0;
        bVar12 = _ZN3std3sys6random5linux9getrandom23GRND_INSECURE_AVAILABLE17hbf84d3795def3979E_0
                 == '\0';
        uVar6 = (*(code *)PTR_syscall_00380e40)(0x13e,puVar11,uVar10,!bVar12 * '\x03' + '\x01');
        if (uVar6 == 0xffffffffffffffff) break;
        if (uVar10 < uVar6) goto code_r0x002c0e87;
        puVar11 = (undefined8 *)((long)puVar11 + uVar6);
        uVar10 = uVar10 - uVar6;
        if (uVar10 == 0) goto code_r0x002c0e33;
      }
      puVar7 = (undefined4 *)(*(code *)PTR___errno_location_00380f10)();
      switch(*puVar7) {
      case 1:
      case 0x26:
        goto code_r0x002c0db1;
      default:
        goto code_r0x002c0e6f;
      case 4:
        goto code_r0x002c0d3a;
      case 0xb:
        goto code_r0x002c0dba;
      case 0x16:
        if (cVar5 == '\0') goto code_r0x002c0e6f;
        _ZN3std3sys6random5linux9getrandom23GRND_INSECURE_AVAILABLE17hbf84d3795def3979E_0 = '\0';
        goto code_r0x002c0d3a;
      }
    }
code_r0x002c0cb5:
    while( true ) {
      cVar5 = _ZN3std3sys6random5linux9getrandom23GRND_INSECURE_AVAILABLE17hbf84d3795def3979E_0;
      bVar12 = _ZN3std3sys6random5linux9getrandom23GRND_INSECURE_AVAILABLE17hbf84d3795def3979E_0 ==
               '\0';
      uVar6 = (*(code *)PTR_getrandom_00380e58)(puVar11,uVar10,!bVar12 * '\x03' + '\x01');
      if (uVar6 == 0xffffffffffffffff) break;
      if (uVar10 < uVar6) goto code_r0x002c0e87;
      puVar11 = (undefined8 *)((long)puVar11 + uVar6);
      uVar10 = uVar10 - uVar6;
      if (uVar10 == 0) goto code_r0x002c0e33;
    }
    puVar7 = (undefined4 *)(*(code *)PTR___errno_location_00380f10)();
    switch(*puVar7) {
    case 1:
    case 0x26:
      goto code_r0x002c0db1;
    default:
      goto code_r0x002c0e6f;
    case 4:
      goto code_r0x002c0cb5;
    case 0xb:
      goto code_r0x002c0dba;
    case 0x16:
      if (cVar5 == '\0') goto code_r0x002c0e6f;
      _ZN3std3sys6random5linux9getrandom23GRND_INSECURE_AVAILABLE17hbf84d3795def3979E_0 = '\0';
      goto code_r0x002c0cb5;
    }
  }
  puVar11 = &uStack_48;
  uVar10 = 0x10;
  goto code_r0x002c0dc3;
code_r0x002c0dba:
  if (!bVar12) {
code_r0x002c0e6f:
    uVar6 = _ZN4core9panicking9panic_fmt17hc13412975f563ddeE(&UNK_00340c69,0x3d,&UNK_0037d498);
code_r0x002c0e87:
    lVar9 = _ZN4core5slice5index16slice_index_fail17hf1918ccaba3e9ba3E
                      (uVar6,uVar10,uVar10,&UNK_0037d4b0);
code_r0x002c0e9c:
    puStack_50 = (undefined *)(lVar9 << 0x20 | 2);
code_r0x002c0ead:
    _ZN4core6result13unwrap_failed17hd8abf8e6faab58b4E
              (&UNK_00340c69,0x1e,&puStack_50,&UNK_0037da18,&UNK_0037d480);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
code_r0x002c0dc3:
  uVar3 = _ZN3std3sys6random5linux9getrandom6DEVICE17h1ad65e7a356ae121E._4_4_;
  pcVar1 = (code *)PTR___errno_location_00380f10;
  pcVar4 = (code *)PTR_read_00380d70;
  if ((int)_ZN3std3sys6random5linux9getrandom6DEVICE17h1ad65e7a356ae121E != 0)
  goto code_r0x002c0e5f;
code_r0x002c0e05:
  do {
    uVar6 = (*pcVar4)(uVar3,puVar11,uVar10);
    if (uVar6 == 0xffffffffffffffff) {
      piVar8 = (int *)(*pcVar1)();
      lVar9 = (long)*piVar8;
      if (lVar9 != 4) goto code_r0x002c0e9c;
    }
    else {
      if (uVar6 == 0) {
        puStack_50 = &UNK_0037f448;
        goto code_r0x002c0ead;
      }
      if (uVar10 < uVar6) {
        _ZN4core5slice5index16slice_index_fail17hf1918ccaba3e9ba3E
                  (uVar6,uVar10,uVar10,&UNK_0037f460);
code_r0x002c0e5f:
        puStack_50 = (undefined *)
                     _ZN3std4sync9once_lock17OnceLock_LT_T_GT_10initialize17h8b4ea51e7c9fdfcaE();
        uVar3 = _ZN3std3sys6random5linux9getrandom6DEVICE17h1ad65e7a356ae121E._4_4_;
        pcVar1 = (code *)PTR___errno_location_00380f10;
        pcVar4 = (code *)PTR_read_00380d70;
        if (puStack_50 != (undefined *)0x0) goto code_r0x002c0ead;
        goto code_r0x002c0e05;
      }
      puVar11 = (undefined8 *)((long)puVar11 + uVar6);
      uVar10 = uVar10 - uVar6;
    }
    if (uVar10 == 0) {
code_r0x002c0e33:
      auVar2._8_8_ = uStack_40;
      auVar2._0_8_ = uStack_48;
      return auVar2;
    }
  } while( true );
code_r0x002c0db1:
  _ZN3std3sys6random5linux9getrandom19GETRANDOM_AVAILABLE17h8cfca5359503d428E_0 = '\0';
  goto code_r0x002c0dc3;
}


