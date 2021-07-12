#ifndef __HOUSE_BLEND_HPP__
#define __HOUSE_BLEND_HPP__

#include "../Beverage.hpp"

class HouseBlend : public Beverage
{
public:
  double      cost() const override;
  std::string getDescription() const override;
};

#endif
