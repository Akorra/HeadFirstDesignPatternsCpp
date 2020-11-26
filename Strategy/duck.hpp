#ifndef __DUCK_HPP__
#define __DUCK_HPP__

#include <iostream>

#include "behavior.hpp"

using namespace std;

class Duck
{
protected:
    QuackBehavior *quackBehavior;
    FlyBehavior *flyBehavior;

public:
    Duck()
    {
        quackBehavior = new QuackBehavior();
        flyBehavior = new FlyBehavior();
    }

    ~Duck()
    {
      if(flyBehavior)
        delete flyBehavior;

      if(quackBehavior)
        delete quackBehavior;
    }

    void swim()
    {
        cout << "swish swoosh... * water noises *" << endl;
    }

    virtual void display()
    {
        cout << "I'm a duck I guess..." << endl;
    }

    void performQuack()
    {
        if(quackBehavior) quackBehavior->quack();
    }

    void performFly()
    {
        if(flyBehavior) flyBehavior->fly();
    }

    void setFlyBehavior(FlyBehavior *fb)
    {
        if(flyBehavior)
          delete flyBehavior;
        flyBehavior = fb;
    }

    void setQuackBehavior(QuackBehavior *qb)
    {
        if(quackBehavior)
          delete quackBehavior;
        quackBehavior = qb;
    }
};

class MallardDuck: public Duck
{
public:
    MallardDuck()
    {
        quackBehavior = new Quack();
        flyBehavior = new FlyWithWings();
    }

    void display()
    {
        cout << "I'm a duck a real mallard fuck!" << endl;
    }
};

#endif
