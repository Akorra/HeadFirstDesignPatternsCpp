#ifndef __MENU_HPP__
#define __MENU_HPP__

#include <exception>
#include <memory>
#include <stack>
#include <string>
#include <utility>
#include <vector>

class MenuComponent
{
public:
  virtual ~MenuComponent() {}

  virtual void                           add(const std::shared_ptr<MenuComponent>& menuComponent)          { throw std::runtime_error("add() is not supported"); }
  virtual void                           remove(const std::shared_ptr<MenuComponent>& menuComponent)       { throw std::runtime_error("remove() is not supported"); }
  virtual std::shared_ptr<MenuComponent> getChild(int i)                                             const { throw std::runtime_error("getChild() is not supported"); }
  virtual std::string                    getName()                                                   const { throw std::runtime_error("getName() is not supported"); }
  virtual std::string                    getDescription()                                            const { throw std::runtime_error("getDescription() is not supported"); }
  virtual double                         getPrice()                                                  const { throw std::runtime_error("getPrice() is not supported"); }
  virtual bool                           isVegetarian()                                              const { throw std::runtime_error("isVegetarian() is not supported"); }
  virtual void                           print()                                                     const { throw std::runtime_error("print() is not supported"); }
};

// ---------------------------------------

class MenuItem : public MenuComponent
{
private:
  std::string name;
  std::string description;
  bool        vegetarian;
  double      price;

public:
  MenuItem(const std::string& name, const std::string& description, bool vegetarian, double price) :
    name(name), description(description), vegetarian(vegetarian), price(price) {}

  std::string getName() const override {return name;}
  std::string getDescription() const override {return description;}
  double getPrice() const override {return price;}
  bool isVegetarian() const override {return vegetarian;}

  void print() const override;

  class iterator;
  iterator begin();
  iterator end();
};

bool operator==(const MenuItem& mi1, const MenuItem& mi2);

// ---------------------------------------

class Menu : public MenuComponent
{
private:
  std::vector<std::shared_ptr<MenuComponent>> menuComponents;
  std::string name;
  std::string description;

public:
  Menu(const std::string& name, const std::string& description) : name(name), description(description) {}

  void add(const std::shared_ptr<MenuComponent>& menuComponent)    override;
  void remove(const std::shared_ptr<MenuComponent>& menuComponent) override;

  std::shared_ptr<MenuComponent> getChild(int i) const override;

  std::string getName()        const override { return name; }
  std::string getDescription() const override { return description; }

  void print() const override;

  using iterator = std::vector<std::shared_ptr<MenuComponent>>::iterator;

  iterator begin() { return menuComponents.begin(); }
  iterator end()   { return menuComponents.end();   }
};

bool operator==(const Menu& m1, const Menu& m2);

#endif
