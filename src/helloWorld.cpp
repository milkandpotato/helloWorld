/*
 * @Author: milkandpotato milkandpotato@outlook.com
 * @Date: 2024-04-18 15:09:38
 * @LastEditors: milkandpotato milkandpotato@outlook.com
 * @LastEditTime: 2024-04-18 19:54:37
 * @FilePath: /helloWorld/src/helloWorld.cpp
 * @Description: 
 * 
 * Copyright (c) 2024 by milkandpotato, All Rights Reserved. 
 */
#include <iostream>
#include "../include/print.h"

void Log(const char* message);
void Log(const int message);
int Mutiply(int a,int b);

int main()
{
    char* word = "Hello World!";
    std::cout << word << std::endl;
    Log(word);
    Log(Mutiply(2,5));
    // vector<string> msg;
    // msg.push_back("Hello");
    // msg.push_back("World!");
    // printMessage(msg);
}