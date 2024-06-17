/*
 * @Description  : 
 * @Version      : V1.0.0
 * @Author       : 雨翀 孙 milkandpotato@outlook.com
 * @Date         : 2024-06-17 16:53:19
 * @LastEditors  : 雨翀 孙 milkandpotato@outlook.com
 * @LastEditTime : 2024-06-17 16:59:15
 * @FilePath     : Logger.hpp
 * Copyright 2024 Marvin, All Rights Reserved. 
 * 2024-06-17 16:53:19
 */

#include "./Log.hpp"

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
