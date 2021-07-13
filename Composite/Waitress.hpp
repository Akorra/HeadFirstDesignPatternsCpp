#ifndef WAITRESS_H
#define WAITRESS_H

#include "Menu.hpp"

class Waitress {
public:
    Waitress(const std::shared_ptr<MenuComponent>& allMenus)
        : allMenus(allMenus) {}

    void printMenu()
    {
        allMenus->print();
    }

private:
    std::shared_ptr<MenuComponent> allMenus;
};

#endif
