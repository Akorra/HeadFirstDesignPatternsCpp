#ifndef __COFFEE_HPP__
#define __COFFEE_HPP__

#include "CaffeineBeverage.hpp"

class Coffee
{
public:
  void brew()          override { std::cout << "Dripping Coffee through filter..." << std::endl; }
  void addCondiments() override { std::cout << "Adding sugar and milk..." << std::endl; }
};

#endif
