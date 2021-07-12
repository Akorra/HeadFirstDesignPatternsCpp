#ifndef __CAFFEINE_BEVERAGE_HPP__
#define __CAFFEINE_BEVERAGE_HPP__

#include <iostream>

class CaffeineBeverage
{
public:
  virtual void prepareRecipee() const final
  {
    boilWater();
    brew();
    pourInCup();
    if(customerWantsCondiments())
      addCondiments();
  }

  void boilWater() const { std::cout << "Boiling water..." << std::endl; }
  void pourInCup() const { std::cout << "Pouring into cup..." << std::endl; }

  virtual void brew() const = 0;
  virtual void addCondiments() const = 0;

  //HOOK
  virtual bool customerWantsCondiments() const { return true; }
};

#endif
