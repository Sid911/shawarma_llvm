project(shw_std)

add_library(${PROJECT_NAME}
            kaleidoscope_std.c)

add_executable(shw_std_test test.c)

target_link_libraries(shw_std_test ${PROJECT_NAME})
target_compile_options(${PROJECT_NAME} PUBLIC -fPIE)
