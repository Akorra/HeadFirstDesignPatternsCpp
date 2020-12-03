#ifndef __LIGHT_HPP__
#define __LIGHT_HPP__

#include <string>

class Light
{
private:
  std::string _location;
  bool        _is_on;

public:
  Light(const std::string& location);

  void on();
  void off();

  std::string getLocation();
};

#endif
