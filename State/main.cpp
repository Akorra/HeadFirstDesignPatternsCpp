#include "Gumball.hpp"

int main()
{
    GumballMachine gm(5);

    std::cout << "State: " << gm << std::endl;

    gm.insertQuarter();
    gm.turnCrank();

    std::cout << "\nState: " << gm << std::endl;

    gm.insertQuarter();
    gm.ejectQuarter();
    gm.turnCrank();

    std::cout << "\nState: " << gm << std::endl;

    gm.insertQuarter();
    gm.turnCrank();
    gm.insertQuarter();
    gm.turnCrank();
    gm.ejectQuarter();

    std::cout << "\nState: " << gm << std::endl;

    gm.insertQuarter();
    gm.insertQuarter();
    gm.turnCrank();
    gm.insertQuarter();
    gm.turnCrank();
    gm.insertQuarter();
    gm.turnCrank();

    std::cout << "\nState: " << gm << std::endl;

}
