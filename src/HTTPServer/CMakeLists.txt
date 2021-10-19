add_executable(HTTPServer Main.cpp)

find_package(Poco REQUIRED Foundation Net Util)

target_include_directories(HTTPServer PUBLIC ${custom_include_directories})
target_link_libraries(HTTPServer PUBLIC Poco::Foundation Poco::Net Poco::Util)

