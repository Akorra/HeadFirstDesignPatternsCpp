#ifndef __GUMBALL_HPP__
#define __GUMBALL_HPP__

#include <iostream>
#include <string>
#include <memory>
#include <utility>

class GumballMachine;

class State
{
public:
  virtual ~State() {}

  virtual void insertQuarter() = 0;
  virtual void ejectQuarter()  = 0;
  virtual void turnCrank()     = 0;
  virtual void dispense()      = 0;
  virtual void refill()        = 0;
  virtual std::string print()  = 0;
};

// -------------------------------------

class SoldState : public State
{
public:
  SoldState(GumballMachine& gumballMachine) : gumballMachine(gumballMachine) {}

  void insertQuarter()        override;
  void ejectQuarter()         override;
  void turnCrank()            override;
  void dispense()             override;
  virtual void refill()       override;
  virtual std::string print() override;

private:
  GumballMachine& gumballMachine;
};

// -------------------------------------

class SoldOutState : public State
{
public:
  SoldOutState(GumballMachine& gumballMachine) : gumballMachine(gumballMachine) {}

  void insertQuarter()        override;
  void ejectQuarter()         override;
  void turnCrank()            override;
  void dispense()             override;
  virtual void refill()       override;
  virtual std::string print() override;

private:
  GumballMachine& gumballMachine;
};

// -------------------------------------

class NoQuarterState : public State
{
public:
  NoQuarterState(GumballMachine& gumballMachine) : gumballMachine(gumballMachine) {}

  void insertQuarter()        override;
  void ejectQuarter()         override;
  void turnCrank()            override;
  void dispense()             override;
  virtual void refill()       override;
  virtual std::string print() override;

private:
  GumballMachine& gumballMachine;
};

// -------------------------------------

class HasQuarterState : public State
{
public:
  HasQuarterState(GumballMachine& gumballMachine) : gumballMachine(gumballMachine) {}

  void insertQuarter()        override;
  void ejectQuarter()         override;
  void turnCrank()            override;
  void dispense()             override;
  virtual void refill()       override;
  virtual std::string print() override;

private:
  GumballMachine& gumballMachine;
};

// -------------------------------------

class WinnerState : public State
{
public:
  WinnerState(GumballMachine& gumballMachine) : gumballMachine(gumballMachine) {}

  void insertQuarter()        override;
  void ejectQuarter()         override;
  void turnCrank()            override;
  void dispense()             override;
  virtual void refill()       override;
  virtual std::string print() override;

private:
  GumballMachine& gumballMachine;
};

// -------------------------------------

//gumball machine as singleton
class GumballMachine
{
public:
  GumballMachine()                                  = delete;
  GumballMachine(const GumballMachine&)             = delete;
  GumballMachine& operator=(const GumballMachine&)  = delete;
  GumballMachine(GumballMachine&&)                  = default;
  GumballMachine& operator=(GumballMachine&&)       = default;

  static std::unique_ptr<GumballMachine> create(int numberGumballs);

  State* getSoldState()       const { return soldState.get(); }
  State* getSoldOutState()    const { return soldOutState.get(); }
  State* getNoQuarterState()  const { return noQuarterState.get(); }
  State* getHasQuarterState() const { return hasQuarterState.get(); }
  State* getWinnerState()     const { return winnerState.get(); }

  int getCount() const { return _count; }
  std::string printState() const { return _state->print(); }

  void setState(State* state) { _state = state; }
  void refill(int numberGumballs);

  void insertQuarter() { _state->insertQuarter(); }
  void ejectQuarter()  { _state->ejectQuarter();  }
  void turnCrank()     { _state->turnCrank(); _state->dispense(); }
  void releaseBall();

  friend std::ostream& operator<<(std::ostream& os, const GumballMachine& gm);

private:
  GumballMachine(int numberGumballs) : _count(numberGumballs) {}

  std::unique_ptr<State> soldState;
  std::unique_ptr<State> soldOutState;
  std::unique_ptr<State> noQuarterState;
  std::unique_ptr<State> hasQuarterState;
  std::unique_ptr<State> winnerState;

  State* _state;
  int   _count = 0;
};

#endif
