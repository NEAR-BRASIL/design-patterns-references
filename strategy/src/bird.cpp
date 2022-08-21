#ifndef BIRD
#define BIRD

#include "./animal.cpp"
#include "./flys.cpp"

class Bird : public Animal
{
public:
    Bird()
    {
        setSound("Tweet");

        flyingType = new ItFlys();
    }
};

#endif