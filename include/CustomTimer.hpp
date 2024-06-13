/*
 * @Description  : 
 * @Version      : V1.0.0
 * @Author       : 雨翀 孙 milkandpotato@outlook.com
 * @Date         : 2024-06-13 14:05:49
 * @LastEditors  : 雨翀 孙 milkandpotato@outlook.com
 * @LastEditTime : 2024-06-13 14:27:38
 * @FilePath     : CustomTimer.hpp
 * Copyright 2024 Marvin, All Rights Reserved. 
 * 2024-06-13 14:05:49
 */
#pragma once

#include <chrono>
#include <iostream>

struct CustomTimer
{
    std::chrono::time_point<std::chrono::system_clock> start,end;
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
