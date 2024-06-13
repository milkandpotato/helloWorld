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

// #include <GLFW/glfw3.h>
#include <iostream>
// #include <thread>
#include "../include/template/Log.hpp"
#include "../include/ThreadTest.hpp"

int main()
{
  /* std::cout << __cplusplus << std::endl;
  int a = glfwInit();
  std::cout << a << std::endl; */

  {
    int a;
    a = 5;
    int *b = new int(6);
    Log(a);
    Log(b);
  }

  // 线程的使用
  // {
  //   bool is_Finished = false;
  //   std::thread worker(doWorkTest, std::ref(is_Finished));
  //   std::cin.get();
  //   is_Finished = true;
  //   std::cout << "Finished..." << std::endl;

  //   worker.join();
  //   std::cin.get();
  // }

  //定时器的使用
  {
    std::thread worker(TimerTest);
    worker.join();
    std::cin.get();
  }
}