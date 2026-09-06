// 0013a870  undefined _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcINtNtNtCs2AWtUsOyxgP_3std6thread9lifecycle6PacketzEE9drop_slowCs1oEx7o4003C_14extension_host(void)

/* WARNING: Switch with 1 destination removed at 0x0013a8f5 */

void _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcINtNtNtCs2AWtUsOyxgP_3std6thread9lifecycle6PacketzEE9drop_slowCs1oEx7o4003C_14extension_host
               (long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar1 = *param_1;
  _RNvXs0_NtNtCs2AWtUsOyxgP_3std6thread9lifecycleINtB5_6PacketzENtNtNtCs4NRVxsYgnAr_4core3ops4drop4Drop4dropCs1oEx7o4003C_14extension_host
            (lVar1 + 0x10);
  plVar2 = *(long **)(lVar1 + 0x20);
  if (plVar2 != (long *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)
        PTR__RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcNtNtNtCs2AWtUsOyxgP_3std6thread6scoped9ScopeDataE9drop_slowCs6f2BchxFEfg_14extension_host_001d31e0
      )(lVar1 + 0x20);
    }
  }
  lVar3 = *(long *)(lVar1 + 0x10);
  if (lVar3 != 0) {
    puVar4 = *(undefined8 **)(lVar1 + 0x18);
    if ((code *)*puVar4 != (code *)0x0) {
      (*(code *)*puVar4)(lVar3);
    }
    if (puVar4[1] != 0) {
      (*(code *)PTR__RNvCs9wFQrvczXsK_7___rustc14___rust_dealloc_001d3048)
                (lVar3,puVar4[1],puVar4[2]);
    }
  }
  if (lVar1 != -1) {
    LOCK();
    plVar2 = (long *)(lVar1 + 8);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_free_001d3ad8)(lVar1,0x28,8);
      return;
    }
  }
  return;
}


