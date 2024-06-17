/*
 * @Description  : 
 * @Version      : V1.0.0
 * @Author       : 雨翀 孙 milkandpotato@outlook.com
 * @Date         : 2024-04-27 15:59:26
 * @LastEditors: milkandpotato milkandpotato@outlook.com
 * @LastEditTime: 2024-06-17 19:17:55
 * @FilePath: /helloWorld/include/Entity.h
 * Copyright 2024 Marvin, All Rights Reserved. 
 * 2024-04-27 15:59:26
 */
 #ifndef ENTITY_H
 #define ENTITY_H

#include "./template/Logger.hpp"

class Entity
{
private:
  std::string name;
  Logger<std::string> logger;

public:
  // 构造函数
  Entity();
  ~Entity();

  // 成员函数
  std::string GetName() const;
  void SetName(std::string entityName);
  Logger<std::string>  GetLogger() const;
  // 虚函数
  virtual std::string GetClassName() {
    return "";
  }
};

#endif