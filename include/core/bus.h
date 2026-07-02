#ifndef BUS_H
#define BUS_H

#include "core/types.h"

void bus_init(void);

u8 bus_read8(u32 addr);
void bus_write8(u32 addr, u8 value);

#endif
