#ifndef BUS_H
#define BUS_H

#include <stdint.h>

#define MAIN_RAM_SIZE (4 * 1024 * 1024)

typedef struct
{
    uint8_t main_ram[MAIN_RAM_SIZE];

} MemoryBus;

void bus_init(MemoryBus *bus);

uint8_t bus_read8(MemoryBus *bus, uint32_t address);
uint16_t bus_read16(MemoryBus *bus, uint32_t address);
uint32_t bus_read32(MemoryBus *bus, uint32_t address);

void bus_write8(MemoryBus *bus, uint32_t address, uint8_t value);
void bus_write16(MemoryBus *bus, uint32_t address, uint16_t value);
void bus_write32(MemoryBus *bus, uint32_t address, uint32_t value);

#endif
