#ifndef __NY_PIZZA_INGREDIENT_FACTORY_HPP__
#define __NY_PIZZA_INGREDIENT_FACTORY_HPP__

#include "PizzaIngredientFactory.hpp"

class ThinCrustDough : public Dough
{
public:
  ThinCrustDough() { name = "thin crust " + name; }
};

class MarinaraSauce : public Sauce
{
public:
  MarinaraSauce() { name = "marinara " + name; }
};

class ReggianoCheese : public Cheese
{
public:
  ReggianoCheese() { name = "reggiano " + name; }
};

class SlicedPepperoni : public Pepperoni
{
public:
  SlicedPepperoni() { name = "sliced " + name; }
};

class FreshClams : public Clams
{
public:
  FreshClams() { name = "fresh " + name; }
};

class Garlic : public Veggie
{
public:
  Garlic() { name = "garlic" }
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

class NYPizzaIngredientFactory : pulic PizzaIngredientFactory
{
  public:
    virtual Dough*      createDough()     override;
    virtual Sauce*      createSauce()     override;
    virtual Cheese*     createCheese()    override;
    virtual Pepperoni*  createPepperoni() override;
    virtual Clams*      createClam()      override;

    virtual Veggies createVeggies() override;
};

#endif
