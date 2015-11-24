#include <iostream>
#include "Classes/Player.h"

using std::cout;
using std::endl;
using std::string;

int main() {

    Player *user = new Player();

    cout << "Welcome to the game " << user->getName() << endl;
    cout << "Your weapon is: " << user->currentWeapon->toString() << endl;

    return 0;
}