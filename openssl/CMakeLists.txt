cmake_minimum_required(VERSION 3.10)
project(MyProject C)

set(CMAKE_C_STANDARD 11)

# OpenSSL path
set(OPENSSL_ROOT_DIR /opt/homebrew/Cellar/openssl@3/3.2.1)

find_package(OpenSSL REQUIRED)

if(OPENSSL_FOUND)
    message(ERROR "if find_package(abc REQUIRED) will defined 4 vars")
    message(ERROR ">>>>>>openssl version = ${OPENSSL_VERSION}")
    message(ERROR ">>>>>>openssl version = ${OPENSSL_VERSION_MARJO}")
    message(ERROR ">>>>>>openssl include dir ${OPENSSL_INCLUDE_DIR}")
    message(ERROR ">>>>>>OPENSSl libraries = ${OPENSSL_LIBRARIES}")
endif()

add_executable(aes.out aes.c)

target_include_directories(aes.out PRIVATE ${OPENSSL_INCLUDE_DIR})
target_link_libraries(aes.out PRIVATE OpenSSL::Crypto)
