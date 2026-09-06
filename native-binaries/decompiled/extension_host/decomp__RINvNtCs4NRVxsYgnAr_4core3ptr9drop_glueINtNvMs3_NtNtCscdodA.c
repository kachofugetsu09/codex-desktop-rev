// 00133570  undefined _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueINtNvMs3_NtNtCscdodAO9FK5_5alloc11collections9vec_dequeINtBK_8VecDequeppE8truncate7DropperINtNtBO_4sync3ArcShEEECs1oEx7o4003C_14extension_host(void)

void _RINvNtCs4NRVxsYgnAr_4core3ptr9drop_glueINtNvMs3_NtNtCscdodAO9FK5_5alloc11collections9vec_dequeINtBK_8VecDequeppE8truncate7DropperINtNtBO_4sync3ArcShEEECs1oEx7o4003C_14extension_host
               (undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  if (param_2 != 0) {
    param_2 = 1 - param_2;
    do {
      plVar1 = (long *)*param_1;
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        _RNvMsn_NtCscdodAO9FK5_5alloc4syncINtB5_3ArcShE9drop_slowCs1oEx7o4003C_14extension_host
                  (param_1);
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + 1;
    } while (param_2 != 1);
  }
  return;
}


