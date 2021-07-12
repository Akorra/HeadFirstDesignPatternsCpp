#include "NYPizzaStore.hpp"

#include "../Pizzas/NY/NYStyleCheesePizza.hpp"
#include "../Pizzas/NY/NYStylePepperoniPizza.hpp"

Pizza* NYPizzaStore::makePizza(std::string type)
{
  Pizza* pizza = nullptr;

  if(type == "cheese")
    pizza = new NYStyleCheesePizza();
  else if(type == "pepperoni")
    pizza = new NYStylePepperoniPizza();

  return pizza;
}
