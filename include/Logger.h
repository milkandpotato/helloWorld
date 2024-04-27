/*
 * @Description  : 
 * @Version      : V1.0.0
 * @Author       : 雨翀 孙 milkandpotato@outlook.com
 * @Date         : 2024-04-27 16:00:21
 * @LastEditors  : 雨翀 孙 milkandpotato@outlook.com
 * @LastEditTime : 2024-04-27 16:00:21
 * @FilePath     : Logger.h
 * Copyright 2024 Marvin, All Rights Reserved. 
 * 2024-04-27 16:00:21
 */
#pragma once

#include <string>
#include "../include/Log.h"

class Logger
{
public:
    enum Level
    {
        LogLevelinfo = 1,
        LogLevelWarning,
        LogLevelError
    };

private:
    int logLevel = LogLevelinfo;

public:
    // 构造函数
    Logger();
    // 析构函数
    ~Logger();

    void Info(const std::string &message) const;
    void Warning(const std::string &message) const;
    void Error(const std::string &message) const;
    void SetLogLevel(Level level);
};
