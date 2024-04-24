/*
 * @Author: milkandpotato milkandpotato@outlook.com
 * @Date: 2024-04-18 15:09:38
 * @LastEditors: milkandpotato milkandpotato@outlook.com
 * @LastEditTime: 2024-04-24 18:47:34
 * @FilePath: /helloWorld/src/helloWorld.cpp
 * @Description:
 *
 * Copyright (c) 2024 by milkandpotato, All Rights Reserved.
 */
// #include "../include/print.h"
#include "../include/Log.h"
#include "../include/Math.h"
#include "Entity.cpp"
#include "Logger.cpp"
#include <array>

int main()
{
  Logger logger;
  /*logger.Info("Hello!");
  logger.Warning("Hello!");
  logger.Error("Hello!");*/

  Entity *entity = new Player("lisi");
  logger.Info(entity->GetName());
  Player *player = new Player("zhangsan");
  logger.Info(player->GetClassName());

  int count = 5;
  int *array_1 = new int[5];  // 原始声明
  std::array<int, 5> array_2; // C++11 声明
  for (int i = 0; i < count; i++)
  {
    array_1[i] = 2;
    array_2[i] = 3;
  }
  std::cout << array_1 << std::endl;
  //std::cout << array_2.at(1) << std::endl;

  std::cin.get();
}
