#include "Light.hpp"

#include <iostream>

Light::Light(const std::string& location)
{
    _location = location;
}

void Light::on()
{
  is_on = true;
  std::cout << _location << " light is on..." << std::endl;
}

void Light::off()
{
  is_on = false;
  std::cout << _location << " light is off..." << std::endl;
}

std::string Light::getLocation()
{
  return _location;
}
