#ifndef __LIGHT_OFF_COMMAND_HPP__
#define __LIGHT_OFF_COMMAND_HPP__

#include "Command.hpp"

#include "../Appliances/Light.hpp"

class LightOffCommand : public Command
{
private:
  Light* _light;

public:
  LightOffCommand(Light* light) { _light = light; }

  void execute()        { _light->off();      }
  std::string getName() const { return _light->getLocation() + " light off"; }
};

#endif
