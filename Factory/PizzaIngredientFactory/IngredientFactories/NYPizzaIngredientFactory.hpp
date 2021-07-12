#ifndef __NY_PIZZA_INGREDIENT_FACTORY_HPP__
#define __NY_PIZZA_INGREDIENT_FACTORY_HPP__

#include "PizzaIngredientFactory.hpp"

class ThinCrustDough : public Dough
{
public:
  ThinCrustDough() { name = "thin crust dough"; }
};

class MarinaraSauce : public Sauce
{
public:
  MarinaraSauce() { name = "marinara sauce"; }
};

class ReggianoCheese : public Cheese
{
public:
  ReggianoCheese() { name = "reggiano cheese"; }
};

class SlicedPepperoni : public Pepperoni
{
public:
  SlicedPepperoni() { name = "sliced pepperoni"; }
};

class FreshClams : public Clams
{
public:
  FreshClams() { name = "fresh clams"; }
};

class Garlic : public Veggie
{
public:
  Garlic() { name = "garlic"; }
};

class Onion : public Veggie
{
public:
  Onion() { name = "onion"; }
};

class Mushroom : public Veggie
{
public:
  Mushroom() { name = "mushroom"; }
};

class GreenPepper : public Veggie
{
public:
  GreenPepper() { name = "green pepper"; }
};

class NYPizzaIngredientFactory : public PizzaIngredientFactory
{
  public:    
    Dough*      createDough();
    Sauce*      createSauce();
    Cheese*     createCheese();
    Pepperoni*  createPepperoni();
    Clams*      createClam();

    Veggies createVeggies();
};

#endif
