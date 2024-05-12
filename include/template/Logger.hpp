/*
 * @Author: milkandpotato milkandpotato@outlook.com
 * @Date: 2024-05-12 15:27:38
 * @LastEditors: milkandpotato milkandpotato@outlook.com
 * @LastEditTime: 2024-05-12 15:32:40
 * @FilePath: /helloWorld/include/template/Logger.hpp
 * @Description: 
 * 
 * Copyright (c) 2024 by milkandpotato, All Rights Reserved. 
 */
#pragma once

#include "./Log.hpp"
#include <string>

template <typename T> class Logger {
public:
  enum Level { LogLevelinfo = 1, LogLevelWarning, LogLevelError };

private:
  int logLevel;

public:
  // 构造函数
  Logger():logLevel(LogLevelinfo){
    Log("created Logger!");
  }
  // 析构函数
  ~Logger(){
    Log("destroyed Logger!");
  }
  
  void Info(const T &message) const {
    if (logLevel <= LogLevelinfo) {
      std::string infoMessage = "[INFO]: " + message;
      Log(infoMessage);
    }
  }
  void Warning(const T &message) const {
    if (logLevel <= LogLevelWarning) {
      std::string warnMessage = "[WARNING]: " + message;
      Log(warnMessage);
    }
  }
  void Error(const T &message) const {
    if (logLevel <= LogLevelError) {
      std::string errorMessage = "[ERROR]: " + message;
      Log(errorMessage);
    }
  }
  void SetLogLevel(Level level);
};
