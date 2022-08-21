// The interface is implemented by many other
// subclasses that allow for many types of flying
// without effecting Animal, or Flys.

// Classes that implement new Flys interface
// subclasses can allow other classes to use
// that code eliminating code duplication

// I'm decoupling : encapsulating the concept that varies

#ifndef FLYS
#define FLYS

#include <iostream>

class Flys
{
public:
    virtual std::string fly() = 0;
};

class ItFlys : public Flys
{
public:
    std::string fly()
    {
        return "Flying High";
    }
};

class CantFly : public Flys
{
public:
    std::string fly()
    {
        return "I can't fly";
    }
};

#endif
