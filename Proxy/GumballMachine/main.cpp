#include "Gumball.hpp"

int main() {
    auto gumballMachine = GumballMachine::create("Austin", 112);
    auto gumballMonitor = GumballMonitor(*gumballMachine);

    gumballMonitor.report();
}
