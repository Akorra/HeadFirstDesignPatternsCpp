#ifndef __FORECASTDISPLAY_HPP__
#define __FORECASTDISPLAY_HPP__

#include "../Subject.hpp"
#include "../Observer.hpp"

#include "DisplayElement.hpp"

class ForecastDisplay : public Observer, public DisplayElement
{
private:
  Subject& weatherData;

  float currPressure;
  float prevPressure;

public:
  explicit ForecastDisplay(Subject& inWeatherData);
  ~ForecastDisplay();

  void update(float temperature, float humidity, float pressure) override;
  void display() const override;
};

#endif
