#include "Character.h"

#include <iostream>

Character::Character(int HP, int Atk, int Def, int gold, int xCo, int yCo):
 HP{HP}, Atk{Atk}, Def{Def}, gold{gold}, xCo{xCo}, yCo{yCo} {}

Character::~Character() {
}

int Character::getX() {
 return xCo;
}

int Character::getY() {
 return yCo;
}

void Character::setX(int i) {
 xCo = i;
}
void Character::setY(int i) {
 yCo = i;
}
