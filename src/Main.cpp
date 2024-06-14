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
#include <vector>
#include <algorithm>
// #include <thread>
#include "../include/template/Log.hpp"
#include "../include/ThreadTest.hpp"
#include "../include/NumberUtils.hpp"

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

  // 定时器的使用
  //  {
  //    std::thread worker(TimerTest);
  //    worker.join();
  //    std::cin.get();
  //  }

  // C++的多维数组
  // {
  //   // 二维数组
  //   // 创建了5*5个数组，将会被分配在内存的25个区域
  //   int **a2d = new int *[5];
  //   for (int i = 0; i < 5; i++)
  //   {
  //     a2d[i] = new int[5];
  //   }

  //   // 二维数组（优化版）
  //   // 创建了一个数组array指向一个长度为5*5的数组
  //   // 这个在内存分配上是在同一个内存块上,避免了内存碎片
  //   int *array = new int[5 * 5];
  //   for (int i = 0; i < 5; i++)
  //   {
  //     for (int j = 0; j < 5; j++)
  //     {
  //       array[j + i * 5] = 2;
  //     }
  //   }

  //   // 删除数组
  //   // 不能直接使用delete[][]去删除二维数组
  //   // delete[][] a2d;
  //   for (int i = 0; i < 5; i++)
  //   {
  //     delete[] a2d[i];
  //   }
  //   delete[] a2d;
  // }

  // 排序
  {
    std::string output = "";

    std::vector<int> array = {2, 5, 4, 7, 1};
    std::sort(array.begin(), array.end()); // 一般排序
    std::string decrease = NumberUtils::vector2String(std::ref(array));
    std::cout << decrease << std::endl;
    //使用自定义函数进行降序排列
    // std::sort(array.begin(), array.end(), [](int a, int b) 
    //           { return a > b; });
    // std::string re
    // std::cout << vector2String(std::ref(array)) << std::endl;

    std::cin.get();
  }
}