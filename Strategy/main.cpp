#include "Ducks/MallardDuck.hpp"

#include <iostream>
#include <string>

using namespace std;

int main()
{
  MallardDuck mallard;
  mallard.display();
  mallard.swim();
  mallard.performQuack();
  mallard.performFly();

  return 0;
}
