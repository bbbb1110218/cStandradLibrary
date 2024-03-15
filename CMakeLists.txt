cmake_minimum_required(
    VERSION 3.21
)


project(Using_C_Standrad_LIB)



set(SRCS    

# ${CMAKE_CURRENT_LIST_DIR}/stdarg/va_copy.c

# ${CMAKE_CURRENT_LIST_DIR}/assert/assert.c
# ${CMAKE_CURRENT_LIST_DIR}/string/stpcpy.c
string/strlcpy.c


# built_in/VA_ARGS.c


        )


function(execAll srces)
    foreach(item ${srces})

        get_filename_component(fileNoExt ${item} NAME_WE)

        set(EXECNAME ${fileNoExt}.out)

        add_executable(${EXECNAME} ${item})
    endforeach()
    
endfunction()

# get_filename_component(fileNoExt ${SRCS} NAME_WE)

# set(EXECNAME ${fileNoExt}.out)

# add_executable(${EXECNAME} ${SRC})

execAll(${SRCS})
