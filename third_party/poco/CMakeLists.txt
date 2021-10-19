# Copy binaries together with the executables

message("\n=====\nCopying Poco bin files to ${APP_BIN_OUTPUT_DIRECTORY}.\n=====\n")

# Get paths of binary files to copy
file(GLOB bin_files "bin/*")
execute_process(COMMAND ${CMAKE_COMMAND} -E copy_if_different ${bin_files} ${APP_BIN_OUTPUT_DIRECTORY})
