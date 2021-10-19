set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS YES CACHE BOOL "Export all symbols")

add_library(Library01 Animal.cpp Dog.cpp Cat.cpp Utils.cpp)

target_include_directories(Library01 PUBLIC ${CMAKE_SOURCE_DIR}/include/Library01)

install(
	TARGETS Library01
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib
	RUNTIME DESTINATION bin
)