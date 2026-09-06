// 003fe320  undefined _RINvXs2J_NtNtCs7x1JxYRm7tp_4core5slice4iterINtB7_4IterNtNtCs1Ii18fn1Uai_10serde_json5value5ValueENtNtNtNtBb_4iter6traits8iterator8Iterator3anyNCNvNtCs39mte1n7CTo_9node_repl12computer_use25computer_use_request_infos0_0EB2m_(void)

undefined8
_RINvXs2J_NtNtCs7x1JxYRm7tp_4core5slice4iterINtB7_4IterNtNtCs1Ii18fn1Uai_10serde_json5value5ValueENtNtNtNtBb_4iter6traits8iterator8Iterator3anyNCNvNtCs39mte1n7CTo_9node_repl12computer_use25computer_use_request_infos0_0EB2m_
          (undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar1 = (char *)*param_1;
  pcVar2 = (char *)param_1[1];
  if (pcVar1 == pcVar2) {
    return 0;
  }
  while (((pcVar3 = pcVar1 + 0x20, *pcVar1 != '\x03' || (*(long *)(pcVar1 + 0x18) != 6)) ||
         ((short)(*(int **)(pcVar1 + 0x10))[1] != 0x7379 || **(int **)(pcVar1 + 0x10) != 0x61776c61)
         )) {
    pcVar1 = pcVar3;
    if (pcVar3 == pcVar2) {
      *param_1 = pcVar3;
      return 0;
    }
  }
  *param_1 = pcVar3;
  return CONCAT71((int7)((ulong)pcVar2 >> 8),1);
}


