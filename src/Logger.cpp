/*
 * @Description  : 日志类
 * @Version      : V1.0.0
 * @Author       : 雨翀 孙 milkandpotato@outlook.com
 * @Date         : 2024-04-27 16:00:37
 * @LastEditors  : 雨翀 孙 milkandpotato@outlook.com
 * @LastEditTime : 2024-04-27 16:00:37
 * @FilePath     : Logger.cpp
 * Copyright 2024 Marvin, All Rights Reserved. 
 * 2024-04-27 16:00:37
 */
#include <iostream>
#include <string>
#include "../include/Logger.h"

// 构造函数实现
Logger::Logger() : logLevel(LogLevelinfo)
{
  Log("created Logger!");
}
Logger::~Logger()
{
  Log("destroyed Logger!");
}

// 成员函数实现
void Logger::Info(const std::string &message) const
{
  if (logLevel <= LogLevelinfo)
  {
    std::string infoMessage = "[INFO]: " + message;
    Log(infoMessage);
  }
}
void Logger::Warning(const std::string &message) const
{
  if (logLevel <= LogLevelWarning)
  {
    std::string warnMessage = "[WARNING]: " + message;
    Log(warnMessage);
  }
}
void Logger::Error(const std::string &message) const
{
  if (logLevel <= LogLevelError)
  {
    std::string errorMessage = "[ERROR]: " + message;
    Log(errorMessage);
  }
}
void Logger::SetLogLevel(Level level) { this->logLevel = level; };