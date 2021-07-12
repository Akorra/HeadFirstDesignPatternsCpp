#include "PizzaStore.hpp"

Pizza* PizzaStore::orderPizza(std::string type)
{
  Pizza* pizza = nullptr;

  pizza = makePizza(type);

  if(pizza)
  {
    std::cout << "\n--- Making a " + pizza->getName() + " ---" << std::endl;
    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();
  }
  else
  {
    std::cout << "Please select a valid pizza type..." << std::endl;
  }

  return pizza;
}
