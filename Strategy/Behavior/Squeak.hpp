#ifndef __Squeak_hpp__
#define __Squeak_hpp__

#include "QuackBehavior.hpp"

// Quacks that really quack.
class Squeak: public QuackBehavior {
public:
    void quack() const;
};

#endif /* Quack_hpp */
