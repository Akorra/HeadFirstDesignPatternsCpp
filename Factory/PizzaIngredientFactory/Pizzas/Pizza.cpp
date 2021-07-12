#include "Pizza.hpp"

Pizza::Pizza()
{
  name = "pizza";

  dough = nullptr;
  sauce = nullptr;
  cheese = nullptr;
  pepperoni = nullptr;
  clams = nullptr;
}

void  Pizza::setName(std::string n)
{
    name = n;
}

const std::string& Pizza::getName() const
{
    return name;
}

void Pizza::bake() const
{
    std::cout << "Baking for 25 min at 350 degrees..." << std::endl;
}

void Pizza::cut() const
{
    std::cout << "Cut the pizza into diagonal slices..." << getName() << std::endl;
}
void Pizza::box() const
{
    std::cout << "Boxing in official PizzaStore boxes..." << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Pizza& pizza)
{
    std::string str;

    str = "\n---- " + pizza.getName() + "----\n";
    if(pizza.dough)
      str.append(" - " + pizza.dough->name + "\n");
    if(pizza.sauce)
      str.append(" - " + pizza.sauce->name + "\n");
    if(pizza.cheese)
      str.append(" - " + pizza.cheese->name + "\n");
    if(pizza.pepperoni)
      str.append(" - " + pizza.pepperoni->name + "\n");

    if(pizza.veggies.size() > 0)
    {
      str.append(" - veggies:\n");
      for (auto& veggie : pizza.veggies)
      {
          str.append("   - " + veggie->name + "\n");
      }
    }

    str.append("\n");

    return os << str;
}
