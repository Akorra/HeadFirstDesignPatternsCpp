#ifndef __PIZZA_HPP__
#define __PIZZA_HPP__

#include <string>
#include <vector>
#include <iostream>

class Pizza
{
public:
  std::string name;
  std::string dough;
  std::string sauce;
  std::vector<std::string> toppings;

public:
  virtual ~Pizza() = default;

  virtual void prepare()  const;
  virtual void bake()     const;
  virtual void cut()      const;
  virtual void box()      const;

  const std::string& getName() const;
};

std::ostream& operator<<(std::ostream& os, const Pizza& pizza);

#endif
