#ifndef __MALLARD_DUCK_HPP__
#define __MALLARD_DUCK_HPP__

#include "Duck.hpp"

class MallardDuck : public Duck
{
public:
  virtual void fly()    const override;
  virtual void quack()  const override;
};

#endif
