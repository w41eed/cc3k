#include "Character.h"
#include "Elf.h"
#include <iostream>
#include <math.h>
#include "Controller.h"

// ctor
Character::Character(int HP, int Atk, int Def, int gold, int xCo, int yCo, std::string n):
 HP{HP}, maxHP{HP}, Atk{Atk}, Def{Def}, gold{gold}, name{n}, xCo{xCo}, yCo{yCo} {}

// dtor
Character::~Character() {
}

// returns X coordinate
int Character::getX() const{
 return xCo;
}

// returns Y coordinate
int Character::getY() const{
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
int Character::getAtk() const{
 return Atk;
}

// return Def val
int Character::getDef() const{
 return Def;
}

// returns HP
int Character::getHealth() const{
 return HP;
}

// strikes other Character
void Character::strike(Character &other) {
 other.getStruckBy(*this);
}

// strikes other Character
void Character::getStruckBy(Character &other) {
 int net = ceil((100.0 / (100.0 + static_cast<float>(Def))) * static_cast<float>(other.getAtk()));
 int amount;

 if (net <= 0) {
  net = 0;
 }
 HP -= net;
 if (HP <= 0) {
  HP = 0;
  if (other.getName() == "Goblin") {
   other.setG(5);
   return;
  }
  amount = getRand(1, 2);
  other.setG(amount);
 }

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
 if (HP > maxHP) {
  HP = maxHP;
 }
}

// sets Character attack
void Character::setAtk(int AtkChange) {
 Atk += AtkChange;
 if (Atk < 0) {
  Atk = 0;
 }
}

// sets Character defence
void Character::setDef(int DefChange) {
 Def += DefChange;
 if (Def < 0) {
  Def = 0;
 }
}

// returns the gold value
int Character::getG() const{
 return gold;
}

//return the character name
std::string Character::getName() const{
 return name;
}

//sets the gold value
void Character::setG(int g) {
 gold += g;
}
