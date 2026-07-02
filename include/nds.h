#ifndef NDS_H
#define NDS_H

#include <stdint.h>

typedef struct
{
    int initialized;
} nds_t;

int nds_init(nds_t *nds);
void nds_shutdown(nds_t *nds);

#endif
