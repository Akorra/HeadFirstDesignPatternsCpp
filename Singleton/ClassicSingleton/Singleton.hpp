#ifndef __SINGLETON_HPP__
#define __SINGLETON_HPP__

#include <string>

class Singleton
{
private:
  Singleton(const std::string val) : _value(val) {}

  static Singleton* _instance;

  std::string _value;

public:
  //Singleton should not be cloneable
  Singleton(Singleton& other) = delete;

  //Singleton should not be assignable
  void operator=(const Singleton&) = delete;

  static Singleton* GetInstance(const std::string& val);

  std::string value() const { return _value; }
};

#endif
