cmake_minimum_required(
    VERSION 3.21
)


project(Using_C_Standrad_LIB)



set(SRC ${CMAKE_CURRENT_LIST_DIR}/stdarg/va_copy.c)

get_filename_component(fileNoExt ${SRC} NAME_WE)

set(EXECNAME ${fileNoExt}.out)

add_executable(${EXECNAME} ${SRC})