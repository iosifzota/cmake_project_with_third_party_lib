add_executable(Future Main.cpp)

find_package(Poco REQUIRED Foundation)

target_include_directories(Future PUBLIC ${custom_include_directories})
target_link_libraries(Future PUBLIC Poco::Foundation)