#include "StatisticsDisplay.hpp"

#include <iostream>

StatisticsDisplay::StatisticsDisplay(Subject& inWeatherData) : weatherData(inWeatherData), maxTemp(0.0f), minTemp(300.0f), sumTemp(0.0f), numReadings(0)
{
  token = weatherData.registerObserver([this](float temp, float hum, float pres) { update(temp, hum, pres); });
}

StatisticsDisplay::~StatisticsDisplay()
{
  weatherData.removeObserver(token);
}

void StatisticsDisplay::update(float t, float h, float p)
{
  sumTemp +=  t;
  numReadings++;

  if(maxTemp < t)  maxTemp = t;
  if(minTemp > t)  minTemp = t;

  display();
}

void StatisticsDisplay::display() const
{
  std::cout << "Temperature [ºF]: Avg " << (sumTemp/numReadings) << " / Max " << maxTemp << " / Min " << minTemp << std::endl;
}
