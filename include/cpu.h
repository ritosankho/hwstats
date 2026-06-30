#ifndef CPU_H
#define CPU_H

#include "stdio.h"
#include "stdbool.h"
#include "stdint.h"

typedef struct
{
    char cpuID[64];
    char cpuName[128];
    char vendor[64];
    uint32_t microcode;
    uint8_t cores;
    float speed;
} CPU_Info_t;

bool cpu_read_info(CPU_Info_t *cpu_id);

#endif