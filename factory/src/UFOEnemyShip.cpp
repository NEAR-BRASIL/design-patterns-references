#ifndef UFO_ENEMY_SHIP
#define UFO_ENEMY_SHIP


#include "./EnemyShip.cpp"

class UFOEnemyShip : public EnemyShip {
    public:
        UFOEnemyShip() {
            setName("UFO Enemy Ship");
            setDamage(20.0);
        }


};

#endif