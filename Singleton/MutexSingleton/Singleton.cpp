#include "Singleton.hpp"

Singleton* Singleton::_instance = nullptr;
std::mutex Singleton::_lock;

Singleton* Singleton::GetInstance(const std::string& val)
{
  if(_instance == nullptr)
  {
    std::lock_guard<std::mutex> lock(_lock);
    if(_instance == nullptr)
    {
      _instance = new Singleton(val);
    }
  }
  return _instance;
}
