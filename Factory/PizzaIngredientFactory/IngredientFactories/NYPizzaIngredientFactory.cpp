#include "NYPizzaIngredientFactory.hpp"

Dough* NYPizzaIngredientFactory::createDough()
{
  return new ThinCrustDough();
}

Sauce* NYPizzaIngredientFactory::createSauce()
{
  return new MarinaraSauce();
}

Cheese* NYPizzaIngredientFactory::createCheese()
{
  return new ReggianoCheese();
}

Pepperoni* NYPizzaIngredientFactory::createPepperoni()
{
  return new SlicedPepperoni();
}

Clams* NYPizzaIngredientFactory::createClam()
{
  return new FreshClams();
}

Veggies NYPizzaIngredientFactory::createVeggies()
{
  Veggies veggies;
  veggies.push_back(new Garlic());
  veggies.push_back(new Onion());
  veggies.push_back(new Mushroom());
  veggies.push_back(new GreenPepper());

  return veggies;
}
