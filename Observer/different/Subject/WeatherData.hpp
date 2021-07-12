#ifndef __WHEATHERDATA_HPP__
#define __WHEATHERDATA_HPP__

#include "../Subject.hpp"
#include "../Observer.hpp"

#include <vector>
#include <unordered_map>

class WeatherData: public Subject
{
private:
  std::unordered_map<ListenerToken, ListenerCallback> observerMap;

  float temperature;
  float humidity;
  float pressure;

  static ListenerToken tokenId;

public:
  WeatherData() = default;
  virtual ~WeatherData() = default;

  virtual ListenerToken registerObserver(ListenerCallback o)  override;
  virtual void removeObserver(ListenerToken tok)              override;
  virtual void notifyObservers()                              override;

  void measurementsChanged();
  void setMeasurements(float t, float h, float p);

  float getTemperature()  { return temperature; }
  float getHumidity()     { return humidity;    }
  float getPressure()     { return pressure;    }
};

#endif
