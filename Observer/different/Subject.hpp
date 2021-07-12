#ifndef __SUBJECT_HPP__
#define __SUBJECT_HPP__

#include <functional>

typedef size_t ListenerToken;
typedef std::function<void(float, float, float)> ListenerCallback;

class Subject
{
public:
  virtual ~Subject() = default;

  virtual ListenerToken registerObserver(ListenerCallback o)  = 0;
  virtual void removeObserver(ListenerToken tok)              = 0;
  virtual void notifyObservers()                              = 0;
};

#endif
