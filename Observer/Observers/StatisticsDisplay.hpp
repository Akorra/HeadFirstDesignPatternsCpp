#ifndef __STATISTICSDISPLAY_HPP__
#define __STATISTICSDISPLAY_HPP__

#include "../Subject.hpp"
#include "../Observer.hpp"

#include "DisplayElement.hpp"

class StatisticsDisplay : public Observer, public DisplayElement
{
private:
  Subject& weatherData;

  float   maxTemp;
  float   minTemp;
  float   sumTemp;

  int     numReadings;

public:
  explicit StatisticsDisplay(Subject& inWeatherData);
  ~StatisticsDisplay();

  void update(float temperature, float humidity, float pressure) override;
  void display() const override;
};

#endif
