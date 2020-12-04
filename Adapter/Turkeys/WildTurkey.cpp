#include "WildTurkey.hpp"

#include <iostream>

void WildTurkey::fly()  const
{
  std::cout << "I'm Flying! But for a a shorter distance..." << std::endl;
}

void WildTurkey::gobble() const
{
  std::cout << "I'm not Quacking!" << std::endl;
}
