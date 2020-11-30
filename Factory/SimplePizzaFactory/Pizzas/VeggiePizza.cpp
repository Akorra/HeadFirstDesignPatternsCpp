#include "VeggiePizza.hpp"

VeggiePizza::VeggiePizza()
{
    name  = "Veggie Pizza";
    dough = "Regular crust";
    sauce = "Marinara Pizza sauce";

    toppings.push_back("Shredded mozzarella");
    toppings.push_back("Grated Parmesan");
    toppings.push_back("Diced onion");
    toppings.push_back("Sliced mushrooms");
    toppings.push_back("Sliced red pepper");
    toppings.push_back("No olives because they're gross");
}
