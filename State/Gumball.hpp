#ifndef __GUMBALL_HPP__
#define __GUMBALL_HPP__

#include <iostream>
#include <string>

class GumballMachine
{
public:
  enum STATE { SOLD_OUT, NO_QUARTER, HAS_QUARTER, SOLD };

  GumballMachine(int count);

  void insertQuarter();
  void ejectQuarter();
  void turnCrank();
  void dispense();

  std::string StateAsString(STATE stt) const;

  friend std::ostream& operator<<(std::ostream& os, const GumballMachine& gm);

private:
  STATE _state = STATE::SOLD_OUT;
  int   _count = 0;
};

#endif
