#ifndef MEMORY_H
#define MEMORY_H

#include "core/types.h"

typedef struct
{
    u8 main_ram[4 * 1024 * 1024];
} Memory;

void memory_init(Memory *memory);

u8 memory_read8(Memory *memory, u32 addr);
void memory_write8(Memory *memory, u32 addr, u8 value);

#endif
