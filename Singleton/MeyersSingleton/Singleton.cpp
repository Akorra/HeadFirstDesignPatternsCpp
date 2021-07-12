#include "Singleton.hpp"

Singleton& Singleton::GetInstance(const std::string& val)
{
  static Singleton _instance(val);
  return _instance;
}
