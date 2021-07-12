#ifndef __CONDIMENT_DECORATOR_HPP__
#define __CONDIMENT_DECORATOR_HPP__

#include "Beverage.hpp"

class CondimentDecorator : public Beverage
{
protected:
  Beverage* beverage;
  CondimentDecorator(Beverage* bev) : beverage(bev) {}
};

#endif
