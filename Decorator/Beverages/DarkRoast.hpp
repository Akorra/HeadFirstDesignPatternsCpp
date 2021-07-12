#ifndef __DARKROAST_HPP__
#define __DARKROAST_HPP__

#include "../Beverage.hpp"

class DarkRoast: public Beverage {
public:
    std::string getDescription() const override;
    double cost() const override;
};

#endif /* DarkRoast_hpp */
