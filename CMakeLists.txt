cmake_minimum_required(VERSION 3.21)

project(App_with_library)

set(custom_include_directories ${CMAKE_SOURCE_DIR}/include ${CMAKE_SOURCE_DIR}/third_party/poco/include)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_CURRENT_LIST_DIR}/bin")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_LIST_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_LIST_DIR}/bin")

# Set a default build type (needed for copying third party dlls to the right place)
set(APP_CMAKE_BUILD_TYPE ${CMAKE_BUILD_TYPE})
string(COMPARE EQUAL "${APP_CMAKE_BUILD_TYPE}" "" is_empty)
if (is_empty)
	set(APP_CMAKE_BUILD_TYPE "Debug")
endif()
message("\n=====\nBuild type is ${APP_CMAKE_BUILD_TYPE}\n=====\n")

add_subdirectory(src/Library01)
add_subdirectory(src/Event)
add_subdirectory(src/Future)
add_subdirectory(src/HTTPServer)
add_subdirectory(third_party/poco)