add_library(hello_world STATIC HelloWorld.cpp)
target_include_directories(hello_world PUBLIC .)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE hello_world)
