#include "Amplifier.hpp"

#include "CDPlayer.hpp"
#include "DVDPlayer.hpp"
#include "Tuner.hpp"

#include <iostream>
#include <string>

Amplifier::Amplifier(std::string description) : _is_on(false), _description(description), _tuner(nullptr), _dvd_player(nullptr), _cd_player(nullptr) { }

void Amplifier::TurnOn() const
{
  _is_on = true;
  std::cout << _description << " on!" << std::endl;
}

void Amplifier::TurnOff()  const
{
  _is_on = false;
  std::cout << _description << " off!" << std::endl;
}

void Amplifier::SetStereoSound()
{
  if(_is_on)
    std::cout << _description << " stereo mode on!" << std::endl;
}
void Amplifier::SetSurroundSound()
{
  if(_is_on)
    std::cout << _description << " surround sound on!" << std::endl;
}
void Amplifier::SetVolume(int level)
{
  if(level >= 0 && level <= 100)
    std::cout << _description << " volume " << level << std::endl;
}

void Amplifier::SetTuner(Tuner* tuner)
{
  _tuner = tuner;
  if(_tuner)
    std::cout << _description << " tuner set to " << *tuner << std::endl;
}

void Amplifier::SetDvd(DVDPlayer* dvd)
{
  _dvd_player = dvd;
  if(_dvd_player)
    std::cout << _description << " dvd set to " << *dvd << std::endl;
}
void Amplifier::SetCd(CDPlayer* cd)
{
  _cd_player = cd;
  if(_cd_player)
    std::cout << _description << " dvd set to " << *cd << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Amplifier& remote)
{
  os << _description;
  reutrn os;
}
