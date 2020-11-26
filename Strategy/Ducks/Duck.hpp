#ifndef __DUCK_HPP__
#define __DUCK_HPP__

#include "../Behavior/FlyBehavior.hpp"
#include "../Behavior/QuackBehavior.hpp"

class Duck {
    // Declare two reference variables for the behavior interface types. All duck classes (in the same package) inherit these.
private:
    FlyBehavior* flyBehavior;
    QuackBehavior* quackBehavior;

public:
    Duck();
    Duck(FlyBehavior* flyBehavior, QuackBehavior* quackBehavior);

    // IN C++: a base class with virtual functions must also have a virtual destructor.
    virtual ~Duck();

    virtual void display() const = 0;

    void setFlyBehavior(FlyBehavior* fb);
    void setQuackBehavior(QuackBehavior* qb);

    void performQuack() const;
    void performFly() const;
    void swim() const;
};

#endif /* Duck_hpp */
