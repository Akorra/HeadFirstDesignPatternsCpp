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

  virtual void        execute() override        { _light->off(); }
  virtual void        undo()    override        { _light->on();  }
  virtual void        redo()    override        { _light->off(); }
  virtual std::string getName() const override  { return _light->getLocation() + " light off"; }
};

#endif
