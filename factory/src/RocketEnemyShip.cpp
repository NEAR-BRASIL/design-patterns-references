#ifndef ROCKET_ENEMY_SHIP
#define ROCKET_ENEMY_SHIP

#include "./EnemyShip.cpp"

class RocketEnemyShip : public EnemyShip {
    public:
        RocketEnemyShip() {
                setName("Rocket Enemy Ship");
                setDamage(10.0);
            }


};

#endif