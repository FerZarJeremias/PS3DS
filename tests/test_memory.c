#include <stdio.h>

#include "core/memory.h"
#include "core/bus.h"

int main(void)
{
    Memory memory;
    Bus bus;

    memory_init(&memory);
    bus_init(&bus, &memory);

    bus_write8(&bus, 0, 42);

    printf("%u\n", bus_read8(&bus, 0));

    return 0;
}
