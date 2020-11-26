#ifndef __BEHAVIOR_HPP__
#define __BEHAVIOR_HPP__

#include <iostream>

using namespace std;

class FlyBehavior
{
public:
    virtual ~FlyBehavior(){}
    virtual void fly(){}
};

class FlyWithWings: public FlyBehavior
{
public:
    void fly()
    {
        cout << "I'm flying!!" << endl;
    }
};

class FlyNoWay: public FlyBehavior
{
public:
    void fly()
    {
        cout << "I can't fly..." << endl;
    }
};

class QuackBehavior
{
public:
    virtual ~QuackBehavior(){}
    virtual void quack(){}
};

class Quack: public QuackBehavior
{
public:
    void quack()
    {
        cout << "Quack!" << endl;
    }
};

class Squeak: public QuackBehavior
{
public:
    void quack()
    {
        cout << "Squeack..." << endl;
    }
};

class MuteQuack: public QuackBehavior
{
public:
    void quack()
    {
        cout << "* Silence *" << endl;
    }
};

#endif
