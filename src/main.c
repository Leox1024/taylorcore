#include "cpu_monitor.h"
#include <stdio.h>

int main() {
    struct CPUStats stats;

    if (cpu_get_stats(&stats) == 0) {
        printf("Logical CPU cores: %d\n", stats.coreCount);
    } else {
        printf("Failed to get CPU stats.\n");
    }

    return 0;
}
