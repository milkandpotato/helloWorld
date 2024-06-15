/*
 * @Description  : 
 * @Version      : V1.0.0
 * @Author       : 雨翀 孙 milkandpotato@outlook.com
 * @Date         : 2024-06-13 14:05:49
 * @LastEditors: milkandpotato milkandpotato@outlook.com
 * @LastEditTime: 2024-06-15 11:08:47
 * @FilePath: /helloWorld/include/CustomTimer.hpp
 * Copyright 2024 Marvin, All Rights Reserved. 
 * 2024-06-13 14:05:49
 */
#pragma once

#include <chrono>
#include <iostream>

struct CustomTimer
{
    #ifdef  _WIN32
        std::chrono::time_point<std::chrono::system_clock> start,end;
    #elif defined (__APPLE__) && defined (__MATH__)
        std::chrono::time_point<std::chrono::steady_clock> start,end;
    #endif
    std::chrono::duration<float> duration;

    //构造函数
    CustomTimer(){
        start = std::chrono::high_resolution_clock::now();
    }   

    ~CustomTimer(){
        end = std::chrono::high_resolution_clock::now();
        duration = end - start;

        float ms = duration.count() * 1000.0f;
        std::cout << ms << "ms" << std::endl;
    }
};
