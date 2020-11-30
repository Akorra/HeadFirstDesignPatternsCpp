#include "NYPizzaIngredientFactory.hpp"

Dough* createDough()
{
  return new ThinCrustDough();
}

Sauce* createSauce()
{
  return new MarinaraSauce();
}

Cheese* createCheese()
{
  return new ReggianoCheese();
}

Pepperoni* createPepperoni()
{
  return new SlicedPepperoni();
}

Clams* createClam()
{
  return new FreshClams();
}

Veggies createVeggies()
{
  return { new Garlic(), new Onion(), new Mushroom(), new GreenPepper() };

}
