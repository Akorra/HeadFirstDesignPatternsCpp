#ifndef __MuteQuack_hpp__
#define __MuteQuack_hpp__

#include "QuackBehavior.hpp"

// Quacks that really quack.
class MuteQuack: public QuackBehavior {
public:
    void quack() const;
};

#endif /* Quack_hpp */
