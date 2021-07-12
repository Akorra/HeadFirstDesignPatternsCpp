#ifndef __SUBJECT_HPP__
#define __SUBJECT_HPP__

class Observer;

class Subject
{
public:
  virtual ~Subject() = default;

  virtual void registerObserver(Observer* o)  = 0;
  virtual void removeObserver(Observer* o)    = 0;
  virtual void notifyObservers()              = 0;
};

#endif
