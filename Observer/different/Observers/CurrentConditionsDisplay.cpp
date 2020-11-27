#include "CurrentConditionsDisplay.hpp"

#include <iostream>

CurrentConditionsDisplay::CurrentConditionsDisplay(Subject& inWeatherData) : weatherData(inWeatherData), temperature(0.0f), humidity(0.0f)
{
  token = weatherData.registerObserver([this](float temp, float hum, float pres) { update(temp, hum, pres); });
}

CurrentConditionsDisplay::~CurrentConditionsDisplay()
{
  weatherData.removeObserver(token);
}

void CurrentConditionsDisplay::update(float t, float h, float p)
{
  temperature = t;
  humidity    = h;

  display();
}

void CurrentConditionsDisplay::display() const
{
  std::cout << "Current conditions: " << temperature << "ºF and " << humidity << "% humidity" << std::endl;
}
