#include "ChicagoPizzaStore.hpp"

#include "../Pizzas/Chicago/ChicagoStyleCheesePizza.hpp"
#include "../Pizzas/Chicago/ChicagoStylePepperoniPizza.hpp"
#include "../Pizzas/Chicago/ChicagoStyleVeggiePizza.hpp"

Pizza* ChicagoPizzaStore::makePizza(std::string type)
{
  Pizza* pizza = nullptr;

  if(type == "cheese")
    pizza = new ChicagoStyleCheesePizza();
  else if(type == "pepperoni")
    pizza = new ChicagoStylePepperoniPizza();
  else if(type == "veggie")
    pizza = new ChicagoStyleVeggiePizza();

  return pizza;
}
