#include <iostream>
#include <string>

class Logger {
public:
  enum Level { LogLevelinfo = 1, LogLevelWarning, LogLevelError };

private:
  int m_LogLevel = LogLevelinfo;

public:
    //构造函数
  Logger():m_LogLevel(LogLevelinfo) {
    // m_LogLevel = info;
    std::cout << "created Logger!" << std::endl;
  }
  //析构函数
  ~Logger() { std::cout << "destroyed Logger!" << std::endl; }
  void Info(const char* message) {
    if (m_LogLevel <= LogLevelinfo) {
      std::cout << "[INFO]: " << message << std::endl;
    }
  }
  
  void Info(const std::string& message) {
    if (m_LogLevel <= LogLevelinfo) {
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
  void SetLogLevel(Level level) { m_LogLevel = level; }
};