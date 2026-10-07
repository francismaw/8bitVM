#include <stdint.h>
#include <stdio.h>
#include "cpu.h"

uint8_t read8(const CPU *cpu, uint16_t address){
    return cpu -> memory[address];
}
