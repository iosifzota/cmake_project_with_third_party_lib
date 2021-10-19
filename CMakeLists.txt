cmake_minimum_required(VERSION 3.21)

project(App_with_library)

# Set a default build type (needed for copying third party binaries)
set(APP_CMAKE_BUILD_TYPE ${CMAKE_BUILD_TYPE})
string(COMPARE EQUAL "${APP_CMAKE_BUILD_TYPE}" "" is_empty)
if (is_empty)
	set(APP_CMAKE_BUILD_TYPE "Debug")
endif()
message("\n=====\nBuild type is ${APP_CMAKE_BUILD_TYPE}\n=====\n")

# Introduce binary output directory VARIABLE (needed for copying third party binaries)
set(APP_BIN_OUTPUT_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/bin/${APP_CMAKE_BUILD_TYPE})
# ... create the directory if it does not exist
if (NOT EXISTS ${APP_BIN_OUTPUT_DIRECTORY})
	FILE(MAKE_DIRECTORY ${APP_BIN_OUTPUT_DIRECTORY})
endif()

# Set build output directory
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/bin)

set(custom_include_directories ${CMAKE_CURRENT_LIST_DIR}/include ${CMAKE_CURRENT_LIST_DIR}/third_party/poco/include)

add_subdirectory(src/Library01)
add_subdirectory(src/Event)
add_subdirectory(src/Future)
add_subdirectory(src/HTTPServer)
add_subdirectory(third_party/poco)