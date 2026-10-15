#include <stdint.h>
#include <stdio.h>
#include "cpu.h"

uint8_t read8(const CPU *cpu, uint16_t address){
    return cpu -> memory[address];
}

void write8( CPU *cpu, uint16_t address, uint8_t value){
    cpu -> memory[address] = value;
}


uint16_t read16(const CPU *cpu, uint16_t address){
    uint8_t val = read8(cpu, address);
    uint16_t high = read8(cpu, address+1);
    high = (address == 0xFFFF) ? 0:  high << 8;
    return val | high;
}

void write16(CPU *cpu, uint16_t address, uint16_t value){
    write8(cpu, address, value >> 8);
    write8(cpu, address+1, value & 0xFF);
}
