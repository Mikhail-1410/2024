cmake_minimum_required(VERSION 3.10)

project(MySol)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_C_STANDARD 11)

add_executable(task1 task1.c)
add_executable(task2 task2.cpp)
add_executable(task3 task3.cpp)
add_executable(task4 task4.cpp)
add_executable(task5 task5.cpp)
add_executable(task6 task6.cpp)
add_executable(task7 task7.cpp)
add_executable(task8 task8.cpp)
add_executable(task9 task9.cpp)
add_executable(task10 task10.cpp)
add_executable(task11 task11.cpp)

add_custom_target(run_all
    COMMAND task1
    COMMAND task2
    COMMAND task3
    COMMAND task4 > output_task4.txt
    COMMAND task5
    COMMAND task6 30
    COMMAND task7 10
    COMMAND task8 > output_task8.txt
    COMMAND task9 > output_task9.txt
    COMMAND task10 > output_task10.txt
    COMMAND task11
    DEPENDS task1 task2 task3 task4 task5 task6 task7 task8 task9 task10 task11
)

set(OUTPUT_FILES
    output_task4.txt
    output_task5.txt
    output_task6.txt
    fibonacci.txt
    output_task8.txt
    output_task9.txt
    output_task10.txt
    harmonic.bin
)

set_directory_properties(PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES "${OUTPUT_FILES}")

add_custom_target(clean_all
    COMMAND ${CMAKE_BUILD_TOOL} clean
    COMMAND ${CMAKE_COMMAND} -E remove ${OUTPUT_FILES}
)
