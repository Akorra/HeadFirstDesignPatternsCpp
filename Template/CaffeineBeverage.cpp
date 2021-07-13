#include "CaffeineBeverage.hpp"

#include <iostream>
#include <cctype>

namespace Beverages {
  void CaffeineBeverage::prepareRecipee() const
  {
    boilWater();
    brew();
    pourInCup();
    if(customerWantsCondiments())
      addCondiments();
  }

  void CaffeineBeverage::boilWater() const { std::cout << "Boiling water..." << std::endl; }
  void CaffeineBeverage::pourInCup() const { std::cout << "Pouring into cup..." << std::endl; }
  bool CaffeineBeverage::customerWantsCondiments() const { return true; }

  //COFFEE Beverage
  void Coffee::brew()            const { std::cout << "Dripping Coffee through filter..." << std::endl; }
  void Coffee::addCondiments()   const { std::cout << "Adding sugar and milk..." << std::endl; }

  bool Coffee::customerWantsCondiments() const {
    std::string condiments = getUserInput();
    return (std::tolower(condiments[0]) == 'y');
  }

  std::string Coffee::getUserInput() const {
    std::string answer = "";

    std::cout << "Would you like milk and sugar with your coffee (y/n)? " ;
    getline(std::cin, answer);
    if(answer == "")
      return "n";

    return answer;
  }

  //TEA Beverage
  void Tea::brew()          const { std::cout << "Steeping the tea..." << std::endl; }
  void Tea::addCondiments() const { std::cout << "Adding Lemon..." << std::endl; }

}
