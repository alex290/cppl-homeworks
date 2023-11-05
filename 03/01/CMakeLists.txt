cmake_minimum_required(VERSION 3.20.0)
project(lists)




file(GLOB project
    src/main.cpp
    src/list.cpp 
    src/list.h
)

add_executable(lists ${project})


# # Продключаем Catch2
add_subdirectory(tests)
file(GLOB project_test
    src/test-main.cpp
    src/list.cpp
    src/list.h
)


add_executable(lists_test ${project_test})
target_link_libraries(lists_test PRIVATE Catch2::Catch2)