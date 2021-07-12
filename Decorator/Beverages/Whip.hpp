#ifndef __WHIP_HPP__
#define __WHIP_HPP__

#include "../CondimentDecorator.hpp"

class Whip: public CondimentDecorator {
public:
    Whip(Beverage* beverage);

    double      cost()           const override;
    std::string getDescription() const override;
};
#endif /* Whip_hpp */
