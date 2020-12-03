#ifndef __REMOTE_CONTROL_HPP__
#define __REMOTE_CONTROL_HPP__

#include "Commands/Command.hpp"

#include <vector>

class RemoteControl
{
public:
  std::vector<std::shared_ptr<Command>> on_commands;
  std::vector<std::shared_ptr<Command>> off_commands;

public:
  RemoteControl();
  ~RemoteControl() = default;

  void setCommand(int slot, std::shared_ptr<Command> on, std::shared_ptr<Command> off);
  void onButtonPressed(int slot);
  void offButtonPressed(int slot);
};

std::ostream& operator<<(std::ostream& os, const RemoteControl& remote);

#endif
