project(libmanticore)

add_library(manticore
    src/syscall.c
    src/syscalls/exit.c
    src/syscalls/wait.c
    src/syscalls/console_print.c
)

target_include_directories(manticore PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
    PRIVATE src)
