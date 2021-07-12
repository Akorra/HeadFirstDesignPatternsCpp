#ifndef __FlyWithWings_hpp__
#define __FlyWithWings_hpp__

#include "FlyBehavior.hpp"

// Here's the implementation of flying for all ducks that have wings.
class FlyWithWings: public FlyBehavior {
public:
    virtual void fly() const;
};

#endif /* FlyWithWings_hpp */
