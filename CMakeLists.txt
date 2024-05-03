CMAKE_MINIMUM_REQUIRED(VERSION 3.5) #cmake最低版本需求，不加入此行会受到警告信息
project(hello)

##设置变量
set(PROJECT_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
#GLFW的头文件路径
set(GLFW_INCLUDE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib/glfw/3.4/include)
set(GLFW_LIB_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib/glfw/3.4/lib-mingw-w64)

##设置header文件目录
include_directories(include)
include_directories(${GLFW_INCLUDE_PATH})

##将./src下的所有源文件添加到变量SRC_LIST中
aux_source_directory(./src SRC_LIST)

##排除mian文件夹下的文件
list(REMOVE_ITEM SRC_LIST
    ./src/main/Main_1.cpp
)

##添加可执行文件
add_executable(${PROJECT_NAME} ${SRC_LIST})

##查询glfw3的位置
find_library(GLFW_LIBRARIES NAMES glfw3 PATHS ${GLFW_LIB_PATH} REQUIRED)

##添加引用的第三方库的路径
target_link_libraries(${PROJECT_NAME} ${GLFW_LIBRARIES})
