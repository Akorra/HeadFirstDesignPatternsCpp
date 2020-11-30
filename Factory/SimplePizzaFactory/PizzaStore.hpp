#ifndef __PIZZA_STORE_HPP__
#define __PIZZA_STORE_HPP__

#include "SimplePizzaFactory.hpp"
#include "Pizzas/Pizza.hpp"

class PizzaStore
{
private:
  SimplePizzaFactory factory;

public:
  PizzaStore(SimplePizzaFactory factory);

  Pizza* orderPizza(std::string type);
};

#endif
