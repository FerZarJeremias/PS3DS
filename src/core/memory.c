#include <stdlib.h>

#include "core/memory.h"

#define MAIN_RAM_SIZE (4 * 1024 * 1024)

int memory_init(memory_t *memory)
{
    memory->ram = (u8*)malloc(MAIN_RAM_SIZE);

    if (memory->ram == NULL)
        return -1;

    return 0;
}

void memory_shutdown(memory_t *memory)
{
    free(memory->ram);
    memory->ram = NULL;
}
