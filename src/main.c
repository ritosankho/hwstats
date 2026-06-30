#include "cpu.h"



CPU_Info_t cpuID;

int main()
{

    cpu_read_info(&cpuID);
    return 0;
}