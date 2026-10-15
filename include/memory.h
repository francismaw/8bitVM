#include <stdint.h>
#include <stdio.h>
#include "cpu.h"

uint8_t read8(const CPU *cpu, uint16_t address);

void write8(CPU *cpu, uint16_t address, uint8_t value);

uint16_t read16(const CPU *cpu, uint16_t address);

void write16(CPU *cpu, uint16_t address, uint16_t value);


