#ifndef __MOCHA_HPP__
#define __MOCHA_HPP__

#include "../CondimentDecorator.hpp"

class Mocha: public CondimentDecorator {
public:
    Mocha(Beverage* beverage);

    double      cost()           const override;
    std::string getDescription() const override;
};

#endif /* Mocha_hpp */
