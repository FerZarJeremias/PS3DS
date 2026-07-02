#include <string.h>

#include "core/memory.h"

static u8 main_ram[MAIN_RAM_SIZE];

void memory_init(void)
{
    memset(main_ram, 0, sizeof(main_ram));
}

u8 memory_read8(u32 addr)
{
    if (addr >= MAIN_RAM_SIZE)
        return 0;

    return main_ram[addr];
}
