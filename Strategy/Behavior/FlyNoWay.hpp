#ifndef __FlyNoWay_hpp__
#define __FlyNoWay_hpp__

#include "FlyBehavior.hpp"

// Here's the implementation of flying for all ducks that have wings.
class FlyNoWay: public FlyBehavior {
public:
    virtual void fly() const;
};

#endif /* FlyWithWings_hpp */
