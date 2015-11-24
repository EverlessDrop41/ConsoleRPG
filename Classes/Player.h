//
// Created by Emily Peregrine on 23/11/2015.
//

#ifndef CONSOLERPG_PLAYER_H
#define CONSOLERPG_PLAYER_H

#include <string>
#include "Creature.h"
#include "Weapon.h"

using std::string;

class Player: Creature {
public:
    Weapon *currentWeapon = new Weapon("Fists", 10);
    Player();
    Player(string);
    Player(Weapon);
    string getNameInput();
    void addExperience(int);

private:
    string mName = "Player";
    int mExperience = 0;
};


#endif //CONSOLERPG_PLAYER_H
