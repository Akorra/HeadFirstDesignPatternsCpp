#ifndef __SINGLETON_HPP__
#define __SINGLETON_HPP__

#include <string>

/*
  Meyers Singleton is thread safe, guaranteed by static fields
*/
class Singleton
{
private:
  std::string _value;

  Singleton(const std::string val) : _value(val) {}

public:
  //Singleton should not be cloneable
  Singleton(Singleton& other) = delete;

  //Singleton should not be assignable
  void operator=(const Singleton&) = delete;

  static Singleton& GetInstance(const std::string& val);

  std::string value() const { return _value; }
};

#endif
