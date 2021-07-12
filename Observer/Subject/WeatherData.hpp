#ifndef __WHEATHERDATA_HPP__
#define __WHEATHERDATA_HPP__

#include "../Subject.hpp"
#include "../Observer.hpp"

#include <vector>

class WeatherData: public Subject
{
private:
  std::vector<Observer*> observers;

  float temperature;
  float humidity;
  float pressure;

public:
  WeatherData() = default;
  virtual ~WeatherData() = default;

  virtual void registerObserver(Observer* o)  override;
  virtual void removeObserver(Observer* o)    override;
  virtual void notifyObservers()              override;

  void measurementsChanged();
  void setMeasurements(float t, float h, float p);

  float getTemperature()  { return temperature; }
  float getHumidity()     { return humidity;    }
  float getPressure()     { return pressure;    }
};

#endif
