// 00410500  undefined _RNCNvNtNtCs7x1JxYRm7tp_4core3str7pattern13simd_containss0_0Csl1aTsAD2QWw_8tectonic(void)

undefined8
_RNCNvNtNtCs7x1JxYRm7tp_4core3str7pattern13simd_containss0_0Csl1aTsAD2QWw_8tectonic
          (long *param_1,long param_2,uint param_3,int param_4)

{
  int *piVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  ulong uVar7;
  ushort uVar8;
  int *piVar9;
  int *piVar10;
  
  if (param_4 == 0) {
    param_2 = param_2 + *param_1;
    piVar1 = (int *)param_1[2];
    uVar2 = param_1[3];
    if (uVar2 < 4) {
      do {
        if (uVar2 == 0) {
          return 1;
        }
        uVar4 = 0;
        for (uVar5 = param_3; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar7 = (ulong)uVar4;
        if (*(char *)(param_2 + 1 + uVar7) == (char)*piVar1) {
          if (uVar2 == 1) {
            return 1;
          }
          if (*(char *)(param_2 + 2 + uVar7) == *(char *)((long)piVar1 + 1)) {
            if (uVar2 == 2) {
              return 1;
            }
            if (*(char *)(param_2 + 3 + uVar7) == *(char *)((long)piVar1 + 2) && uVar2 == 3) {
              return 1;
            }
          }
        }
        bVar3 = (byte)uVar4 & 0xf;
        uVar8 = (ushort)param_3 & (-2 << bVar3 | 0xfffeU >> 0x10 - bVar3);
        param_3 = CONCAT22((short)(param_3 >> 0x10),uVar8);
      } while (uVar8 != 0);
    }
    else {
      do {
        uVar4 = 0;
        for (uVar5 = param_3; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        piVar6 = (int *)(param_2 + (ulong)uVar4 + uVar2 + -3);
        piVar10 = piVar1;
        for (piVar9 = (int *)(param_2 + (ulong)uVar4 + 1); piVar9 < piVar6; piVar9 = piVar9 + 1) {
          if (*piVar9 != *piVar10) goto code_r0x0041052d;
          piVar10 = piVar10 + 1;
        }
        if (*piVar6 == *(int *)((long)piVar1 + (uVar2 - 4))) {
          return 1;
        }
code_r0x0041052d:
        bVar3 = (byte)uVar4 & 0xf;
        uVar8 = (ushort)param_3 & (-2 << bVar3 | 0xfffeU >> 0x10 - bVar3);
        param_3 = CONCAT22((short)(param_3 >> 0x10),uVar8);
      } while (uVar8 != 0);
    }
  }
  return 0;
}


