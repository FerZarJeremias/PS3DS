#ifndef MEMORY_H
#define MEMORY_H

#include "core/types.h"

typedef struct
{
    u8 *ram;

} memory_t;

int memory_init(memory_t *memory);

void memory_shutdown(memory_t *memory);

#endif
