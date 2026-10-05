#include <stddef.h>
#include <stdio.h>
#include "cpu.h"

int main(void){
    CPU cpu;
    printf("CPU size %zu\n", sizeof(CPU));
    printf("CPU aligment: %zu\n",_Alignof(CPU));
    printf("pc offset: %zu\n", offsetof(CPU, pc));
    printf("mem offset: %zu\n", offsetof(CPU, memory));
    int8_t result = read8(cpu, 25);
    printf("value at memory address: %zn\n", result);
}



