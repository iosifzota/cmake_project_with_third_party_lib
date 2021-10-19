add_executable(Event Main.cpp)

find_package(Poco REQUIRED Foundation)

target_include_directories(Event PUBLIC ${custom_include_directories})
target_link_libraries(Event PUBLIC Poco::Foundation)

