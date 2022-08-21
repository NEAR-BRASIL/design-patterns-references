#ifndef ENEMY_SHIP_FACTORY
#define ENEMY_SHIP_FACTORY 

#include "./EnemyShip.cpp"
#include "./UFOEnemyShip.cpp"
#include "./BigUFOEnemyShip.cpp"
#include "./RocketEnemyShip.cpp"


class EnemyShipFactory {
public:
    EnemyShip* makeEnemyShip(std::string newShipType) {

        EnemyShip *newShip = nullptr;
        if (newShipType == "U") {
            return new UFOEnemyShip();
        }
        else if (newShipType == "R") {
            return new RocketEnemyShip();
        }
        else if (newShipType == "B") {
            return new BigUFOEnemyShip();
        }
        else return nullptr;

    }
};

#endif