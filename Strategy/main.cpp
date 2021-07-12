#include "Ducks/MallardDuck.hpp"

#include "Behavior/FlyNoWay.hpp"
#include "Behavior/FlyWithWings.hpp"
#include "Behavior/Quack.hpp"
#include "Behavior/Squeak.hpp"

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

  mallard.setFlyBehavior(new FlyNoWay());
  mallard.setQuackBehavior(new Squeak());

  mallard.display();
  mallard.swim();
  mallard.performQuack();
  mallard.performFly();

  mallard.setFlyBehavior(new FlyWithWings());
  mallard.setQuackBehavior(new Quack());

  mallard.display();
  mallard.swim();
  mallard.performQuack();
  mallard.performFly();

  return 0;
}
