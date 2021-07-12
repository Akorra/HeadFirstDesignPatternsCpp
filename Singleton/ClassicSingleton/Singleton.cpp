#include "Singleton.hpp"

Singleton* Singleton::_instance = nullptr;;

Singleton* Singleton::GetInstance(const std::string& val)
{
  if(_instance == nullptr)
  {
    _instance = new Singleton(val);
  }
  return _instance;
}
