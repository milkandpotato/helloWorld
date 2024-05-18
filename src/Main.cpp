/*
 * @Description  :
 * @Version      : V1.0.0
 * @Author       : 雨翀 孙 milkandpotato@outlook.com
 * @Date         : 2024-05-02 16:34:31
 * @LastEditors: milkandpotato milkandpotato@outlook.com
 * @LastEditTime: 2024-05-19 01:10:53
 * @FilePath: /helloWorld/src/Main.cpp
 * Copyright 2024 Marvin, All Rights Reserved.
 * 2024-05-02 16:34:31
 */

#include "../include/template/Log.hpp"
#include <GLFW/glfw3.h>
#include <algorithm>
#include <array>
#include <iostream>
#include <vector>

// 函数指针
void ForEach(std::vector<int> &array, void (*func)(int)) {
  for (int value : array) {
    func(value);
  }
}
void PrintInt(int value) { std::cout << "value:" << value << std::endl; }

int main() {
  /* std::cout << __cplusplus << std::endl;
  int a = glfwInit();
  std::cout << a << std::endl; */

  {
    int a;
    a = 5;
    int *b = new int(6);
    Log(a);
    Log(b);

    // 静态数组
    std::array<int, 5> data = {1, 2, 3, 4, 5};
    // 函数指针
    std::vector<int> funcArray = {0, 2, 4, 6, 8};
    ForEach(funcArray, PrintInt);
    // lambda
    //第一种用法
    std::for_each(data.begin(), data.end(), [](int value) { Log(value); });
    //第二种用法
    auto findNumber = std::find_if(funcArray.begin(), funcArray.end(),
                                   [](int value) { return value > 5; });
    std::cout << *findNumber << std::endl;
  }
}