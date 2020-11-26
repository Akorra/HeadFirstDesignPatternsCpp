#ifndef __FLYBEHAVIOR_HPP__
#define __FLYBEHAVIOR_HPP__

/// FlyBehavior is an interface that all flying classes implement. All new flying classes just need to implement the fly() method.
class FlyBehavior {
public:
    virtual ~FlyBehavior() {}
    virtual void fly() const = 0;
};

#endif /* __FLYBEHAVIOR_HPP__ */
