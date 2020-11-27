#ifndef __DISPLAY_ELEMENT_HPP__
#define __DISPLAY_ELEMENT_HPP__

class DisplayElement
{
public:
  virtual ~DisplayElement() = default;
  virtual void display() const = 0;
};

#endif
