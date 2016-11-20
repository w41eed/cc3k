#include "Character.h"

Character::Character(int HP, int Atk, int Def, int gold, int xCo, int yCo):
 HP{HP}, Atk{Atk}, Def{Def}, gold{gold}, xCo{xCo}, yCo{yCo} {}

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
