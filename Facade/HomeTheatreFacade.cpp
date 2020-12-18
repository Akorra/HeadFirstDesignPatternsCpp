#include "HomeTheatreFacade.hpp"

HomeTheatreFacade::HomeTheatreFacade(Amplifier* a, Tuner* t, DvdPlayer* d, CdPlayer* c, Projector* p, TheaterLights*  l, Screen* s, PopcornPopper*  pop) :
                   amp(a), tuner(t), dvd(d), cd(c), projector(p), lights(l), screen(s), popper(pop) { }

void HomeTheatreFacade::watchMovie(const std::string& movie)
{
  std::cout << "Get ready to watch a movie..." << std::endl;
  popper->on();
  popper->pop();
  lights->dim(10);
  screen->down();
  projector->on();
  projector->wideScreenMode();
  amp->on();
  amp->setDvd(movie);
  amp->SetSurroundSound();
  amp->SetVolume(5);
  dvd->on();
  dvd->play(movie);
}

void HomeTheatreFacade::endMovie()
{
  std::cout << "Shutting movie theatre down..." << std::endl;
}

void HomeTheatreFacade::listenToCd(const std::string& cdTitle)
{}

void HomeTheatreFacade::endCd()
{}

void HomeTheatreFacade::listenToRadio(double frequency)
{}

void HomeTheatreFacade::endRadio()
{}
