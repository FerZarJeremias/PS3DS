#ifndef NDS_H
#define NDS_H

#include <stdint.h>
#include "core/types.h"
#include "core/memory.h"

typedef struct
{
    u8 initialized;

    memory_t memory;

} nds_t;

int nds_init(nds_t *nds);
void nds_shutdown(nds_t *nds);

#endif
