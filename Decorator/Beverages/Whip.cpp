#include "Whip.hpp"

Whip::Whip(Beverage* beverage) : CondimentDecorator(beverage){
}

std::string Whip::getDescription() const {
    return beverage->getDescription() + ", Whip";
}

double Whip::cost() const {
    return beverage->cost() + 0.10;
}
