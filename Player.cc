#include "Player.h"

// ctor
Player::Player(int HP, int Atk, int Def, int gold) :
 Character(HP, Atk, Def, gold, 0, 0) {}

// gets char to be printed
char Player::getChar() {
 return '@';
}
