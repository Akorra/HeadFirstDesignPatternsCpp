#include "CDPlayer.hpp"

#include <iostream>
#include <string>

CDPlayer::CDPlayer(std::string description) : _description(description), _current_track(0), _name(""), _is_on(false) { }

void CDPlayer::TurnOn() const
{
  _is_on = true;
  std::cout << _description << " on!" << std::endl;
}

void CDPlayer::TurnOff() const
{
  _is_on = false;
  std::cout << _description << " off!" << std::endl;
}

void CDPlayer::Eject()
{
  _name = "";
  _current_track = 0;
  std::cout << _description << " eject!" << std::endl;
}

void CDPlayer::Play(std::string name)
{
  _name = name;
  std::cout << _description << " playing " << name << "!" << std::endl;
}
void CDPlayer::Play(int track)
{
  if(track < 12)
  {
    _current_track = track;
    std::cout << _description << " playing track " << track << "!" << std::endl;
  }
  else
  {
    std::cout << "all my cds have exactly 12 tracks, you know, for develper convenience!" << std::endl;
  }
}

void CDPlayer::Stop()
{
  std::cout << _description << " stopped!" << std::endl;
}

void CDPlayer::Pause()
{
  std::cout << _description << " paused!" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const CDPlayer& remote)
{
  os << _description;
  return os;
}
