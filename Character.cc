#include "Character.h"
#include "Elf.h"
#include <iostream>

// ctor
Character::Character(int HP, int Atk, int Def, int gold, int xCo, int yCo, std::string n):
 HP{HP}, Atk{Atk}, Def{Def}, gold{gold}, name{n}, xCo{xCo}, yCo{yCo} {}

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

// return Atk val
int Character::getAtk() {
 return Atk;
}

// return Def val
int Character::getDef() {
 return Def;
}

// returns HP
int Character::getHealth() {
 return HP;
}

// strikes other Character
void Character::strike(Character &other) {
 other.getStruckBy(*this);
}

// striks other Character
void Character::getStruckBy(Character &other) {
 int net = other.getAtk() - Def;
 if (net <= 0) {
  net = 0;
 }
 HP -= net;
}

// Elf strikes Character twice
void Character::getStruckBy(Elf &other) {
 int net = (2 * other.getAtk()) - (2 * Def);
 if (net <= 0) {
  net = 0;
 }
 HP -= net;
}

// adds healthChange to Character's health
void Character::setHealth(int healthChange) {
 HP += healthChange;
}

void Character::setAtk(int AtkChange) {
 Atk += AtkChange;
 if (Atk < 0) {
  Atk = 0;
 }
}

void Character::setDef(int DefChange) {
 Def += DefChange;
 if (Def < 0) {
  Def = 0;
 }
}


int Character::getG(){
	return gold;
}

std::string Character::getName(){
	return name;
}
