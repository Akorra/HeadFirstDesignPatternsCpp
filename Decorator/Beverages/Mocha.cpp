#include "Mocha.hpp"

Mocha::Mocha(Beverage* beverage) : CondimentDecorator(std::move(beverage)) {}

std::string Mocha::getDescription() const {
    return beverage->getDescription() + ", Mocha";
}

double Mocha::cost() const {
    return beverage->cost() + 0.15;
}
