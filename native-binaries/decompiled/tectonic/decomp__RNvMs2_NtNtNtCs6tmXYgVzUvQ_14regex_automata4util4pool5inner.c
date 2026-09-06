// 00402210  undefined _RNvMs2_NtNtNtCs6tmXYgVzUvQ_14regex_automata4util4pool5innerINtB5_4PoolNtNtNtBb_4meta5regex5CacheINtNtCskPe9mFtgPYj_5alloc5boxed3BoxDINtNtNtCs7x1JxYRm7tp_4core3ops8function2FnuEp6OutputB16_NtNtNtB2d_5panic11unwind_safe13RefUnwindSafeNtB32_10UnwindSafeNtNtB2d_6marker4SyncNtB42_4SendEL_EE8get_slowCs72o0HLIKWBT_8tectonic(void)

undefined8 *
_RNvMs2_NtNtNtCs6tmXYgVzUvQ_14regex_automata4util4pool5innerINtB5_4PoolNtNtNtBb_4meta5regex5CacheINtNtCskPe9mFtgPYj_5alloc5boxed3BoxDINtNtNtCs7x1JxYRm7tp_4core3ops8function2FnuEp6OutputB16_NtNtNtB2d_5panic11unwind_safe13RefUnwindSafeNtB32_10UnwindSafeNtNtB2d_6marker4SyncNtB42_4SendEL_EE8get_slowCs72o0HLIKWBT_8tectonic
          (undefined8 *param_1,long param_2,ulong param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  int *piVar11;
  bool bVar12;
  undefined8 uStack_628;
  int iStack_620;
  int iStack_61c;
  int iStack_618;
  int iStack_614;
  int iStack_610;
  int iStack_60c;
  int iStack_608;
  int iStack_604;
  int iStack_600;
  int iStack_5fc;
  int iStack_5f8;
  int iStack_5f4;
  int iStack_5f0;
  int iStack_5ec;
  int iStack_5e8;
  int iStack_5e4;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 *puStack_5d0;
  int *piStack_5c8;
  undefined1 auStack_5a0 [1400];
  
  if (param_4 == 0) {
    LOCK();
    bVar12 = *(long *)(param_2 + 0x28) == 0;
    if (bVar12) {
      *(long *)(param_2 + 0x28) = 1;
    }
    UNLOCK();
    if (bVar12) {
      (**(code **)(*(long *)(param_2 + 0x20) + 0x28))(auStack_5a0,*(undefined8 *)(param_2 + 0x18));
      if (*(int *)(param_2 + 0x30) != -1) {
        _RINvNtCs7x1JxYRm7tp_4core3ptr9drop_glueNtNtNtCs6tmXYgVzUvQ_14regex_automata4meta5regex5CacheECs72o0HLIKWBT_8tectonic
                  (param_2 + 0x30);
      }
      (*(code *)PTR_memcpy_018136a0)(param_2 + 0x30,auStack_5a0,0x578);
      param_1[2] = param_2;
      *param_1 = 1;
      param_1[1] = param_3;
      goto code_r0x0040249e;
    }
  }
  uVar2 = *(ulong *)(param_2 + 0x10);
  if (uVar2 == 0) {
    uVar7 = (*(code *)
              PTR__RNvNtNtCs7x1JxYRm7tp_4core9panicking11panic_const23panic_const_rem_by_zero_018124c0
            )(&UNK_01659198);
    puVar10 = auStack_5a0;
    (*(code *)PTR_memcpy_018136a0)();
    piVar8 = (int *)_Unwind_Resume(uVar7);
    _RINvNtCs7x1JxYRm7tp_4core3ptr9drop_glueNtNtNtCs6tmXYgVzUvQ_14regex_automata4meta5regex5CacheECs72o0HLIKWBT_8tectonic
              (auStack_5a0);
    piVar11 = piVar8;
    _Unwind_Resume();
    (*(code *)PTR__RNvNtCs7x1JxYRm7tp_4core9panicking16panic_in_cleanup_01814a48)();
    iStack_620 = CONCAT31(iStack_620._1_3_,10);
    piStack_5c8 = piVar8;
    puVar9 = (undefined8 *)
             _RNvYNtNtNtCs6BuOKapWo4J_4toml2de5error5ErrorNtNtCsa0iawoYldi8_10serde_core2de5Error12invalid_typeCs72o0HLIKWBT_8tectonic
                       ();
    if (*piVar11 == 2) {
      if (puVar10 != (undefined1 *)0x0) {
        lVar6 = *(long *)(piVar11 + 4);
        uVar7 = *(undefined8 *)(piVar11 + 6);
        uStack_628 = 0;
        puVar9 = (undefined8 *)
                 _RNvYNtNtNtCs6BuOKapWo4J_4toml2de5error5ErrorNtNtCsa0iawoYldi8_10serde_core2de5Error14invalid_lengthCs72o0HLIKWBT_8tectonic
                           (&iStack_620,puVar10,&uStack_628,&UNK_01659640);
        if (CONCAT44(iStack_61c,iStack_620) != 2) {
          *(undefined8 **)(piVar11 + 0x14) = puStack_5d0;
          *(undefined8 *)(piVar11 + 0x10) = uStack_5e0;
          *(undefined8 *)(piVar11 + 0x12) = uStack_5d8;
          piVar11[0xc] = iStack_5f0;
          piVar11[0xd] = iStack_5ec;
          piVar11[0xe] = iStack_5e8;
          piVar11[0xf] = iStack_5e4;
          piVar11[8] = iStack_600;
          piVar11[9] = iStack_5fc;
          piVar11[10] = iStack_5f8;
          piVar11[0xb] = iStack_5f4;
          piVar11[4] = iStack_610;
          piVar11[5] = iStack_60c;
          piVar11[6] = iStack_608;
          piVar11[7] = iStack_604;
          *piVar11 = iStack_620;
          piVar11[1] = iStack_61c;
          piVar11[2] = iStack_618;
          piVar11[3] = iStack_614;
          if (lVar6 == 0) {
            return puStack_5d0;
          }
          puVar9 = (undefined8 *)
                   (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_01816b68)
                             (uVar7,lVar6,1);
          return puVar9;
        }
      }
      piVar11[0] = 2;
      piVar11[1] = 0;
    }
    return puVar9;
  }
  if ((param_3 | uVar2) >> 0x20 == 0) {
    param_3 = (param_3 & 0xffffffff) % (uVar2 & 0xffffffff);
  }
  else {
    param_3 = param_3 % uVar2;
  }
  lVar6 = *(long *)(param_2 + 8);
  piVar11 = (int *)(lVar6 + param_3 * 0x40);
  LOCK();
  bVar12 = *piVar11 == 0;
  if (bVar12) {
    *piVar11 = 1;
  }
  UNLOCK();
  if (bVar12) {
    piVar11 = (int *)(lVar6 + param_3 * 0x40);
    if ((_RNvNtNtCs268jdzri8zx_3std9panicking11panic_count18GLOBAL_PANIC_COUNT & 0x7fffffffffffffff)
        == 0) {
      if ((char)piVar11[1] == '\0') {
        lVar6 = *(long *)(piVar11 + 6);
        if (lVar6 != 0) {
          bVar4 = 0;
code_r0x0040237b:
          *(long *)(piVar11 + 6) = lVar6 + -1;
          uVar7 = *(undefined8 *)(*(long *)(piVar11 + 4) + -8 + lVar6 * 8);
          param_1[2] = param_2;
          *param_1 = 0;
          param_1[1] = uVar7;
          *(undefined1 *)(param_1 + 3) = 0;
          if (((bVar4 == 0) &&
              ((_RNvNtNtCs268jdzri8zx_3std9panicking11panic_count18GLOBAL_PANIC_COUNT &
               0x7fffffffffffffff) != 0)) &&
             (cVar5 = (*(code *)
                        PTR__RNvNtNtCs268jdzri8zx_3std9panicking11panic_count17is_zero_slow_path_01817f90
                      )(), cVar5 == '\0')) {
            *(undefined1 *)(piVar11 + 1) = 1;
          }
          LOCK();
          iVar1 = *piVar11;
          *piVar11 = 0;
          UNLOCK();
          if (iVar1 != 2) {
            return param_1;
          }
          (*(code *)
            PTR__RNvMNtNtNtNtCs268jdzri8zx_3std3sys4sync5mutex5futexNtB2_5Mutex4wake_01813720)
                    (piVar11);
          return param_1;
        }
code_r0x00402437:
        if (((_RNvNtNtCs268jdzri8zx_3std9panicking11panic_count18GLOBAL_PANIC_COUNT &
             0x7fffffffffffffff) != 0) &&
           (cVar5 = (*(code *)
                      PTR__RNvNtNtCs268jdzri8zx_3std9panicking11panic_count17is_zero_slow_path_01817f90
                    )(), cVar5 == '\0')) {
          *(undefined1 *)(piVar11 + 1) = 1;
        }
code_r0x00402444:
        LOCK();
        iVar1 = *piVar11;
        *piVar11 = 0;
        UNLOCK();
        if (iVar1 == 2) {
          (*(code *)
            PTR__RNvMNtNtNtNtCs268jdzri8zx_3std3sys4sync5mutex5futexNtB2_5Mutex4wake_01813720)
                    (piVar11);
        }
        (**(code **)(*(long *)(param_2 + 0x20) + 0x28))(auStack_5a0,*(undefined8 *)(param_2 + 0x18))
        ;
        (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_018160c0)();
        lVar6 = (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_018174c8)(0x578,8);
        if (lVar6 != 0) {
          (*(code *)PTR_memcpy_018136a0)(lVar6,auStack_5a0,0x578);
          param_1[2] = param_2;
          *param_1 = 0;
          param_1[1] = lVar6;
code_r0x0040249e:
          *(undefined1 *)(param_1 + 3) = 0;
          return param_1;
        }
        (*(code *)PTR__RNvNtCskPe9mFtgPYj_5alloc5alloc18handle_alloc_error_01818890)(8,0x578);
        goto code_r0x004024d1;
      }
code_r0x004022f4:
      if (((_RNvNtNtCs268jdzri8zx_3std9panicking11panic_count18GLOBAL_PANIC_COUNT &
           0x7fffffffffffffff) != 0) &&
         (cVar5 = (*(code *)
                    PTR__RNvNtNtCs268jdzri8zx_3std9panicking11panic_count17is_zero_slow_path_01817f90
                  )(), cVar5 == '\0')) {
        *(undefined1 *)(piVar11 + 1) = 1;
      }
    }
    else {
      bVar4 = (*(code *)
                PTR__RNvNtNtCs268jdzri8zx_3std9panicking11panic_count17is_zero_slow_path_01817f90)()
      ;
      if ((char)piVar11[1] == '\0') {
        lVar6 = *(long *)(piVar11 + 6);
        if (lVar6 != 0) {
          bVar4 = bVar4 ^ 1;
          goto code_r0x0040237b;
        }
        if (bVar4 != 0) goto code_r0x00402437;
        goto code_r0x00402444;
      }
      if (bVar4 != 0) goto code_r0x004022f4;
    }
    LOCK();
    iVar1 = *piVar11;
    *piVar11 = 0;
    UNLOCK();
    if (iVar1 == 2) {
      (*(code *)PTR__RNvMNtNtNtNtCs268jdzri8zx_3std3sys4sync5mutex5futexNtB2_5Mutex4wake_01813720)
                (piVar11);
    }
  }
  (**(code **)(*(long *)(param_2 + 0x20) + 0x28))(auStack_5a0,*(undefined8 *)(param_2 + 0x18));
  (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc35___rust_no_alloc_shim_is_unstable_v2_018160c0)();
  lVar6 = (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc12___rust_alloc_018174c8)(0x578,8);
  if (lVar6 != 0) {
    (*(code *)PTR_memcpy_018136a0)(lVar6,auStack_5a0,0x578);
    param_1[2] = param_2;
    *param_1 = 0;
    param_1[1] = lVar6;
    *(undefined1 *)(param_1 + 3) = 1;
    return param_1;
  }
  (*(code *)PTR__RNvNtCskPe9mFtgPYj_5alloc5alloc18handle_alloc_error_01818890)(8,0x578);
code_r0x004024d1:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


