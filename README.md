# CPU Predictor

A cross-platform C++ tool to monitor CPU usage in real time and forecast short-term behavior using Taylor series expansion.

## Features

- Real-time CPU usage monitoring
- Short-term prediction using Taylor series
- Modular architecture with OS-specific implementations
- Cross-platform: Linux, macOS, Windows (WIP)

## Build Instructions

```bash
mkdir build
cd build
cmake ..
make
```

## Run

```bash
./cpu_predictor
```

## Project Structure

```bash
.
├── include/      # Header files (public interfaces)
├── src/          # Source files (.cpp)
├── platform/     # OS-specific implementations
├── tests/        # Unit tests
├── scripts/      # Utility scripts
├── data/         # Logs and output files
└── CMakeLists.txt
```
