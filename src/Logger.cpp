#include <iostream>

class Logger {
public:
  enum Level { info = 1, warning, error };

private:
  int m_LogLevel = info;

public:
    //构造函数
  Logger() {
    // m_LogLevel = info;
    std::cout << "created Eentity!" << std::endl;
  }
  //析构函数
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