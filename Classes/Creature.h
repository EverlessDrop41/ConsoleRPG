//
// Created by Emily Peregrine on 23/11/2015.
//

#ifndef CONSOLERPG_CREATURE_H
#define CONSOLERPG_CREATURE_H


#include "Weapon.h"

class Creature {
const int MIN_HEALTH = 0;
public:
    Creature();
    Creature(int health);
    bool isDead();
    bool takeDamage(int);
    bool takeDamage(Weapon);
private:
    int mCurrentHealth = 100;
};

#endif //CONSOLERPG_CREATURE_H
