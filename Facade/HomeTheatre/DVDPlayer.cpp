#include "DVDPlayer.hpp"

#include <iostream>
#include <string>

DVDPlayer::DVDPlayer(std::string description) : _description(description), _name(""), _is_on(false) { }

void DVDPlayer::TurnOn() const
{
  _is_on = true;
  std::cout << _description << " on!" << std::endl;
}

void DVDPlayer::TurnOff() const
{
  _is_on = false;
  std::cout << _description << " off!" << std::endl;
}

void DVDPlayer::Eject()
{
  _name = "";
  _current_track = 0;
  std::cout << _description << " eject!" << std::endl;
}

void DVDPlayer::Play(std::string name)
{
  _name = name;
  std::cout << _description << " playing " << name << "!" << std::endl;
}

void DVDPlayer::Stop()
{
  std::cout << _description << " stopped!" << std::endl;
}

void DVDPlayer::Pause()
{
  std::cout << _description << " paused!" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const DVDPlayer& remote)
{
  os << _description;
  return os;
}
