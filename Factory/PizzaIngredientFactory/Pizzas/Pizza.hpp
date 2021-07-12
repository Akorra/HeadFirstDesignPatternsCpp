#ifndef __PIZZA_HPP__
#define __PIZZA_HPP__

#include <string>
#include <vector>
#include <iostream>

#include "../IngredientFactories/PizzaIngredientFactory.hpp"

class Pizza
{
public:
  std::string name;

  Dough*      dough;
  Sauce*      sauce;
  Cheese*     cheese;
  Pepperoni*  pepperoni;
  Clams*      clams;
  Veggies     veggies;

public:
  Pizza();
  virtual ~Pizza() = default;

  virtual void prepare()  = 0;

  virtual void bake()     const;
  virtual void cut()      const;
  virtual void box()      const;

  void  setName(std::string n);

  const std::string& getName() const;
};

std::ostream& operator<<(std::ostream& os, const Pizza& pizza);

#endif
