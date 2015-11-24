//
// Created by Emily Peregrine on 23/11/2015.
//

#include <iostream>
#include "Player.h"

Player::Player() {
    mName = getNameInput();
}

string Player::getNameInput() {
    string name = "";
    std::cout << "Please input a name for your character: ";
    std::getline(std::cin, name);
    return name;
}

void Player::addExperience(int exp) {
    mExperience += exp;
}

Player::Player(Weapon weapon) {
    this->currentWeapon = &weapon;
}

Player::Player(string name) {
    mName = name;
}

string Player::getName() {
    return mName;
}

int Player::getExperience() {
    return mExperience;
}
