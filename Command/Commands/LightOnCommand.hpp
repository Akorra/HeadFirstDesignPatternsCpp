#ifndef __LIGHT_ON_COMMAND_HPP__
#define __LIGHT_ON_COMMAND_HPP__

#include "Command.hpp"

#include "../Appliances/Light.hpp"

class LightOnCommand : public Command
{
private:
  Light* _light;

public:
  LightOnCommand(Light* light) { _light = light; }

  void        execute() { _light->on();      }
  std::string getName() const { return _light->getLocation() + " light on"; }
};

#endif
