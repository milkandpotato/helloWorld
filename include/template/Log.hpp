/*
 * @Author: milkandpotato milkandpotato@outlook.com
 * @Date: 2024-05-12 15:26:14
 * @LastEditors: milkandpotato milkandpotato@outlook.com
 * @LastEditTime: 2024-05-12 15:26:32
 * @FilePath: /helloWorld/include/template/Log.hpp
 * @Description: 
 * 
 * Copyright (c) 2024 by milkandpotato, All Rights Reserved. 
 */
#include "../include/pch.hpp"

template <typename T> 
void Log(const T &message){
  std::cout << message << std::endl;
}