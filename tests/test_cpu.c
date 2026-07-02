#include <stdio.h>

#include "cpu/arm_cpu.h"

int main(void)
{
    ARMCPU cpu;

    arm_cpu_reset(&cpu);

    printf("PC inicial: %u\n", cpu.r[15]);

    arm_cpu_step(&cpu);

    printf("PC despues de un paso: %u\n", cpu.r[15]);

    arm_cpu_step(&cpu);

    printf("PC despues de dos pasos: %u\n", cpu.r[15]);

    return 0;
}
