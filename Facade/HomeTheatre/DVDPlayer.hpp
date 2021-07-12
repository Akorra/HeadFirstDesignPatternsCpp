#ifndef __DVDPLAYER_HPP__
#define __DVDPLAYER_HPP__

#include <string>

class DVDPlayer
{
private:
  std::string _description;
  std::string _name;

  bool        _is_on;
  int         _current_track;

public:
  explicit DVDPlayer(std::string description);

  void TurnOn()   const;
  void TurnOff()  const;

  void Eject();
  void Play(std::string name);
  void Stop();
  void Pause();

  //disable copy constroncor and assignment operator
  DVDPlayer( const DVDPlayer& ) = delete;
  void operator=( const DVDPlayer& ) = delete;
};

std::ostream& operator<<(std::ostream& os, const DVDPlayer& remote);

#define
