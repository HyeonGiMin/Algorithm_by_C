cmake_minimum_required(VERSION 3.14)
project(PR C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "-fexec-charset=CP949 -g -Wall")

add_executable(PR main.c IntStack.h IntStack.c IntQueue.h main2.c)