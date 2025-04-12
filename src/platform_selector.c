#include "cpu_monitor.h"

#if defined(__linux__)
extern int cpu_get_stats(struct CPUStats* out_stats);
#elif defined(__APPLE__)
extern int cpu_get_stats(struct CPUStats* out_stats);
#elif defined(_WIN32)
extern int cpu_get_stats(struct CPUStats* out_stats);
#else
#error "Unsupported platform"
#endif
