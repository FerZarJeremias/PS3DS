#include "cpu/arm_cpu.h"

#include <string.h>

void arm_cpu_reset(ARMCPU *cpu)
{
    memset(cpu, 0, sizeof(ARMCPU));
}
