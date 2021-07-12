#include "CaffeineBeverage.hpp"

#include <iostream>

int main()
{
  Beverages::Tea tea;
  Beverages::Coffee coffee;

  std::cout << "Preparing Coffee Recipee:" << std::endl;
  coffee.prepareRecipee();
  std::cout << "-------------------------" << std::endl << std::endl;

  std::cout << "Preparing Tea Recipee:" << std::endl;
  tea.prepareRecipee();
  std::cout << "-------------------------" << std::endl;

  return 0;
}
