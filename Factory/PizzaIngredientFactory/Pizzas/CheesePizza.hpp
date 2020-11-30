#ifndef __CHEESE_PIZZA_HPP__
#define __CHEESE_PIZZA_HPP__

#include "Pizza.hpp"
#include "../IngredientFactories/PizzaIngredientFactory.hpp"

class CheesePizza : public Pizza
{
private:
  PizzaIngredientFactory* ingredientFactory;
public:
  CheesePizza(PizzaIngredientFactory* ingredientFactory);

  virtual void prepare() override;
};

#endif
