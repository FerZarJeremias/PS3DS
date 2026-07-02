#include "nds.h"

int nds_init(nds_t *nds)
{
    if (memory_init(&nds->memory) != 0)
        return -1;

    nds->initialized = 1;

    return 0;
}

void nds_shutdown(nds_t *nds)
{
    memory_shutdown(&nds->memory);

    nds->initialized = 0;
}
