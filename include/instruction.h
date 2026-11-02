#include <stdio.h>
#include <stdint.h>
#include <cpu.h>



uint8_t Memory[65536]; // 64kb Memory


typedef struct {
    uint16_t PC; //PRogram Counter points to next instr
    uint8_t A;  // Accumulator
    uint8_t B; // General Register
    bool ZF; // Zero Flag
}; CPU;


typedef enum{
    NOP = 0x00,
    LOAD = 0x01,
    MOV = 0x02,
    ADD = 0x03,
    SUB = 0x04,
    LOADM = 0x05,
    STOREM = 0x06, 
    JMP = 0x07,
    JZ = 0x08,
    AND = 0x09,
    OR = 0x0A,
    XOR = 0x0B,
    NOT = 0x0C,

    HLT = 0x0E
} Instruction;;

