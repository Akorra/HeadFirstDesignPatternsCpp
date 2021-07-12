#ifndef __TURKEY_HPP__
#define __TURKEY_HPP__

class Turkey
{
public:
  virtual ~Turkey() = default;

  virtual void fly()    const = 0;
  virtual void gobble() const = 0;
};

#endif
