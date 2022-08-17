# lib/interp/CMakeLists.txt
# Compile shared library from source files
add_library(sensors sensors.cpp)

# State that any target linking to this library can see 
# the passed source directories
target_include_directories(sensors
    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
