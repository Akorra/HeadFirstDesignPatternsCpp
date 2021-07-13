#include "Waitress.hpp"

int main()
{
  auto pancakeHouseMenu = std::make_shared<PancakeHouseMenu>();
  auto dinerMenu        = std::make_shared<DinerMenu>();

  std::vector<std::shared_ptr<Menu>> menuList {pancakeHouseMenu, dinerMenu};

  Waitress waitress(menuList);

  waitress.printMenu();
}
