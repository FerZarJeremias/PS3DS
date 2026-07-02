#include "core/bus.h"
#include "core/memory.h"

void bus_init(void)
{
    memory_init();
}

u8 bus_read8(u32 addr)
{
    return memory_read8(addr);
}
