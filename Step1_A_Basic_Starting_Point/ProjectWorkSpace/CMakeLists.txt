# Specify the minimum version of CMake required to build this project
cmake_minimum_required(VERSION 3.30.2)

# Define the project name and version number
project(ProjectWorkSpace VERSION 1.0)

# Specify the C++ standard to be used
set(CMAKE_CXX_STANDARD 23)                  # Use C++23
set(CMAKE_CXX_STANDARD_REQUIRED True)       # Ensure the C++ standard is required

# Add an executable target with the specified source file
add_executable(ProjectWorkSpace src/main.cpp)

# Configure a header file to pass some of the CMake settings to the source code
configure_file(ProjectWorkSpaceConfig.h.in ProjectWorkSpaceConfig.h)

# Include the directory with the generated header file and linking is public not private
target_include_directories(ProjectWorkSpace PUBLIC "${PROJECT_BINARY_DIR}")