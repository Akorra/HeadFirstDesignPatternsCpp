#ifndef __CURRENTCONDITIONSDISPLAY_HPP__
#define __CURRENTCONDITIONSDISPLAY_HPP__

#include "../Subject.hpp"
#include "../Observer.hpp"

#include "DisplayElement.hpp"

class CurrentConditionsDisplay : public Observer, public DisplayElement
{
private:
  Subject& weatherData;

  float temperature;
  float humidity;

public:
  explicit CurrentConditionsDisplay(Subject& inWeatherData);
  ~CurrentConditionsDisplay();

  void update(float temperature, float humidity, float pressure) override;
  void display() const override;
};

#endif
