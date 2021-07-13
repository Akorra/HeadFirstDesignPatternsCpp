#ifndef __WAITRESS_HPP__
#define __WAITRESS_HPP__

#include "Menu.hpp"

class Waitress
{
private:
  const std::vector<std::shared_ptr<Menu>>& menus;

public:
  Waitress(const std::vector<std::shared_ptr<Menu>>& menus) : menus(menus) {}

  void printMenu();
  void printMenu(const std::unique_ptr<Iterator>& it);
};

#endif
