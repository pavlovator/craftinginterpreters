# Set the minimum CMake version
cmake_minimum_required(VERSION 3.10)

# Name of the project
project(CppLox)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add this line to generate the compile_commands.json file
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Add the include directory for header files
include_directories(include)

# Add the executable and specify the source files
add_executable(cpplox main.cpp src/Scanner.cpp)
