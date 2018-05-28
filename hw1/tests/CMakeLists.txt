enable_testing()

find_package(Check REQUIRED)
find_package(Threads REQUIRED)

add_executable(test_binarize test_binarize.c ../src/binarize.c)
<<<<<<< HEAD
add_executable(test_task test_task.c ../src/task.c ../src/atofe.c ../src/binsearch.c ../src/escape.c ../src/htoi.c ../src/strrindex.c)
=======
add_executable(test_task test_task.c ../src/task.c ../src/atofe.c ../src/binsearch.c ../src/escape.c ../src/htoi.c ../src/itob.c)
>>>>>>> a61e8809be8071abfd043958b5c4c60f2d309e13

include_directories(${CHECK_INCLUDE_DIRS} ../src)

target_link_libraries(test_task ${CHECK_LIBRARIES} ${CMAKE_THREAD_LIBS_INIT})
target_link_libraries(test_binarize ${CHECK_LIBRARIES} ${CMAKE_THREAD_LIBS_INIT})
