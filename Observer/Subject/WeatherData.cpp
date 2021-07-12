#include "WeatherData.hpp"

void WeatherData::registerObserver(Observer* o)
{
  observers.push_back(o);
}

void WeatherData::removeObserver(Observer* o)
{
  for(auto it = observers.begin(); it < observers.end(); it++)
  {
    if(*it == o)
      observers.erase(it);
  }
}

void WeatherData::notifyObservers()
{
  for(auto it = observers.begin(); it < observers.end(); it++)
      (*it)->update(temperature, humidity, pressure);
}

void WeatherData::measurementsChanged()
{
  notifyObservers();
}

void WeatherData::setMeasurements(float t, float h, float p)
{
  temperature = t;
  pressure    = p;
  humidity    = h;

  measurementsChanged();
}
