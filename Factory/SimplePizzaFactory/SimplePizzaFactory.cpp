#include "SimplePizzaFactory.hpp"

#include "Pizzas/CheesePizza.hpp"
#include "Pizzas/PepperoniPizza.hpp"
#include "Pizzas/ClamPizza.hpp"
#include "Pizzas/VeggiePizza.hpp"

Pizza* SimplePizzaFactory::createPizza(const std::string& type)
{
  Pizza* pizza = nullptr;

  if(type == "cheese")
    pizza = new CheesePizza();
  else if(type == "pepperoni")
    pizza = new PepperoniPizza();
  else if(type == "clam")
    pizza = new ClamPizza();
  else if(type == "veggie")
    pizza = new VeggiePizza();

  return pizza;
}
