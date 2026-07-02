#include <string.h>

#include "core/memory.h"

void memory_init(Memory *memory)
{
    memset(memory->main_ram, 0, sizeof(memory->main_ram));
}

u8 memory_read8(Memory *memory, u32 addr)
{
    if (addr >= sizeof(memory->main_ram))
        return 0;

    return memory->main_ram[addr];
}

void memory_write8(Memory *memory, u32 addr, u8 value)
{
    if (addr >= sizeof(memory->main_ram))
        return;

    memory->main_ram[addr] = value;
}
