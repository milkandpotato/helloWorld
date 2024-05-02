/*
 * @Description  : 
 * @Version      : V1.0.0
 * @Author       : 雨翀 孙 milkandpotato@outlook.com
 * @Date         : 2024-04-27 15:58:16
 * @LastEditors  : 雨翀 孙 milkandpotato@outlook.com
 * @LastEditTime : 2024-05-01 14:18:49
 * @FilePath     : Player.cpp
 * Copyright 2024 Marvin, All Rights Reserved. 
 * 2024-04-27 15:58:16
 */
#include "../include/Player.h"

// 构造函数
Player::Player(const std::string &playerName)
{
    SetName(playerName);
    std::string message = "created " + this->GetName() + "!";
    this->GetLogger().Info(message);
}
// 默认的构造函数形式，包含了隐式构造函数
Player::Player(int num_a):number(num_a)
{
    
};
// 添加explicit关键字，禁用了隐式构造函数
Player::Player(float num_x, float num_y)
{
    this->x = num_x;
    this->y = num_y;
};
//析构函数
Player::~Player()
{
    std::string message = "destroyed " + this->GetName() + "!";
    this->GetLogger().Info(message);
}

// 成员函数
std::string Player::GetClassName() { return "ClassName"; }
// const 相当于 readonly关键字
float Player::GetX() const 
{
    return (*this).x;
}
void Player::SetX(float x)
{
    this->x = x;
}
float Player::GetY() const
{
    return (*this).y;
}
void Player::SetY(float y)
{
    this->y = y;
}
Player Player::Add(const Player &another) const
{
    return operator+(another);
}

// 重载+运算符
Player Player::operator+(const Player &another) const
{
    return Player(this->x + another.x, y + another.y);
}

//重载<<运算符
std::ostream& operator<< (ostream& stream, Player player){
    stream << player.GetX() << "," << player.GetY();
    return stream;
}