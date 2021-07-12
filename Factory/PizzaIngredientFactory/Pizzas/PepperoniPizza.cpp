#include "PepperoniPizza.hpp"

PepperoniPizza::PepperoniPizza(PizzaIngredientFactory* ingredientFactory)
{
  this->setName("Pepperoni Pizza");
  this->ingredientFactory = ingredientFactory;
}

void PepperoniPizza::prepare()
{
  std::cout << "Preparing " + name << std::endl;
  dough     = ingredientFactory->createDough();
  sauce     = ingredientFactory->createSauce();
  cheese    = ingredientFactory->createCheese();
  pepperoni = ingredientFactory->createPepperoni();
  veggies   = ingredientFactory->createVeggies();
}
