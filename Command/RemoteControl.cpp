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
  undo_commands.push_back(on_commands[slot]);
  redo_commands.clear();
}

void RemoteControl::offButtonPressed(int slot)
{
  off_commands[slot]->execute();
  undo_commands.push_back(off_commands[slot]);
  redo_commands.clear();
}

void RemoteControl::undoButtonPressed()
{
  if(undo_commands.size() > 0)
  {
    auto cmd = undo_commands.back();
    if(cmd){
      cmd->undo();
      redo_commands.push_back(cmd);
      undo_commands.pop_back();
    }
  }
}

void RemoteControl::redoButtonPressed()
{
  if(redo_commands.size() > 0)
  {
    auto cmd = redo_commands.back();
    if(cmd){
      cmd->redo();
      undo_commands.push_back(cmd);
      redo_commands.pop_back();
    }
  }
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
