#include "nds.h"

int nds_init(nds_t *nds)
{
    nds->initialized = 1;
    return 0;
}

void nds_shutdown(nds_t *nds)
{
    nds->initialized = 0;
}
