/*
 * @Author: milkandpotato milkandpotato@outlook.com
 * @Date: 2024-06-15 10:33:06
 * @LastEditors: milkandpotato milkandpotato@outlook.com
 * @LastEditTime: 2024-06-15 11:07:23
 * @FilePath: /helloWorld/src/NumberUtils.cpp
 * @Description: 
 * 
 * Copyright (c) 2024 by milkandpotato, All Rights Reserved. 
 */
#include "../include/NumberUtils.hpp"

std::string vector2String(const std::vector<int> &array){
    std::string response = "";
    for (int i = 0; i < array.size(); i++)
    {
        response.append(std::to_string(array[i]));
        if (i != array.size() - 1) {
            response.append(", ");
        }
    }
    return response;
}