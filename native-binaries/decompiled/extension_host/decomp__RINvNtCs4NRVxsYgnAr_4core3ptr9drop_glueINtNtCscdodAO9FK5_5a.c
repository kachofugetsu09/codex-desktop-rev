// 0013ea30  undefined _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueINtNtCscdodAO9FK5_5alloc4sync8ArcInnerINtNtNtCs2AWtUsOyxgP_3std6thread9lifecycle6PacketuEEECs1oEx7o4003C_14extension_host(void)

/* WARNING: Switch with 1 destination removed at 0x0013eb00 */

void _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueINtNtCscdodAO9FK5_5alloc4sync8ArcInnerINtNtNtCs2AWtUsOyxgP_3std6thread9lifecycle6PacketuEEECs1oEx7o4003C_14extension_host
               (long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  lVar1 = *(long *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  if ((lVar1 != 0) && (lVar2 != 0)) {
    puVar3 = *(undefined8 **)(param_1 + 0x28);
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(lVar2);
    }
    if (puVar3[1] != 0) {
      (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_001d3048)
                (lVar2,puVar3[1],puVar3[2]);
    }
  }
  *(long *)(param_1 + 0x18) = 0;
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 != (long *)0x0) {
    (*(code *)
      PTR__RNvMNtNtCs2AWtUsOyxgP_3std6thread6scopedNtB2_9ScopeData29decrement_num_running_threads_001d31f8
    )(plVar4 + 2,(byte)lVar1 & lVar2 != 0);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      (*(code *)
        PTR__RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcNtNtNtCs2AWtUsOyxgP_3std6thread6scoped9ScopeDataE9drop_slowCs6f2BchxFEfg_14extension_host_001d31e0
      )(param_1 + 0x10);
    }
  }
  if ((*(long *)(param_1 + 0x18) != 0) && (lVar1 = *(long *)(param_1 + 0x20), lVar1 != 0)) {
    puVar3 = *(undefined8 **)(param_1 + 0x28);
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(lVar1);
    }
    if (puVar3[1] != 0) {
      (*(code *)PTR_free_001d3ad8)(lVar1,puVar3[1],puVar3[2]);
      return;
    }
  }
  return;
}


