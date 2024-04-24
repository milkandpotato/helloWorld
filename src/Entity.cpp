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
public:
  virtual std::string GetName() { return "Entity!"; }
  virtual std::string GetClassName() = 0;
};

class Player : public Entity {
private:
  std::string name;

public:
  Player(const std::string playerName) : name(playerName) {}
  std::string GetName() override { return name; }
  std::string GetClassName(){return "ClassName";}
};