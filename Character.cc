#include "Character.h"

#include <iostream>

// ctor
Character::Character(int HP, int Atk, int Def, int gold, int xCo, int yCo):
 HP{HP}, Atk{Atk}, Def{Def}, gold{gold}, xCo{xCo}, yCo{yCo} {}

// dtor
Character::~Character() {
}

// returns X coordinate
int Character::getX() {
 return xCo;
}

// returns Y coordinate
int Character::getY() {
 return yCo;
}

// sets X coordinate
void Character::setX(int i) {
 xCo = i;
}

// sets Y coordinate
void Character::setY(int i) {
 yCo = i;
}

void Character::setHealth(int h) {
 HP = h;
}

int Character::getHealth() {
 return HP;
}
