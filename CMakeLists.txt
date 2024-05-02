CMAKE_MINIMUM_REQUIRED(VERSION 3.5) #cmake最低版本需求，不加入此行会受到警告信息

# 项目名称
PROJECT(HELLO) 

# output directory
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# target executable file
add_executable(HELLO ${PROJECT_SOURCE_DIR}/src/Main.cpp)

#AUX_SOURCE_DIRECTORY(./src SRC_LIST) #把当前目录(.)下所有源代码文件和头文件加入变量SRC_LIST

#include directory
target_include_directories(HELLO PUBLIC ${PROJECT_SOURCE_DIR}/3rdParty/glfw/3.4/lib-vc2017)

#link libraries
target_link_libraries(HELLO PUBLIC ${PROJECT_SOURCE_DIR}/3rdparty/glfw/3.4/lib-vc2017/glfw3.lib)

#ADD_EXECUTABLE(hello ${SRC_LIST}) #生成应用程序 hello

