# Minimum version required
cmake_minimum_required(VERSION 3.14)

# Project name and language
project(taylorcore C)

# Set C standard
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Include public headers
include_directories(include)

# Define the main executable and common sources
add_executable(taylorcore
    src/main.c
    src/platform_selector.c
)

# OS-specific source dispatch
if(UNIX AND NOT APPLE)
    target_sources(taylorcore PRIVATE src/platform/linux/cpu_monitor_linux.c)
elseif(APPLE)
    target_sources(taylorcore PRIVATE src/platform/macos/cpu_monitor_macos.c)
elseif(WIN32)
    target_sources(taylorcore PRIVATE src/platform/windows/cpu_monitor_windows.c)
endif()
