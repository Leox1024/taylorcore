#pragma once
#include "cpu_stats.h"

// API exposed to main.c
int cpu_get_stats(struct CPUStats* out_stats);
