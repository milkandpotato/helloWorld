/*
 * @Description  :
 * @Version      : V1.0.0
 * @Author       : 雨翀 孙 milkandpotato@outlook.com
 * @Date         : 2024-04-28 19:53:29
 * @LastEditors  : 雨翀 孙 milkandpotato@outlook.com
 * @LastEditTime : 2024-04-28 21:29:03
 * @FilePath     : PlayerCopier.cpp
 * Copyright 2024 Marvin, All Rights Reserved.
 * 2024-04-28 19:53:29
 */
#include <cstring>

#include "../include/PlayerCopier.h"


PlayerCopier::PlayerCopier(const char* name)
{
    this->size = strlen(name);
    this->buffer = new char[strlen(name)+1];
    strcpy(this->buffer,name);
};
// 浅拷贝
PlayerCopier::PlayerCopier(const PlayerCopier &another,int number)
{
    this->buffer = another.buffer;
}
// 深拷贝
PlayerCopier::PlayerCopier(const PlayerCopier &another,float number)
{
    this->size = strlen(another.buffer);
    this->buffer = new char[strlen(another.buffer)+1];
    strcpy(this->buffer,another.buffer);
};

PlayerCopier::~PlayerCopier()
{
    delete[] buffer;
};

char *PlayerCopier::GetBuffer()
{
    return this->buffer;
};
void PlayerCopier::SetBuffer(int index, char charStr)
{
    if (index < size)
    {
        this->buffer[index] = charStr;
    }
};

std::ostream& operator <<(std::ostream& stream,std::string& name){
    stream << name;
    return stream;
};