CMAKE_MINIMUM_REQUIRED(VERSION 3.5) #cmake最低版本需求，不加入此行会受到警告信息
set(CMAKE_CXX_STANDARD 14) #literals需要C++14以上的版本
project(hello)

message("=====================================")
message("current operation system name ："${CMAKE_HOST_SYSTEM})
if(WIN32)
    message("当前操作系统为 Windows")
elseif(UNIX AND NOT APPLE)
    message("当前操作系统为 Linux")
elseif(APPLE)
    message("当前操作系统为 APPLE")
endif()
message("=====================================")

##设置变量
set(PROJECT_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
set(GLFW_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib/glfw)
#设置ccache（需要先安装ccache）
#mac: brew install ccache
#win: scoop install ccache

set(CMAKE_C_COMPILER_LAUNCHER ccache)
set(CMAKE_CXX_COMPILER_LAUNCHER ccache)
#GLFW的头文件路径
if(WIN32)
    set(GLFW_INCLUDE_PATH ${GLFW_PATH}/win/3.4/include)
    set(GLFW_LIB_PATH ${GLFW_PATH}/win/3.4/lib-mingw-w64)
elseif(APPLE)
    set(GLFW_INCLUDE_PATH ${GLFW_PATH}/mac/include)
    set(GLFW_LIB_PATH ${GLFW_PATH}/mac/lib-arm64)
endif()

##设置header文件目录
include_directories(include)
include_directories(${GLFW_INCLUDE_PATH})

##将./src下的所有源文件添加到变量SRC_LIST中
aux_source_directory(./src SRC_LIST)

##排除mian文件夹下的文件
list(REMOVE_ITEM SRC_LIST
    ./src/main/Main_1.cpp
    #Math在mac中有已经定义好了的头文件
    ./src/Math.cpp 
)

##添加可执行文件
add_executable(${PROJECT_NAME} ${SRC_LIST})

##查询glfw3的位置
message("GLFW_LIB_PATH："${GLFW_LIB_PATH})
find_library(GLFW_LIBRARIES NAMES glfw3 PATHS ${GLFW_LIB_PATH} REQUIRED)
message("GLFW_LIBRARIES："${GLFW_LIBRARIES})
message("=====================================")

#预编译头文件
target_precompile_headers(hello PUBLIC "include/pch.hpp")

##添加引用的第三方库的路径
target_link_libraries(${PROJECT_NAME} ${GLFW_LIBRARIES})
if(APPLE)
    target_link_libraries(${PROJECT_NAME} "-framework IOKit" "-framework Cocoa")
endif()

