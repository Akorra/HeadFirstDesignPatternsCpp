#ifndef __PIZZA_STORE_HPP__
#define __PIZZA_STORE_HPP__

#include "../Pizzas/Pizza.hpp"

class PizzaStore
{
public:
  Pizza* orderPizza(std::string type);
  virtual Pizza* makePizza(std::string type) = 0;
};

#endif
