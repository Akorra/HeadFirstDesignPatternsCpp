#include <iostream>
#include <string>

#include "Ducks/MallardDuck.hpp"
#include "Turkeys/WildTurkey.hpp"

#include "TurkeyAdapter.hpp"

using namespace std;

void testDuck(Duck* duck)
{
    duck->quack();
    duck->fly();
}

int main()
{
  MallardDuck*  duck   = new MallardDuck();
  WildTurkey*   turkey = new WildTurkey();

  Duck* turkeyAdapter  = new TurkeyAdapter(turkey);

  std::cout << "The wild turkey says..." << std::endl;
  turkey->gobble();
  turkey->fly();

  std::cout << "The mallard duck says..." << std::endl;
  testDuck(duck);

  std::cout << "The wild turkey duck says..." << std::endl;
  testDuck(turkeyAdapter);

  return 0;
}
