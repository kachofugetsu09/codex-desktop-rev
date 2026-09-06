// 003e7490  undefined _RINvMs7_NtCsleeWMjgK1Yj_9toml_edit5tableNtB6_5Entry14or_insert_withNCNvNtCs39mte1n7CTo_9node_repl12computer_use27computer_use_apps_table_mut0EB19_(void)

long _RINvMs7_NtCsleeWMjgK1Yj_9toml_edit5tableNtB6_5Entry14or_insert_withNCNvNtCs39mte1n7CTo_9node_repl12computer_use27computer_use_apps_table_mut0EB19_
               (long *param_1)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long lVar5;
  long *plVar6;
  byte *extraout_RDX;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [160];
  undefined1 uStack_18;
  
  if (*param_1 != -1) {
    (*(code *)PTR__RNvMNtCsleeWMjgK1Yj_9toml_edit5tableNtB2_5Table3new_01082eb0)(auStack_b8);
    uStack_18 = 1;
    uStack_c0 = 10;
    lVar5 = (*(code *)PTR__RNvMs9_NtCsleeWMjgK1Yj_9toml_edit5tableNtB5_11VacantEntry6insert_01084af8
            )(param_1,&uStack_c0);
    return lVar5;
  }
  uVar11 = param_1[1];
  uVar7 = param_1[2];
  if (uVar7 < *(ulong *)(uVar11 + 0x10)) {
    return uVar7 * 0x148 + *(long *)(uVar11 + 8);
  }
  plVar6 = (long *)(*(code *)PTR__RNvNtCs7x1JxYRm7tp_4core9panicking18panic_bounds_check_01085b58)
                             (uVar7,*(ulong *)(uVar11 + 0x10),
                              anon_68456376a71db0fb16ec66561a137f4c_22_llvm_7471929779756663545);
  _RINvNtCs7x1JxYRm7tp_4core3ptr9drop_glueNtNtCsleeWMjgK1Yj_9toml_edit5table11VacantEntryECs39mte1n7CTo_9node_repl_llvm_7471929779756663545
            (param_1);
  _Unwind_Resume();
  plVar6 = (long *)*plVar6;
  lVar5 = plVar6[2];
  if (*plVar6 == lVar5) {
    _RINvNvMs2_NtCskPe9mFtgPYj_5alloc7raw_vecINtB8_11RawVecInnerpE7reserve21do_reserve_and_handleNtNtBa_5alloc6GlobalECs39mte1n7CTo_9node_repl
              (plVar6,lVar5,1,1,1);
    lVar5 = plVar6[2];
  }
  *(undefined1 *)(plVar6[1] + lVar5) = 0x22;
  lVar5 = lVar5 + 1;
  plVar6[2] = lVar5;
  pbVar9 = extraout_RDX;
  do {
    lVar10 = 1;
    pbVar8 = pbVar9;
    do {
      if (uVar11 + lVar10 == 1) {
        if (uVar11 != 0) {
          if ((ulong)(*plVar6 - lVar5) < uVar11) {
            _RINvNvMs2_NtCskPe9mFtgPYj_5alloc7raw_vecINtB8_11RawVecInnerpE7reserve21do_reserve_and_handleNtNtBa_5alloc6GlobalECs39mte1n7CTo_9node_repl
                      (plVar6,lVar5,uVar11,1,1);
            lVar5 = plVar6[2];
          }
          (*(code *)PTR_memcpy_01081c18)(plVar6[1] + lVar5,pbVar9,uVar11);
          lVar5 = lVar5 + uVar11;
          plVar6[2] = lVar5;
        }
        if (*plVar6 == lVar5) {
          _RINvNvMs2_NtCskPe9mFtgPYj_5alloc7raw_vecINtB8_11RawVecInnerpE7reserve21do_reserve_and_handleNtNtBa_5alloc6GlobalECs39mte1n7CTo_9node_repl
                    (plVar6,lVar5,1,1,1);
          lVar5 = plVar6[2];
        }
        *(undefined1 *)(plVar6[1] + lVar5) = 0x22;
        plVar6[2] = lVar5 + 1;
        return 0;
      }
      bVar1 = *pbVar8;
      cVar2 = _RNvNtCs1Ii18fn1Uai_10serde_json3ser6ESCAPE[bVar1];
      pbVar8 = pbVar8 + 1;
      lVar10 = lVar10 + -1;
    } while (cVar2 == '\0');
    if (lVar10 != 0) {
      uVar7 = -lVar10;
      if ((ulong)(*plVar6 - lVar5) <= uVar7 && -(*plVar6 - lVar5) != lVar10) {
        _RINvNvMs2_NtCskPe9mFtgPYj_5alloc7raw_vecINtB8_11RawVecInnerpE7reserve21do_reserve_and_handleNtNtBa_5alloc6GlobalECs39mte1n7CTo_9node_repl
                  (plVar6,lVar5,uVar7,1,1);
        lVar5 = plVar6[2];
      }
      (*(code *)PTR_memcpy_01081c18)(plVar6[1] + lVar5,pbVar9,uVar7);
      lVar5 = lVar5 - lVar10;
      plVar6[2] = lVar5;
    }
    uVar11 = (uVar11 + lVar10) - 1;
    if (cVar2 == 'u') {
      uVar3 = _RNvNvNtNtCs1Ii18fn1Uai_10serde_json3ser9Formatter17write_char_escape10HEX_DIGITS
              [bVar1 >> 4];
      uVar4 = _RNvNvNtNtCs1Ii18fn1Uai_10serde_json3ser9Formatter17write_char_escape10HEX_DIGITS
              [bVar1 & 0xf];
      if ((ulong)(*plVar6 - lVar5) < 6) {
        _RINvNvMs2_NtCskPe9mFtgPYj_5alloc7raw_vecINtB8_11RawVecInnerpE7reserve21do_reserve_and_handleNtNtBa_5alloc6GlobalECs39mte1n7CTo_9node_repl
                  (plVar6,lVar5,6,1,1);
        lVar5 = plVar6[2];
      }
      lVar10 = plVar6[1];
      *(undefined4 *)(lVar10 + lVar5) = 0x3030755c;
      *(undefined1 *)(lVar10 + 4 + lVar5) = uVar3;
      *(undefined1 *)(lVar10 + 5 + lVar5) = uVar4;
      lVar5 = lVar5 + 6;
    }
    else {
      if ((ulong)(*plVar6 - lVar5) < 2) {
        _RINvNvMs2_NtCskPe9mFtgPYj_5alloc7raw_vecINtB8_11RawVecInnerpE7reserve21do_reserve_and_handleNtNtBa_5alloc6GlobalECs39mte1n7CTo_9node_repl
                  (plVar6,lVar5,2,1,1);
        lVar5 = plVar6[2];
      }
      lVar10 = plVar6[1];
      *(undefined1 *)(lVar10 + lVar5) = 0x5c;
      *(char *)(lVar10 + 1 + lVar5) = cVar2;
      lVar5 = lVar5 + 2;
    }
    plVar6[2] = lVar5;
    pbVar9 = pbVar8;
  } while( true );
}


