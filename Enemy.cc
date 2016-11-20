#include "Enemy.h"

Enemy::Enemy(int HP, int Atk, int Def, int gold) :
        Character(HP, Atk, Def, gold, 0, 0) {}

Enemy::~Enemy() {

//    TODO: finish destructor for enemy, probably delete its gold pointer
}
