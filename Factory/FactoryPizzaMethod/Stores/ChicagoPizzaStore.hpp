#ifndef __CHICAGO_PIZZA_STORE_HPP__
#define __CHICAGO_PIZZA_STORE_HPP__

#include "PizzaStore.hpp"

class ChicagoPizzaStore: public PizzaStore
{
public:
  Pizza* makePizza(std::string type);
};

#endif
