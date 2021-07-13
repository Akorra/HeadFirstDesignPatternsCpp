#ifndef __MENU_HPP__
#define __MENU_HPP__

#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <memory>

#define DINER_MAX_ITEMS 6

class MenuItem
{
private:
  std::string name;
  std::string description;
  bool        vegetarian;
  double      price;

public:
  MenuItem(const std::string& name, const std::string& description, bool vegetarian, double price) :
    name(name), description(description), vegetarian(vegetarian), price(price) {}

  MenuItem() : name("EMPTY"), description(""), vegetarian(false), price(0.0) {}

  std::string getName()         const;
  std::string getDescription()  const;
  double      getPrice()        const;
  bool        isVegetarian()    const;
};

// ---------------------------------------

class Iterator
{
public:
  virtual ~Iterator() {}

  virtual bool     hasNext() const = 0;
  virtual MenuItem next()          = 0;
  virtual void     remove()        = 0;
};

// ---------------------------------------

class Menu
{
private:
  std::string name;

public:
  virtual ~Menu() {}

  virtual std::unique_ptr<Iterator> createIterator() const = 0;

  void SetName(const std::string& m_name) { name = m_name; }
  std::string GetName() const { return name; }
};

// ---------------------------------------

class DinerMenuIterator : public Iterator
{
private:
  int position = 0;
  const std::array<MenuItem, DINER_MAX_ITEMS>& items;

public:
  DinerMenuIterator(const std::array<MenuItem, DINER_MAX_ITEMS>& items) : items(items) {}

  bool      hasNext() const override;
  MenuItem  next()          override;
  void      remove()        override;
};

// ---------------------------------------

class DinerMenu : public Menu
{
private:
  int numberOfItems = 0;
  std::array<MenuItem, DINER_MAX_ITEMS> menuItems;

public:
  DinerMenu();

  void addItem(const std::string& m_name, const std::string& m_description, bool m_vegetarian, double m_price);
  std::unique_ptr<Iterator> createIterator() const override;
};

// ---------------------------------------

class PancakeHouseMenuIterator : public Iterator
{
private:
  int position = 0;
  const std::vector<MenuItem>& items;

public:
  PancakeHouseMenuIterator(const std::vector<MenuItem>& items) : items(items) { }

  bool     hasNext() const override;
  MenuItem next()          override;
  void     remove()        override;
};

// ---------------------------------------

class PancakeHouseMenu : public Menu
{
private:
  std::vector<MenuItem> menuItems;

public:
  PancakeHouseMenu();

  void addItem(const std::string& m_name, const std::string& m_description, bool m_vegetarian, double m_price);
  std::unique_ptr<Iterator> createIterator() const override;
};

// ---------------------------------------


#endif
