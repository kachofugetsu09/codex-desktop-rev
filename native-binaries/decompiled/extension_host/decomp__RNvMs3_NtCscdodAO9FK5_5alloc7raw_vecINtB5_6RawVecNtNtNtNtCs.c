// 00133ae0  undefined _RNvMs3_NtCscdodAO9FK5_5alloc7raw_vecINtB5_6RawVecNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5waker5EntryE8grow_oneCs1oEx7o4003C_14extension_host(void)

void _RNvMs3_NtCscdodAO9FK5_5alloc7raw_vecINtB5_6RawVecNtNtNtNtCs2AWtUsOyxgP_3std4sync4mpmc5waker5EntryE8grow_oneCs1oEx7o4003C_14extension_host
               (ulong *param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  int aiStack_28 [2];
  ulong uStack_20;
  undefined8 uStack_18;
  
  uVar2 = *param_1 * 2;
  uVar3 = 4;
  if (4 < uVar2) {
    uVar3 = uVar2;
  }
  _RNvMs4_NtCscdodAO9FK5_5alloc7raw_vecNtB5_11RawVecInner11finish_growCs1oEx7o4003C_14extension_host
            (aiStack_28,*param_1,param_1[1],uVar3,0x18);
  if (aiStack_28[0] != 1) {
    param_1[1] = uStack_20;
    *param_1 = uVar3;
    return;
  }
  (*(code *)PTR__RNvNtCscdodAO9FK5_5alloc7raw_vec12handle_error_001d3098)(uStack_20,uStack_18);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


