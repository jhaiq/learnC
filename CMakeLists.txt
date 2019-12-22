cmake_minimum_required(VERSION 3.15)
project(learnC C)

set(CMAKE_C_STANDARD 99)
#add sub dir,项目包含一个子目录 src
add_subdirectory(src)

#
set(INC_DIR include)
set(LINK_DIR lib)

#
aux_source_directory(. dir_main_src)

include_directories(${INC_DIR})
link_directories(${LINK_DIR})

link_libraries(gtest)
link_libraries(gtest_main)

add_executable(main ${dir_main_src})

#指明可执行文件 main 需要连接一个名为Test的链接库
target_link_libraries(main src_lib src_lib_01 gtest gtest_main)
#add_executable(learnC main.c src/01/test2.c src/01/test2.h)
