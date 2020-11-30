#ifndef __NY_PIZZA_STORE_HPP__
#define __NY_PIZZA_STORE_HPP__

#include "PizzaStore.hpp"

class NYPizzaStore: public PizzaStore
{
public:
  Pizza* makePizza(std::string type);
};

#endif
