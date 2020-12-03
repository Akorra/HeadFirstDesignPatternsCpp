#include "RemoteControl.hpp"
#include "Commands/NoCommand.hpp"

RemoteControl::RemoteControl()
{
  auto no_command = std::make_shared<NoCommand>();

  on_commands  = std::vector<std::shared_ptr<Command>>(7, no_command);
  off_commands = std::vector<std::shared_ptr<Command>>(7, no_command);
}


void RemoteControl::setCommand(int slot, std::shared_ptr<Command> on, std::shared_ptr<Command> off)
{
  on_commands[slot]  = on;
  off_commands[slot] = off;
}

void RemoteControl::onButtonPressed(int slot)
{
  on_commands[slot]->execute();
}

void RemoteControl::offButtonPressed(int slot)
{
  off_commands[slot]->execute();
}

std::ostream& operator<<(std::ostream& os, const RemoteControl& remote)
{
  os << "\n----------- Remote Control -----------\n";
  for (int index = 0; index < remote.on_commands.size(); ++index) {
      auto onCommand = remote.on_commands[index]->getName();
      auto offCommand = remote.off_commands[index]->getName();
      os << "[slot " << index << "] " << onCommand << "     " << offCommand << std::endl;
  }
  return os;
}
