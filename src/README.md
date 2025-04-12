# Platform-Specific CPU Monitor Implementations

Each OS subfolder (linux/, macos/, windows/) must implement the same interface defined in `include/cpu_monitor.hpp`:

## Required Function

```cpp
struct CPUStats {
    double usagePercent;      // Average CPU usage across all cores (%)
    double temperature;       // CPU temperature in °C (if available)
    int coreCount;            // Number of logical CPU cores
    double frequencyMHz;      // Estimated average CPU frequency (MHz)
};

The CPUStats struct is defined in include/cpu_stats.hpp and must be fully populated with the following fields (use -1.0 where not available):
