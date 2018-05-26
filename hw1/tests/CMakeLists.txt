enable_testing()

find_package(Check REQUIRED)
find_package(Threads REQUIRED)

add_executable(test_atofe test_atofe.c ../src/atofe.c)

target_link_libraries(test_atofe ${CHECK_LIBRARIES} ${CMAKE_THREAD_LIBS_INIT})
target_include_directories(test_atofe PUBLIC ${CHECK_INCLUDE_DIRS} ../src)