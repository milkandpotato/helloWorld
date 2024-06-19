/*
 * @Author: milkandpotato milkandpotato@outlook.com
 * @Date: 2024-06-19 09:31:23
 * @LastEditors: milkandpotato milkandpotato@outlook.com
 * @LastEditTime: 2024-06-19 10:16:17
 * @FilePath: /helloWorld/include/Random.hpp
 * @Description: 
 * 
 * Copyright (c) 2024 by milkandpotato, All Rights Reserved. 
 */
#include "../include/pch.hpp"

namespace CustomRandom {
    class Random{
        public:
            static std::string getRandomString(){
                Random m_randomInstance;
                return m_randomInstance.randomString();
            }
        private:
            std::string randomString(){return m_randomString;}
            std::string m_randomString = "This is a random string!";
            Random(){};
    };
}