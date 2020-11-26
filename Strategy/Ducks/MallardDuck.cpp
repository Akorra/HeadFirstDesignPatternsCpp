#include "MallardDuck.hpp"

#include "../Behavior/FlyWithWings.hpp"
#include "../Behavior/Quack.hpp"

#include <iostream>

MallardDuck::MallardDuck() :
    Duck(new FlyWithWings(), new Quack()) {
}

void MallardDuck::display() const {
    std::cout << "I'm duck, a real Mallard fuck!" << std::endl;
}
