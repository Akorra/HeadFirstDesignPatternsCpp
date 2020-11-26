#ifndef __DUCK_HPP__
#define __DUCK_HPP__

#include <memory>

#include "../Behavior/FlyBehavior.hpp"
#include "../Behavior/QuackBehavior.hpp"

class Duck {
    // Declare two reference variables for the behavior interface types. All duck classes (in the same package) inherit these.
public:
    // IN C++: prefer unique_ptr by default, shared_ptr when there are multiple references.
    std::unique_ptr<FlyBehavior> flyBehavior;
    std::unique_ptr<QuackBehavior> quackBehavior;

    Duck(std::unique_ptr<FlyBehavior> flyBehavior, std::unique_ptr<QuackBehavior> quackBehavior);

    // IN C++: a base class with virtual functions must also have a virtual destructor.
    virtual ~Duck() {}

    virtual void display() const = 0;

    void performQuack() const;
    void performFly() const;
    void swim() const;
};

#endif /* Duck_hpp */
