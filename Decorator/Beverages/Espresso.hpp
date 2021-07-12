#ifndef __ESPRESSO_HPP__
#define __ESPRESSO_HPP__

#include "../Beverage.hpp"

class Espresso : public Beverage
{
public:
  double      cost() const override;
  std::string getDescription() const override;
};

#endif
