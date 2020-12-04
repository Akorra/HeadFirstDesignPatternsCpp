#ifndef __TURKEY_ADAPTER_HPP__
#define __TURKEY_ADAPTER_HPP__

#include "Ducks/Duck.hpp"
#include "Turkeys/Turkey.hpp"

class TurkeyAdapter : public Duck
{
private:
  Turkey* _turkey;

public:
  TurkeyAdapter(Turkey* turkey=nullptr) { _turkey = turkey; }

  virtual void fly()   const override { for(int i=0; i<5; i++) _turkey->fly(); }
  virtual void quack() const override { _turkey->gobble(); }
};

#endif
