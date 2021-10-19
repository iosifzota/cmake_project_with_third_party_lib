# Copy binaries together with the executables

set(output_directory ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/${APP_CMAKE_BUILD_TYPE})

# Create output directory if it does not exist
if (NOT EXISTS ${output_directory})
	FILE(MAKE_DIRECTORY ${output_directory})
endif()

message("\n=====\nCopying bin files to ${output_directory}.\n=====\n")

# Get paths of binary files to copy
file(GLOB bin_files "bin/*")
execute_process(COMMAND ${CMAKE_COMMAND} -E copy_if_different ${bin_files} ${output_directory})
