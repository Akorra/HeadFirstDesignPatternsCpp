#include <iostream>

#include "Stores/NYPizzaStore.hpp"

using namespace std;

int main()
{
  auto nyStore = new NYPizzaStore();
  auto Cheese = nyStore->orderPizza("cheese");
  std::cout << *Cheese << std::endl;
  auto Pepperoni = nyStore->orderPizza("pepperoni");
  std::cout << *Pepperoni << std::endl;

  return 0;
}
