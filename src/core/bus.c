#include "core/bus.h"

#include <string.h>

void bus_init(MemoryBus *bus)
{
    memset(bus->main_ram, 0, sizeof(bus->main_ram));
}

uint8_t bus_read8(MemoryBus *bus, uint32_t address)
{
    return bus->main_ram[address % MAIN_RAM_SIZE];
}

uint16_t bus_read16(MemoryBus *bus, uint32_t address)
{
    uint16_t value = 0;

    value |= bus_read8(bus, address);
    value |= bus_read8(bus, address + 1) << 8;

    return value;
}

uint32_t bus_read32(MemoryBus *bus, uint32_t address)
{
    uint32_t value = 0;

    value |= bus_read8(bus, address);
    value |= bus_read8(bus, address + 1) << 8;
    value |= bus_read8(bus, address + 2) << 16;
    value |= bus_read8(bus, address + 3) << 24;

    return value;
}

void bus_write8(MemoryBus *bus, uint32_t address, uint8_t value)
{
    bus->main_ram[address % MAIN_RAM_SIZE] = value;
}

void bus_write16(MemoryBus *bus, uint32_t address, uint16_t value)
{
    bus_write8(bus, address, value & 0xFF);
    bus_write8(bus, address + 1, (value >> 8) & 0xFF);
}

void bus_write32(MemoryBus *bus, uint32_t address, uint32_t value)
{
    bus_write8(bus, address, value & 0xFF);
    bus_write8(bus, address + 1, (value >> 8) & 0xFF);
    bus_write8(bus, address + 2, (value >> 16) & 0xFF);
    bus_write8(bus, address + 3, (value >> 24) & 0xFF);
}
