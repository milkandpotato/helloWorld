/*
 * @Author: milkandpotato milkandpotato@outlook.com
 * @Date: 2024-04-24 16:46:35
 * @LastEditors: milkandpotato milkandpotato@outlook.com
 * @LastEditTime: 2024-04-24 18:46:31
 * @FilePath: /helloWorld/src/Entity.cpp
 * @Description:
 *
 * Copyright (c) 2024 by milkandpotato, All Rights Reserved.
 */
#include "../include/Log.h"
#include <iostream>
#include <string>

class Entity {
private:
  std::string name;

public:
  Entity():name("entity"){
    std::cout << "created entity!" << std::endl;
  }
  ~Entity(){
    std::cout << "destroyed entity!" << std::endl;
  }
  std::string GetName() { return name; }
  void SetName(std::string entityName){
    name = entityName;
  }
  //虚函数
  //virtual std::string GetClassName() = 0;
};

class Player : public Entity {
private:
  int m_x,m_y;
  int number;

public:
  Player(const std::string &playerName){
    SetName(playerName);
    std::cout << "created " << GetName() << "!" << std::endl;
  }
  //number(2) 使用了初始化列表，将2赋值给number属性
  Player():number(2){
    std::cout << "created " << GetName() << "!" << std::endl;
  } 
  ~Player(){
    std::cout << "destroyed " << GetName() << "!" << std::endl;
  }
  std::string GetClassName(){return "ClassName";}
  int GetX() const{ //const 相当于 readonly关键字
    return m_x;
  }
  int SetX(int x){
    m_x = x;
  }
};