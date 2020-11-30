#include "CheesePizza.hpp"

CheesePizza::CheesePizza(PizzaIngredientFactory* ingredientFactory)
{
  this->setName("Cheese Pizza");
  this->ingredientFactory = ingredientFactory;
}

void CheesePizza::prepare()
{
  std::cout << "Preparing " + name << std::endl;
  dough = ingredientFactory.createDough();
  sauce = ingredientFactory.createSauce();
  cheese= ingredientFactory.createCheese();
}
