/*
 * @Author: milkandpotato milkandpotato@outlook.com
 * @Date: 2024-04-18 19:02:12
 * @LastEditors: milkandpotato milkandpotato@outlook.com
 * @LastEditTime: 2024-04-22 19:38:10
 * @FilePath: /helloWorld/src/log.cpp
 * @Description:
 *
 * Copyright (c) 2024 by milkandpotato, All Rights Reserved.
 */
#include "../include/Log.h"

void Log(char message) { std::cout << message << std::endl; }

void Log(int *message) { std::cout << message << std::endl; }

void Log(int message) { std::cout << message << std::endl; }
void Log(int **message) { std::cout << message << std::endl; }
