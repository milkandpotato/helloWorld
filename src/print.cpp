/*
 * @Author: milkandpotato milkandpotato@outlook.com
 * @Date: 2024-04-18 15:47:52
 * @LastEditors: milkandpotato milkandpotato@outlook.com
 * @LastEditTime: 2024-04-18 15:48:50
 * @FilePath: /helloWorld/src/print.cpp
 * @Description: 
 * 
 * Copyright (c) 2024 by milkandpotato, All Rights Reserved. 
 */
#include "../include/print.h"

void printMessage(vector<string>& msg){
    for (int i = 0; i < msg.size(); i++)
    {
        cout << msg[i] << " ";
    }
    
}