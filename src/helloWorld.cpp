/*
 * @Author: milkandpotato milkandpotato@outlook.com
 * @Date: 2024-04-18 15:09:38
 * @LastEditors: milkandpotato milkandpotato@outlook.com
 * @LastEditTime: 2024-04-22 20:45:33
 * @FilePath: /helloWorld/src/helloWorld.cpp
 * @Description:
 *
 * Copyright (c) 2024 by milkandpotato, All Rights Reserved.
 */
// #include "../include/print.h"
#include "../include/Log.h"
#include "../include/Math.h"
#include <iostream>

class Logger {
public:
  int LogLevelInfo = 1;
  int LogLevelWarning = 2;
  int LogLevelError = 3;

private:
  int m_LogLevel = LogLevelInfo;

public:
  void Info(const char *message) {
    if (m_LogLevel <= LogLevelInfo) {
      std::cout << "[INFO]: " << message << std::endl;
    }
  }
  void Warning(const char *message) {
    if (m_LogLevel <= LogLevelWarning) {
      std::cout << "[WARNING]: " << message << std::endl;
    }
  }
  void Error(const char *message) {
    if (m_LogLevel <= LogLevelError) {
      std::cout << "[ERROR]: " << message << std::endl;
    }
  }
  void SetLogLevel(int level){
    m_LogLevel = level;
  }
};

int main() {
  // Log(Mutiply(2,5));
  int var1 = 5;
  int var3 = 1;
  int *var2 = &var1;
  var3 = Increment(*var2);
  Log(var2);
  Log(var3);
  Log(*var2);

  Logger logger;
  logger.SetLogLevel(logger.LogLevelWarning);
  logger.Info("Hello!");
  logger.Warning("Hello!");
  logger.Error("Hello!");
}
