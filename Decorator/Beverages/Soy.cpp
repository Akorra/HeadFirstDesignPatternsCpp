#include "Soy.hpp"

Soy::Soy(Beverage* beverage) : CondimentDecorator(std::move(beverage)) {}

std::string Soy::getDescription() const {
    return beverage->getDescription() + ", Soy";
}

double Soy::cost() const {
    return beverage->cost() + 0.15;
}
