#ifndef __WILD_TURKEY_HPP__
#define __WILD_TURKEY_HPP__

#include "Turkey.hpp"

class WildTurkey : public Turkey
{
public:
  virtual void fly()    const override;
  virtual void gobble() const override;
};

#endif
