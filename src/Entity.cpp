/*
 * @Description  : 
 * @Version      : V1.0.0
 * @Author       : 雨翀 孙 milkandpotato@outlook.com
 * @Date         : 2024-04-27 15:52:20
 * @LastEditors: milkandpotato milkandpotato@outlook.com
 * @LastEditTime: 2024-05-12 15:29:47
 * @FilePath: /helloWorld/src/Entity.cpp
 * Copyright 2024 Marvin, All Rights Reserved. 
 * 2024-04-27 15:52:20
 */
#include <iostream>
#include <string>

#include "../include/Entity.h"

//构造函数
Entity::Entity()
{
  logger.Info("created entity!");
}
Entity::~Entity()
{
  logger.Info("destroyed entity!");
}

//成员函数
std::string Entity::GetName() const { return name; }
void Entity::SetName(std::string entityName)
{
  name = entityName;
};
Logger<std::string>  Entity::GetLogger() const
{
  return logger;
}
