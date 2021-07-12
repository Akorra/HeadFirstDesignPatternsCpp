#ifndef __TEA_HPP__
#define __TEA_HPP__

#include "CaffeineBeverage.hpp"

class Tea : public CaffeineBeverage
{
public:
  void brew()          override { std::cout << "Steeping the tea..." << std::endl; }
  void addCondiments() override { std::cout << "Adding Lemon..." << std::endl; }
};

#endif
