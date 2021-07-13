#include "Menu.hpp"

std::string MenuItem::getName() const { return name; }

std::string MenuItem::getDescription() const { return description; }

double MenuItem::getPrice() const { return price; }

bool MenuItem::isVegetarian() const { return vegetarian; }

// ---------------------------------------

bool DinerMenuIterator::hasNext() const
{
  return (position < items.max_size() && items[position].getName() !=  "EMPTY");
}

MenuItem  DinerMenuIterator::next()
{
  MenuItem menuitem = items[position];
  position++;

  return menuitem;
}

// ---------------------------------------

DinerMenu::DinerMenu()
{
  SetName("Diner Menu");

  addItem("Vegetarian BLT",
          "(Fakin') Bacon with lettuce & tomato on whole wheat",
          true,
          2.99);

  addItem("BLT",
          "Bacon with lettuce &tomato on whole wheat",
          false,
          2.99);

  addItem("Soup of the day",
          "Soup of the day, with a side of potato salad",
          false,
          3.29);

  addItem("Hotdog",
          "A hot dog with sauerkraut, relish, onions, topped with cheese",
          false,
          3.05);
}

void DinerMenu::addItem(const std::string& m_name, const std::string& m_description, bool m_vegetarian, double m_price)
{
    MenuItem menuItem(m_name, m_description, m_vegetarian, m_price);

    if(numberOfItems >= DINER_MAX_ITEMS) {
      std::cerr << "Sorry, menu is full! Can't add item to menu..." << std::endl;
    } else {
      menuItems[numberOfItems] = std::move(menuItem);
      numberOfItems++;
    }
}

std::unique_ptr<Iterator> DinerMenu::createIterator() const
{
  return std::make_unique<DinerMenuIterator>(menuItems);
}

// ---------------------------------------

bool PancakeHouseMenuIterator::hasNext() const
{
  return (position < items.size());
}

MenuItem PancakeHouseMenuIterator::next()
{
  MenuItem menuitem = items.at(position);
  position++;

  return menuitem;
}

// ---------------------------------------

PancakeHouseMenu::PancakeHouseMenu()
{
  SetName("Pancake House Menu");

  addItem("K&B's Pancake Breakfast",
          "Pancake with scrambled eggs, and toast",
          true,
          2.99);

  addItem("Regular Pancake Breakfast",
          "Pancakes with fried eggs, sausage",
          false,
          2.99);

  addItem("Blueberry Pancakes",
          "Pancakes made with fresh blueberries",
          true,
          3.49);

  addItem("Waffles",
          "Waffles, with your choice of blueberries or strawberries",
          true,
          3.59);
}

void PancakeHouseMenu::addItem(const std::string& m_name, const std::string& m_description, bool m_vegetarian, double m_price)
{
    menuItems.emplace_back(m_name, m_description, m_vegetarian, m_price);
}

std::unique_ptr<Iterator> PancakeHouseMenu::createIterator() const
{
    auto phi = std::make_unique<PancakeHouseMenuIterator>(menuItems);
    return phi;
}

// ---------------------------------------
