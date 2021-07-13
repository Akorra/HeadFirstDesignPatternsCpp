#include "Waitress.hpp"

void Waitress::printMenu()
{
  std::cout << "MENU\n----" << std::endl;
  for(auto menu : menus)
  {
    std::cout << "  " << menu->GetName() << std::endl;
    printMenu(menu->createIterator());
  }
}

void Waitress::printMenu(const std::unique_ptr<Iterator>& it)
{
  while (it->hasNext())
  {
    MenuItem menuItem = it->next();
    std::cout << "    " << menuItem.getName() << ", " << menuItem.getPrice() << " -- "
              << menuItem.getDescription() << std::endl;
  }
}
