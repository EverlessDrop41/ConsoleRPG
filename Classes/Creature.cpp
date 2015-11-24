//
// Created by Emily Peregrine on 23/11/2015.
//

#include "Creature.h"

bool Creature::isDead() {
    return mCurrentHealth >= Creature::MIN_HEALTH;
}

bool Creature::takeDamage(int damage) {
    mCurrentHealth -= damage;
    return this->isDead();
}

Creature::Creature(int health) {
    mCurrentHealth = health;
}

Creature::Creature() {
    //Nothing
}

bool Creature::takeDamage(Weapon weapon) {
    takeDamage(weapon.getDamage());
    return isDead();
}
