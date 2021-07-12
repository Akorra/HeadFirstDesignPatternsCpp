#ifndef __COFFEE_HPP__
#define __COFFEE_HPP__

#include "CaffeineBeverage.hpp"

#include <string>

class Coffee : public CaffeineBeverage
{
public:
  void brew()          const override { std::cout << "Dripping Coffee through filter..." << std::endl; }
  void addCondiments() const override { std::cout << "Adding sugar and milk..." << std::endl; }

  bool customerWantsCondiments() const override {
    std::string condiments = getUserInput();
    return (std::tolower(condiments[0]) == 'y');
  }

private:
  std::string getUserInput() const {
    std::string answer = "";

    std::cout << "Would you like milk and sugar with your coffee (y/n)? " ;
    getline(std::cin, answer);
    if(answer == "")
      return "n";

    return answer;
  }
};

#endif
