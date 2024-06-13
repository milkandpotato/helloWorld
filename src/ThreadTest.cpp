/*
 * @Description  : 
 * @Version      : V1.0.0
 * @Author       : 雨翀 孙 milkandpotato@outlook.com
 * @Date         : 2024-06-04 16:46:23
 * @LastEditors  : 雨翀 孙 milkandpotato@outlook.com
 * @LastEditTime : 2024-06-13 13:13:12
 * @FilePath     : ThreadTest.cpp
 * Copyright 2024 Marvin, All Rights Reserved. 
 * 2024-06-04 16:46:23
 */

#include "../include/ThreadTest.hpp"

void doWorkTest(bool &is_Finished)
{
    using namespace std::literals::chrono_literals;

    while (!is_Finished)
    {
        std::cout << "Working..." << std::endl;
        std::this_thread::sleep_for(1s);
    }
}