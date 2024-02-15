# cmake_project_with_third_party_lib
This is an example of a CMake project using a third party pre-build library (binary files: dlls, ...).

# Troubleshoot
Could not find PocoConfig.cmake. => export Poco_DIR="third_party/poco" (be careful to be in the root dir of the project. I recommend running in the root folder: cmake -S . -B build
