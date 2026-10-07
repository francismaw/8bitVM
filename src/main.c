#include <stddef.h>
#include <stdio.h>
#include "cpu.h"
#include "memory.h"

int main(void){
    CPU cpu = {0};
    cpu.memory[25] = 40;
    printf("CPU size %zu\n", sizeof(CPU));
    printf("CPU aligment: %zu\n",_Alignof(CPU));
    printf("pc offset: %zu\n", offsetof(CPU, pc));
    printf("mem offset: %zu\n", offsetof(CPU, memory));
    uint8_t result = read8(&cpu, 25);
    printf("value at memory address: %u\n", (unsigned int)result);
}

