#ifndef __CDPLAYER_HPP__
#define __CDPLAYER_HPP__

#include <string>

class CDPlayer
{
private:
  std::string _description;
  std::string _name;

  bool        _is_on;

public:
  explicit CDPlayer(std::string description);

  void TurnOn()   const;
  void TurnOff()  const;

  void Eject();
  void Play(std::string name);
  void Play(int track);
  void Stop();
  void Pause();

  //disable copy constroncor and assignment operator
  CDPlayer( const CDPlayer& ) = delete;
  void operator=( const CDPlayer& ) = delete;
};

std::ostream& operator<<(std::ostream& os, const CDPlayer& remote);

#define
