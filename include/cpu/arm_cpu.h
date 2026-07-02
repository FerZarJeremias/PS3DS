#ifndef ARM_CPU_H
#define ARM_CPU_H
#include "core/bus.h"

#include <stdint.h>

typedef struct
{
    uint32_t r[16];

    uint32_t cpsr;
    uint32_t spsr;
    Bus *bus;

} ARMCPU;

void arm_cpu_reset(ARMCPU *cpu);

void arm_cpu_step(ARMCPU *cpu);

void arm_cpu_connect_bus(ARMCPU *cpu, Bus *bus);

#endif
