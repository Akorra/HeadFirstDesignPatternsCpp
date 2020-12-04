#include "MallardDuck.hpp"

#include <iostream>

void MallardDuck::fly() const
{
    std::cout << "I'm Flying!" << std::endl;
}

void MallardDuck::quack()  const
{
  std::cout << "I'm Quacking!" << std::endl;
}
