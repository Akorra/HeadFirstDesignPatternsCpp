#include <iostream>

class CaffeineBeverage
{
public:
  virtual void prepareRecipee() final
  {
    boilWater();
    brew();
    pourInCup();
    addCondiments();
  }

  void boilWater() { std::cout << "Boiling water..." << std::endl; }
  void pourInCup() { std::cout << "Pouring into cup..." << std::endl; }

  virtual void brew();
  virtual void addCondiments();
};
