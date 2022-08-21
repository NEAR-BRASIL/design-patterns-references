#ifndef ANIMAL
#define ANIMAL

#include "./flys.cpp"

class Animal
{
public:
    Flys *flyingType = nullptr;

    void setName(std::string newName) { name = newName; }
    std::string getName() { return name; }

    void setHeight(double newHeight) { height = newHeight; }
    double getHeight() { return height; }

    void setWeight(int newWeight)
    {
        if (newWeight > 0)
        {
            weight = newWeight;
        }
        else
        {
            std::cout << "Weight must be bigger than 0" << std::endl;
        }
    }
    int getWeight() { return weight; }

    void setFavFood(std::string newFavFood) { favFood = newFavFood; }
    std::string getFavFood() { return favFood; }

    void setSpeed(double newSpeed) { speed = newSpeed; }
    double getSpeed() { return speed; }

    void setSound(std::string newSound) { sound = newSound; }
    std::string getSound() { return sound; }

    /* BAD
    * You don't want to add methods to the super class.
    * You need to separate what is different between subclasses
    * and the super class
    public void fly(){
         
        System.out.println("I'm flying");
         
    }
    */

    // Animal pushes off the responsibility for flying to flyingType

    std::string tryToFly()
    {
        return flyingType->fly();
    }

    void setFlyingAbility(Flys *newFlyType) { flyingType = newFlyType; }

private:
    std::string name;
    double height;
    int weight;
    std::string favFood;
    double speed;
    std::string sound;
};

#endif