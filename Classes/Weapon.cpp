//
// Created by Emily Peregrine on 23/11/2015.
//

#include <iostream>
#include "Weapon.h"

void Weapon::setName(string name) {
    mName = name;
}

Weapon::Weapon(string name) {
    mName = name;
}

Weapon::Weapon(string name, int damage) {
    mName = name;
    mDamage = damage;
}

int Weapon::getDamage() {
    return mDamage;
}

void Weapon::setFromConsole() {
    std::cout << "Please input a name for the weapon: \n";
    std::getline(std::cin, mName);

    std::cout << "Please input a value for the damage: \n";
    std::cin >> this->mDamage;

}
