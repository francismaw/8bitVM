#ifndef CPU_H
#define CPU_H
#include <stdint.h>
#include <stdio.h>

typedef struct CPU{
    uint8_t registers[8]; // 8- 1bit registers (1 byte)
    uint8_t flags;
    uint16_t pc;  // program counter 16 bit  (2 bytes) 
    uint16_t sp;


    uint8_t memory[65536];
} CPU;


// 8 
#endif // CPU_H 
