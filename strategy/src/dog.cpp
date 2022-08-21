#ifndef DOG
#define DOG

#include "./animal.cpp"
#include "./flys.cpp"

class Dog : public Animal
{
public:
    void digHole()
    {
        std::cout << "Dug a hole" << std::endl;
    }

    Dog()
    {
        setSound("Bark");

        flyingType = new CantFly();

        flyingType->fly();
    }

    /* BAD
    * You could override the fly method, but we are breaking
    * the rule that we need to abstract what is different to
    * the subclasses
    *
    public void fly(){
         
        System.out.println("I can't fly");
         
    }
    */
};

#endif