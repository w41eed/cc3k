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

int Character::getHP() {
 return HP;
}

int Character::getDef() {
 return Def;
}

void Character::addHP(int HPToAdd) {
 HP = HP + HPToAdd;
}
