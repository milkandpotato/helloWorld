/*
 * @Author: milkandpotato milkandpotato@outlook.com
 * @Date: 2024-04-18 19:02:12
 * @LastEditors: milkandpotato milkandpotato@outlook.com
 * @LastEditTime: 2024-04-24 18:23:37
 * @FilePath: /helloWorld/src/log.cpp
 * @Description:
 *
 * Copyright (c) 2024 by milkandpotato, All Rights Reserved.
 */
#include "../include/Log.h"
#include <string>

void Log(const std::string &message) { std::cout << message << std::endl; }
void Log(const int &message) { std::cout << message << std::endl; }
