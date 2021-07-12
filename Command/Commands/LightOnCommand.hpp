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

  virtual void        execute() override        { _light->on();  }
  virtual void        undo()    override        { _light->off(); }
  virtual void        redo()    override        { _light->on(); }
  virtual std::string getName() const override  { return _light->getLocation() + " light on"; }
};

#endif
