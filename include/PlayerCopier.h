/*
 * @Description  : 
 * @Version      : V1.0.0
 * @Author       : 雨翀 孙 milkandpotato@outlook.com
 * @Date         : 2024-04-28 19:48:48
 * @LastEditors  : 雨翀 孙 milkandpotato@outlook.com
 * @LastEditTime : 2024-04-28 21:23:51
 * @FilePath     : PlayerCopier.h
 * Copyright 2024 Marvin, All Rights Reserved. 
 * 2024-04-28 19:48:48
 */
#include "../include/pch.hpp"

class PlayerCopier
{
private:
    unsigned int size;
    char* buffer;
public:
    PlayerCopier(const char* name);
    PlayerCopier(const PlayerCopier &another,int number);
    PlayerCopier(const PlayerCopier &another,float number);
    ~PlayerCopier();

    char* GetBuffer();
    void SetBuffer(int index,char charStr);

    friend std::ostream& operator <<(std::ostream& stream,std::string& name);
};


