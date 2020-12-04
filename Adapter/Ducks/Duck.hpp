#ifndef __DUCK_HPP__
#define __DUCK_HPP__

class Duck
{
public:
  virtual ~Duck() = default;

  virtual void fly()    const = 0;
  virtual void quack()  const = 0;
};

#endif
