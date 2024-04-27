/*
 * @Description  : 
 * @Version      : V1.0.0
 * @Author       : 雨翀 孙 milkandpotato@outlook.com
 * @Date         : 2024-04-27 15:59:26
 * @LastEditors  : 雨翀 孙 milkandpotato@outlook.com
 * @LastEditTime : 2024-04-27 15:59:26
 * @FilePath     : Entity.h
 * Copyright 2024 Marvin, All Rights Reserved. 
 * 2024-04-27 15:59:26
 */
#pragma once

#include <string>

#include "./Logger.h"

class Entity
{
private:
  std::string name;
  static Logger logger;

public:
  // 构造函数
  Entity();
  ~Entity();

  // 成员函数
  std::string GetName() const;
  void SetName(std::string entityName);
  Logger GetLogger() const;
  // 虚函数
  // virtual std::string GetClassName() = 0;
};