#ifndef __QUACK_HPP__
#define __QUACK_HPP__

#include "QuackBehavior.hpp"

// Same thing here for the quack behavior, we have an interface that just includes a quack() method that needs to be implemented.
class QuackBehavior {
public:
    virtual ~QuackBehavior() {}
    virtual void quack() const = 0;
};

#endif /* __QUACK_HPP__ */
