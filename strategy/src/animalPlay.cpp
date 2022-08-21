#ifndef ANIMAL_PLAY
#define ANIMAL_PLAY

#include "./dog.cpp"
#include "./bird.cpp"

int main()
{
    Animal *sparky = new Dog();
    Animal *tweety = new Bird();

    std::cout << "Dog: " << sparky->tryToFly() << std::endl;
    std::cout << "Bird: " << tweety->tryToFly() << std::endl;

    return 0;
}

#endif
