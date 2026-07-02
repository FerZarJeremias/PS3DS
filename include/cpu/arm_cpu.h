#ifndef ARM_CPU_H
#define ARM_CPU_H

#include <stdint.h>

typedef struct
{
    uint32_t r[16];

    uint32_t cpsr;
    uint32_t spsr;

} ARMCPU;

void arm_cpu_reset(ARMCPU *cpu);

void arm_cpu_step(ARMCPU *cpu);

#endif
