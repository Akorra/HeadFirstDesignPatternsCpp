#ifndef __NO_COMMAND_HPP__
#define __NO_COMMAND_HPP__

#include "Command.hpp"

#include <string>
#include <iostream>

class NoCommand : public Command
{
public:
  virtual void        execute() override {}
  virtual void        undo()    override {}
  virtual void        redo()    override {}
  virtual std::string getName() const override { return "No Commnd"; }
};

#endif
