#include "Duck.hpp"

#include "../Behavior/QuackBehavior.hpp"
#include "../Behavior/FlyBehavior.hpp"

#include <iostream>

Duck::Duck() : flyBehavior(nullptr), quackBehavior(nullptr) { }

Duck::Duck(FlyBehavior* flyBehavior, QuackBehavior* quackBehavior) :
    flyBehavior(std::move(flyBehavior)),
    quackBehavior(std::move(quackBehavior)) { }

Duck::~Duck()
{
  if(flyBehavior)
    delete flyBehavior;

  if(quackBehavior)
    delete quackBehavior;
}

void Duck::setFlyBehavior(FlyBehavior* fb)
{
  if(flyBehavior)
    delete flyBehavior;

  flyBehavior = fb;
}

void Duck::setQuackBehavior(QuackBehavior* qb)
{
  if(quackBehavior)
    delete quackBehavior;

  quackBehavior = qb;
}

void Duck::performQuack() const
{
    // Delegate to the behavior class.
    if(quackBehavior)
      quackBehavior->quack();
}

void Duck::swim() const
{
    std::cout << "All ducks float, even decoys!" << std::endl;
}

void Duck::performFly() const
{
    // Delegate to the behavior class.
    if(flyBehavior)
      flyBehavior->fly();
}
