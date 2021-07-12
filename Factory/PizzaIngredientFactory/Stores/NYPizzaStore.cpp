#include "NYPizzaStore.hpp"

#include "../Pizzas/CheesePizza.hpp"
#include "../Pizzas/PepperoniPizza.hpp"
#include "../IngredientFactories/NYPizzaIngredientFactory.hpp"

Pizza* NYPizzaStore::makePizza(std::string type)
{
  Pizza* pizza = nullptr;

  PizzaIngredientFactory* factory = new NYPizzaIngredientFactory();

  if(type == "cheese")
  {
    pizza = new CheesePizza(factory);
    pizza->setName("New York Style Cheese Pizza");
  }
  else if(type == "pepperoni")
  {
    pizza = new PepperoniPizza(factory);
    pizza->setName("New York Style Pepperoni Pizza");
  }

  return pizza;
}
