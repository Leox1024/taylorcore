#include "cpu_monitor.h"
#include <sys/types.h>
#include <sys/sysctl.h>

int cpu_get_stats(struct CPUStats* out_stats) {
    if (!out_stats) return -1;

    // Get number of logical cores
	int coreCount = 0;
	size_t size = sizeof(coreCount);

    if (sysctlbyname("hw.logicalcpu", &coreCount, &size, NULL, 0) != 0) {
    	return -1;
    }
    // Populate the struct
    out_stats->coreCount = coreCount;

    // Set default values for unused fields
    out_stats->usagePercent = -1.0;
    out_stats->temperature = -1.0;
    out_stats->frequencyMHz = -1.0;
    out_stats->loadAverage = -1.0;

    return 0; // Success
}
