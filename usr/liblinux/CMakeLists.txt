cmake_minimum_required(VERSION 3.12)

project(liblinux)

add_library(linux
    src/arpa/inet.c
    src/epoll.c
    src/errno.c
    src/socket.c
    src/stdio.c
    src/stdlib.c
    src/string/strerror.c
    src/string/strlen.c
)

target_include_directories(linux PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
    PRIVATE src)

target_link_libraries(linux PRIVATE
    manticore
)
