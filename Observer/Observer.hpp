#ifndef __OBSERVER_HPP__
#define __OBSERVER_HPP__

class Observer
{
public:
  virtual ~Observer() = default;
  virtual void update(float temp, float humidity, float pressure) = 0;
};

#endif
