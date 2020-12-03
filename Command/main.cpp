#include <iostream>
#include <string>

#include "RemoteControl.hpp"

#include "Commands/LightOnCommand.hpp"
#include "Commands/LightOffCommand.hpp"

using namespace std;

int main()
{
  Light* out = new Light("Out");
  Light* bed = new Light("Bed");
  Light* hal = new Light("Hll");
  Light* dck = new Light("Dck");
  Light* ktc = new Light("Ktc");
  Light* lvg = new Light("Lvg");
  Light* bth = new Light("Bth");

  RemoteControl remote;
  remote.setCommand(0, std::make_shared<LightOnCommand>(bed), std::make_shared<LightOffCommand>(bed));
  remote.setCommand(1, std::make_shared<LightOnCommand>(out), std::make_shared<LightOffCommand>(out));
  remote.setCommand(2, std::make_shared<LightOnCommand>(hal), std::make_shared<LightOffCommand>(hal));
  remote.setCommand(3, std::make_shared<LightOnCommand>(dck), std::make_shared<LightOffCommand>(dck));
  remote.setCommand(4, std::make_shared<LightOnCommand>(ktc), std::make_shared<LightOffCommand>(ktc));
  remote.setCommand(5, std::make_shared<LightOnCommand>(lvg), std::make_shared<LightOffCommand>(lvg));
  remote.setCommand(6, std::make_shared<LightOnCommand>(bth), std::make_shared<LightOffCommand>(bth));

  cout << remote << endl;
  cout << "push a buton [y #slot / n #slot]: " << endl;

  std::string cmd = "";
  int  slt;

  while(true)
  {
    cout << "select an action [on/off/undo/redo/quit]: ";
    cin >> cmd;
    if(cmd == "on")
    {
      cout << "select a slot: ";
      cin >> slt;
      if(slt < 7)
        remote.onButtonPressed(slt);
    }
    else if(cmd == "off")
    {
      cout << "select a slot: ";
      cin >> slt;
      if(slt < 7)
        remote.onButtonPressed(slt);
    }
    else if(cmd == "undo")
    {
      remote.undoButtonPressed();
    }
    else if(cmd == "redo")
    {
      remote.redoButtonPressed();
    }
    else if(cmd == "quit")
    {
      break;
    }
  }
  return 0;
}
