/*
 * @Description  : 
 * @Version      : V1.0.0
 * @Author       : 雨翀 孙 milkandpotato@outlook.com
 * @Date         : 2024-04-27 15:59:14
 * @LastEditors  : 雨翀 孙 milkandpotato@outlook.com
 * @LastEditTime : 2024-04-27 15:59:14
 * @FilePath     : Player.h
 * Copyright 2024 Marvin, All Rights Reserved. 
 * 2024-04-27 15:59:14
 */
#pragma once

#include <string>

#include "./Entity.h"

using namespace std;

class Player : public Entity
{
private:
    float x, y;
    int number;

public:
    // 构造函数
    Player(const string &playerName);
    Player(int num_a);
    explicit Player(float num_x, float num_y);
    ~Player();

    //拷贝构造函数
    Player(const char* &playerName);

    // 成员函数
    float GetX() const;
    void SetX(float x);
    float GetY() const;
    void SetY(float y);
    std::string GetClassName();
    Player Add(const Player &another) const;

    // 重载运算符
    Player operator+(const Player &another) const;
};