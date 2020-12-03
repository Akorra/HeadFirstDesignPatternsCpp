#ifndef __COMMAND_HPP__
#define __COMMAND_HPP__

#include <string>

class Command
{
public:
  virtual ~Command() = default;
  virtual void execute() = 0;
  virtual std::string getName() const { return "command"; }
};

#endif
