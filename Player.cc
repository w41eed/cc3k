#include "Player.h"

// ctor
Player::Player(int HP, int Atk, int Def, int gold, std::string name) :
 Character(HP, Atk, Def, gold, 0, 0, name) {}

// gets char to be printed
char Player::getChar() {
 return '@';
}
