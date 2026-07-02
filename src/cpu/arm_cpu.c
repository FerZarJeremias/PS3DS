#include "cpu/arm_cpu.h"

#include <string.h>

void arm_cpu_reset(ARMCPU *cpu)
{
    memset(cpu, 0, sizeof(ARMCPU));

    cpu->r[15] = 0;
}

void arm_cpu_step(ARMCPU *cpu)
{
    cpu->r[15] += 4;
}
