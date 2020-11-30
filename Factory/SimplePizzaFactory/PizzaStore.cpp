#include "PizzaStore.hpp"

PizzaStore::PizzaStore(SimplePizzaFactory factory)
{
  this->factory = factory;
}

Pizza* PizzaStore::orderPizza(std::string type)
{
  Pizza* pizza = nullptr;

  pizza = factory.createPizza(type);

  if(pizza)
  {
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
