#ifndef __SIMPLE_PIZZA_FACTORY_HPP__
#define __SIMPLE_PIZZA_FACTORY_HPP__

#include "Pizzas/Pizza.hpp"

class SimplePizzaFactory
{
public:
  Pizza* createPizza(const std::string& type);
};

#endif
