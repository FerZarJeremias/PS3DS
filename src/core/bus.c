#include "core/bus.h"

void bus_init(Bus *bus, Memory *memory)
{
    bus->memory = memory;
}

u8 bus_read8(Bus *bus, u32 addr)
{
    return memory_read8(bus->memory, addr);
}

void bus_write8(Bus *bus, u32 addr, u8 value)
{
    memory_write8(bus->memory, addr, value);
}
