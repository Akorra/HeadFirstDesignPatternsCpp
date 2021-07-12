#ifndef __SOY_HPP__
#define __SOY_HPP__

#include "../CondimentDecorator.hpp"

class Soy: public CondimentDecorator {
public:
    Soy(Beverage* beverage);

    double      cost()           const override;
    std::string getDescription() const override;
};
#endif /* Soy_hpp */
