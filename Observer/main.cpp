#include <iostream>
#include <string>

#include "Subject/WeatherData.hpp"
#include "Observers/CurrentConditionsDisplay.hpp"
#include "Observers/ForecastDisplay.hpp"
#include "Observers/StatisticsDisplay.hpp"

using namespace std;

int main()
{
  WeatherData weatherData;

  CurrentConditionsDisplay  currentDisplay(weatherData);
  ForecastDisplay           forecastDisplay(weatherData);
  StatisticsDisplay         statisticsDisplay(weatherData);

  weatherData.setMeasurements(80, 65, 30.4f);
  weatherData.setMeasurements(82, 70, 29.2f);
  weatherData.setMeasurements(78, 90, 29.2f);

  return 0;
}
