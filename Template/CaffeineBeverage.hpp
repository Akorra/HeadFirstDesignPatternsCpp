#ifndef __CAFFEINE_BEVERAGE_HPP__
#define __CAFFEINE_BEVERAGE_HPP__

#include <string>

namespace Beverages {
  class CaffeineBeverage
  {
  public:
    virtual void prepareRecipee() const final;

    void boilWater() const;
    void pourInCup() const;

    virtual void brew() const = 0;
    virtual void addCondiments() const = 0;

    //HOOK
    virtual bool customerWantsCondiments() const;
  };

  class Coffee : public CaffeineBeverage
  {
  public:
    void brew()          const override;
    void addCondiments() const override;

    bool customerWantsCondiments() const override;

  private:
    std::string getUserInput() const;
  };

  class Tea : public CaffeineBeverage
  {
  public:
    void brew()          const override;
    void addCondiments() const override;
  };
}

#endif
