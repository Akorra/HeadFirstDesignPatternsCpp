#include "Pizza.hpp"

const std::string& Pizza::getName() const
{
    return this->name;
}

void Pizza::prepare() const
{
    std::cout << "Preparing " << getName() << std::endl;
}
void Pizza::bake() const
{
    std::cout << "Baking " << getName() << std::endl;
}

void Pizza::cut() const
{
    std::cout << "Cutting " << getName() << std::endl;
}
void Pizza::box() const
{
    std::cout << "Boxing " << getName() << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Pizza& pizza)
{
    std::string str;

    str = "\n---- " + pizza.getName() + "----\n";
    str.append(pizza.dough + "\n");
    str.append(pizza.sauce + "\n");

    for (auto& topping : pizza.toppings)
    {
        str.append(topping + "\n");
    }

    str.append("\n");

    return os << str;
}
