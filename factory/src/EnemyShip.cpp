#ifndef ENEMY_SHIP
#define ENEMY_SHIP


#include <iostream>
#include <string>

class EnemyShip {
    private: 
        std::string name;
        double amtDamage;

    public:
        EnemyShip(){};

        std::string getName() { return name; }
        void setName(std::string newName) { name = newName; }

        double getDamage() { return amtDamage; }
        void setDamage(double newDamage) { amtDamage = newDamage; }

        void followHeroShip() {
            std::cout << getName() << " is following the hero\n";
        }

        void displayEnemyShip() {
            std::cout << getName() << " is on the screen\n"; 
        }

        void enemyShipShoots() {
            std::cout << getName() << " attacks and does " << getDamage() << std::endl;
        }
};

#endif