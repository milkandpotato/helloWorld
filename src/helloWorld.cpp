/*
 * @Author: milkandpotato milkandpotato@outlook.com
 * @Date: 2024-04-18 15:09:38
 * @LastEditors: milkandpotato milkandpotato@outlook.com
 * @LastEditTime: 2024-04-18 15:54:27
 * @FilePath: /helloWorld/src/helloWorld.cpp
 * @Description: 
 * 
 * Copyright (c) 2024 by milkandpotato, All Rights Reserved. 
 */
#include <iostream>
#include "../include/print.h"

int main()
{
    //std::cout << "hello,World" << std::endl;
    //std::cin.get();
    vector<string> msg;
    msg.push_back("Hello");
    msg.push_back("World!");
    printMessage(msg);
}