#include "Gumball.hpp"

GumballMachine::GumballMachine(int count) : _count(count)
{
  if(count > 0)
    _state = STATE::NO_QUARTER;
}

std::ostream& operator<<(std::ostream& os, const GumballMachine& gm)
{
  os << "Mighty Gumball, Inc.\n"
     << "Standing Gumball Model #69420\n"
     << "Inventory: " << gm._count << "\n"
     << gm.StateAsString(gm._state) << std::endl;

  return os;
}

void GumballMachine::insertQuarter()
{
  switch(_state)
  {
    case HAS_QUARTER:
      std::cout << "  You can't insert another quarter." << std::endl;
      break;
    case NO_QUARTER:
      _state = HAS_QUARTER;
      std::cout << "  You inserted a quarter." << std::endl;
      break;
    case SOLD_OUT:
      std::cout << "  You can't insert a quarter, the machine is sold out." << std::endl;
      break;
    case SOLD:
      std::cout << "  Please wait, we're already giving you a gumball." << std::endl;
      break;
    default:
      std::cout << "  Invalid State." << std::endl;
      break;
  }
}

void GumballMachine::ejectQuarter()
{
  switch(_state)
  {
    case HAS_QUARTER:
      _state = NO_QUARTER;
      std::cout << "  Quarter returned." << std::endl;
      break;
    case NO_QUARTER:
      std::cout << "  You haven't inserted a quarter." << std::endl;
      break;
    case SOLD_OUT:
      std::cout << "  You can't eject, you haven't inserted a quarter yet." << std::endl;
      break;
    case SOLD:
      std::cout << "  Sorry, you already turned the crank." << std::endl;
      break;
    default:
      std::cout << "  Invalid State." << std::endl;
      break;
  }
}

void GumballMachine::turnCrank()
{
  switch(_state)
  {
    case HAS_QUARTER:
      _state = SOLD;
      std::cout << "  You turned.." << std::endl;
      dispense();
      break;
    case NO_QUARTER:
      std::cout << "  You turned, but there is no quarter." << std::endl;
      break;
    case SOLD_OUT:
      std::cout << "  You turned, but there are no gumballs." << std::endl;
      break;
    case SOLD:
      std::cout << "  Turning twice doesn't get you another gumball!" << std::endl;
      break;
    default:
      std::cout << "  Invalid State." << std::endl;
      break;
  }
}

void GumballMachine::dispense()
{
  switch(_state)
  {
    case HAS_QUARTER:
      std::cout << "  You need to turn the crank." << std::endl;
      break;
    case NO_QUARTER:
      std::cout << "  You need to pay first." << std::endl;
      break;
    case SOLD_OUT:
      std::cout << "  No gumball dispensed." << std::endl;
      break;
    case SOLD:
      std::cout << "  A gumball comes rolling out the slot!" << std::endl;
      _count = _count - 1;
      if(_count <= 0) {
        _count = 0;
        std::cout << "  Oops, out of gumballs!" << std::endl;
        _state = SOLD_OUT;
      } else {
        _state = NO_QUARTER;
      }
      break;
    default:
      std::cout << "  Invalid State." << std::endl;
      break;
  }
}

std::string GumballMachine::StateAsString(STATE stt) const
{
  switch(stt)
  {
    case HAS_QUARTER:
      return "...quarter inserted, turn the crank...";
    case NO_QUARTER:
      return "...waiting for quarter...";
    case SOLD_OUT:
      return "...sold out...";
    case SOLD:
      return "...gumball dispensed...";
    default:
      return "INVALID";
  }
}
