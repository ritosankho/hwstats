#include "cpu.h"

bool cpu_read_info(CPU_Info_t *cpu_id)
{
    FILE *f = fopen("/proc/cpuinfo", "r");
    char line[256];

    while (fgets(line, sizeof(line), f))
    {
        printf("%s", line);
    }

    fclose(f);
    return true;
}