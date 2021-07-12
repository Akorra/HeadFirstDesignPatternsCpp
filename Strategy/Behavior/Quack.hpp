#ifndef __Quack_hpp__
#define __Quack_hpp__

#include "QuackBehavior.hpp"

// Quacks that really quack.
class Quack: public QuackBehavior {
public:
    void quack() const;
};

#endif /* Quack_hpp */
