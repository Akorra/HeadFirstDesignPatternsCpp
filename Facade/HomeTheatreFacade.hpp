#ifndef __HOME_THEATRE_HPP__
#define __HOME_THEATRE_HPP__

#include <string>
#include <iostream> 

class Amplifier;
class Tuner;
class DvdPlayer;
class CdPlayer;
class Projector;
class TheaterLights;
class Screen;
class PopcornPopper;

class HomeTheatreFacade
{
private:
  Amplifier*      amp;
  Tuner*          tuner;
  DvdPlayer*      dvd;
  CdPlayer*       cd;
  Projector*      projector;
  TheaterLights*  lights;
  Screen*         screen;
  PopcornPopper*  popper;

public:
  HomeTheatreFacade(Amplifier* a, Tuner* t, DvdPlayer* d, CdPlayer* c, Projector* p, TheaterLights*  l, Screen* s, PopcornPopper*  pop);

  void watchMovie(const std::string& movie);
  void endMovie();
  void listenToCd(const std::string& cdTitle);
  void endCd();
  void listenToRadio(double frequency);
  void endRadio();

};

#endif
