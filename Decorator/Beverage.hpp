#ifndef __BEVERAGE_HPP__
#define __BEVERAGE_HPP__

#include <string>

class Beverage
{
public:
  virtual ~Beverage() = default;

  virtual double      cost()            const = 0;
  virtual std::string getDescription()  const = 0;
};

#endif
