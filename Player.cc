#include "Player.h"

Player::Player(int HP, int Atk, int Def, int gold) :
 Character(HP, Atk, Def, gold, 4, 4) {}

char Player::getChar() {
 return '@';
}
