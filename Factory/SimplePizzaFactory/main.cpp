#include <iostream>

#include "PizzaStore.hpp"

using namespace std;

int main()
{
  unsigned int order_number = 0;

  SimplePizzaFactory factory;

  PizzaStore pizzaStore(factory);

  auto Cpizza = pizzaStore.orderPizza("cheese");
  std::cout << "Order #" << order_number << " " + Cpizza->getName() << std::endl;
  std::cout << *Cpizza;

  order_number++;

  auto Vpizza = pizzaStore.orderPizza("veggie");
  std::cout << "Order #" << order_number << " " + Vpizza->getName() << std::endl;
  std::cout << *Vpizza;

  order_number++;

  return 0;
}
