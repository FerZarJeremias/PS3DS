#include <stdio.h>

#include "core/memory.h"

int main(void)
{
    memory_init();

    memory_write8(10, 42);

    printf("%u\n", memory_read8(10));

    return 0;
}
