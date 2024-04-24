/*
 * @Author: milkandpotato milkandpotato@outlook.com
 * @Date: 2024-04-18 15:09:38
 * @LastEditors: milkandpotato milkandpotato@outlook.com
 * @LastEditTime: 2024-04-24 18:47:34
 * @FilePath: /helloWorld/src/helloWorld.cpp
 * @Description:
 *
 * Copyright (c) 2024 by milkandpotato, All Rights Reserved.
 */
// #include "../include/print.h"
#include "../include/Log.h"
#include "../include/Math.h"
#include "Entity.cpp"
#include <iostream>
#include <string>

class Logger {
public:
  enum Level { info = 1, warning, error };

private:
  int m_LogLevel = info;

public:
  Logger() {
    // m_LogLevel = info;
    std::cout << "created Eentity!" << std::endl;
  }
  ~Logger() { std::cout << "destroyed Eentity!" << std::endl; }
  void Info(const char *message) {
    if (m_LogLevel <= info) {
      std::cout << "[INFO]: " << message << std::endl;
    }
  }
  void Info(std::string message) {
    if (m_LogLevel <= info) {
      std::cout << "[INFO]: " << message << std::endl;
    }
  }
  void Warning(const char *message) {
    if (m_LogLevel <= warning) {
      std::cout << "[WARNING]: " << message << std::endl;
    }
  }
  void Error(const char *message) {
    if (m_LogLevel <= error) {
      std::cout << "[ERROR]: " << message << std::endl;
    }
  }
  void SetLogLevel(Level level) { m_LogLevel = level; }
};

int main() {
  Logger logger;
  /*logger.Info("Hello!");
  logger.Warning("Hello!");
  logger.Error("Hello!");*/

  Entity *entity = new Player("lisi");
  logger.Info(entity->GetName());
  Player *player = new Player("zhangsan");
  logger.Info(player->GetClassName());
}
