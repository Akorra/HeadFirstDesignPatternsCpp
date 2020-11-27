#include "ForecastDisplay.hpp"

#include <iostream>

ForecastDisplay::ForecastDisplay(Subject& inWeatherData) : weatherData(inWeatherData), currPressure(29.92f), prevPressure(0.0f)
{
  token = weatherData.registerObserver([this](float temp, float hum, float pres) { update(temp, hum, pres); });
}

ForecastDisplay::~ForecastDisplay()
{
  weatherData.removeObserver(token);
}

void ForecastDisplay::update(float t, float h, float p)
{
  prevPressure = currPressure;
  currPressure = p;

  display();
}

void ForecastDisplay::display() const
{
  std::cout << "Forecast: ";
  if(currPressure > prevPressure)
    std::cout << "Improving Weather on the way!" << std::endl;
  else if(currPressure < prevPressure)
    std::cout << "Watch out for cooler, rainy weather..." << std::endl;
  else
    std::cout << "Same conditions to follow..." << std::endl;
}
