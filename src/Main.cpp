/*
 * @Description  : 
 * @Version      : V1.0.0
 * @Author       : 雨翀 孙 milkandpotato@outlook.com
 * @Date         : 2024-05-02 16:34:31
 * @LastEditors: milkandpotato milkandpotato@outlook.com
 * @LastEditTime: 2024-05-12 15:30:22
 * @FilePath: /helloWorld/src/Main.cpp
 * Copyright 2024 Marvin, All Rights Reserved. 
 * 2024-05-02 16:34:31
 */

#include <GLFW/glfw3.h>
#include <iostream>
#include "../include/template/Log.hpp"

int main()
{
  /* std::cout << __cplusplus << std::endl;
  int a = glfwInit();
  std::cout << a << std::endl; */
  
  {
    int a;
    a = 5;
    int* b = new int(6);
    Log(a);
    Log(b);
  }
}