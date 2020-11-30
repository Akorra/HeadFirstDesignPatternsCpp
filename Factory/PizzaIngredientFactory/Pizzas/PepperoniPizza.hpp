#ifndef __PEPPERONI_PIZZA_HPP__
#define __PEPPERONI_PIZZA_HPP__

#include "Pizza.hpp"
#include "../IngredientFactories/PizzaIngredientFactory.hpp"

class PepperoniPizza : public Pizza
{
private:
  PizzaIngredientFactory* ingredientFactory;
public:
  PepperoniPizza(PizzaIngredientFactory* ingredientFactory);

  void prepare();
};

#endif
