#ifndef BUS_H
#define BUS_H

#include "core/types.h"
#include "core/memory.h"

typedef struct
{
    Memory *memory;
} Bus;

void bus_init(Bus *bus, Memory *memory);

u8 bus_read8(Bus *bus, u32 addr);
void bus_write8(Bus *bus, u32 addr, u8 value);

#endif
