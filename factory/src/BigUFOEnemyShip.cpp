#ifndef BIG_UFO_ENEMY_SHIP
#define BIG_UFO_ENEMY_SHIP


#include "./UFOEnemyShip.cpp"

class BigUFOEnemyShip : public UFOEnemyShip {
    public:
        BigUFOEnemyShip() {
            setName("Big UFO Enemy Ship");
            setDamage(40.0);
        }


};

#endif