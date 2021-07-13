#include "Waitress.hpp"

int main()
{
  auto pancakeHouseMenu = std::make_shared<PancakeHouseMenu>();
  auto dinerMenu        = std::make_shared<DinerMenu>();
  auto cafeMenu         = std::make_shared<CafeMenu>();

  std::vector<std::shared_ptr<Menu>> menuList {pancakeHouseMenu, dinerMenu, cafeMenu};

  Waitress waitress(menuList);

  waitress.printMenu();
}
