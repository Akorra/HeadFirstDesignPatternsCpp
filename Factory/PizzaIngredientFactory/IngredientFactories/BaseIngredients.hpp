#ifndef __BASE_INGREDIENTS_HPP__
#define __BASE_INGREDIENTS_HPP__

#include <vector>
#include <string>

class Ingredient
{
public:
    std::string name;
};

class Dough : public Ingredient
{
public:
  Dough() : name("dough");
};

class Sauce : public Ingredient
{
public:
  Sauce() : name("sauce");
};

class Cheese : public Ingredient
{
public:
  Cheese() : name("cheese");
};

class Veggie : public Ingredient
{
public:
  Veggie() : name("veggie");
};

class Pepperoni : public Ingredient
{
public:
  Pepperoni() : name("pepperoni");
};

class Clams : public Ingredient
{
public:
  Clams() : name("clams");
};

typedef std::vector<Veggie*> Veggies;

#endif
