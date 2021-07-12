#ifndef __MallardDuck_hpp
#define __MallardDuck_hpp

#include "Duck.hpp"

// A MallardDuck uses the Quack class to handle its quack, so when performQuack() is called, the responsibility for the quack is delegated to the Quack object and we get a real quack.
// And it uses FlyWithWings as its FlyBehavior type.
// Remember, MallardDuck inherits the quackBehavior and flyBehavior instance variables from class Duck.
class MallardDuck: public Duck {
public:
    MallardDuck();
    void display() const;
};

#endif
