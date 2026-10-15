#include <stddef.h>
#include <stdio.h>
#include "cpu.h"
#include "memory.h"

int main(void){
    CPU cpu = {0};
    cpu.memory[25] = 40;
    cpu.memory[26] = 0xFFFF & 0xFF;
    cpu.memory[27] = 0xFFFF >> 8;
    printf("CPU size %zu\n", sizeof(CPU));
    printf("CPU aligment: %zu\n",_Alignof(CPU));
    printf("pc offset: %zu\n", offsetof(CPU, pc));
    printf("mem offset: %zu\n", offsetof(CPU, memory));
    uint8_t result = read8(&cpu, 25);
    uint16_t result16 = read16(&cpu, 26);
    printf("value at memory address: %u\n", (unsigned int)result);
    printf("16-bit value at memory address: %u\n", (unsigned int)result16);
}

