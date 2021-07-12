#include "WeatherData.hpp"

ListenerToken WeatherData::tokenId = 1;

ListenerToken WeatherData::registerObserver(ListenerCallback o)
{
  ListenerToken tok = ++ tokenId;
  observerMap.insert(std::make_pair(tok, o));
  return tok;
}

void WeatherData::removeObserver(ListenerToken tok)
{
  observerMap.erase(tok);
}

void WeatherData::notifyObservers()
{
  for(auto& observer : observerMap)
      observer.second(temperature, humidity, pressure);
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
