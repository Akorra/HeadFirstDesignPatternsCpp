#include "Gumball.hpp"

int main() {
    auto gumballMachine = GumballMachine::create(5);

    std::cout << *gumballMachine << std::endl;

    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();

    std::cout << *gumballMachine << std::endl;

    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();

    std::cout << *gumballMachine << std::endl;
}
