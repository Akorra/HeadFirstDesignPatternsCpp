#include <iostream>

#include "Stores/NYPizzaStore.hpp"

using namespace std;

int main()
{
  auto nyStore = new NYPizzaStore();

  auto NYCheese = nyStore->orderPizza("cheese");
  auto ChicagoCheese = chicagoStore->orderPizza("cheese");

  auto NYPepperoni = nyStore->orderPizza("pepperoni");
  auto ChicagoPepperoni = chicagoStore->orderPizza("pepperoni");

  return 0;
}
