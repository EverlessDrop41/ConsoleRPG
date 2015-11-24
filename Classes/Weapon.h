//
// Created by Emily Peregrine on 23/11/2015.
//

#ifndef CONSOLERPG_WEAPON_H
#define CONSOLERPG_WEAPON_H

#include <string>

using std::string;

class Weapon {
public:
    Weapon(string name);
    Weapon(string name, int damage);
    int getDamage();
    void setName(string);
    string getName();
    void setDamage(int);
    void setFromConsole();
private:
    int mDamage = 10;
    string mName;
};


#endif //CONSOLERPG_WEAPON_H
