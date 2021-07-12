#ifndef __AMPLIFIER_HPP__
#define __AMPLIFIER_HPP__

#include <string>

class Tuner;
class DVDPlayer;
class CDPlayer;

class Amplifier
{
private:
  std::string _description;

  bool        _is_on;

  Tuner*      _tuner;
  DVDPlayer*  _dvd_player;
  CDPlayer*   _cd_player;

public:
  explicit Amplifier(std::string description);

  void TurnOn()   const;
  void TurnOff()  const;

  void SetStereoSound();
  void SetSurroundSound();
  void SetVolume(int level );
  void SetTuner(Tuner* tuner);
  void SetDvd(DVDPlayer* dvd );
  void SetCd(CDPlayer* cd );

  //disable copy constroncor and assignment operator
  Amplifier(const Amplifier&)       = delete;
  void operator=(const Amplifier&)  = delete;
};

std::ostream& operator<<(std::ostream& os, const Amplifier& remote);

#define
