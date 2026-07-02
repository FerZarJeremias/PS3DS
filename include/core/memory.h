#ifndef MEMORY_H
#define MEMORY_H

#include "core/types.h"

#define MAIN_RAM_SIZE (4 * 1024 * 1024)

void memory_init(void);

u8 memory_read8(u32 addr);
void memory_write8(u32 addr, u8 value);

#endif
