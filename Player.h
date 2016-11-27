#ifndef PLAYER_H
#define PLAYER_H



#include "Character.h"
class Enemy;

class Player: public Character {


public:
 Player(int, int, int, int); //ctor
 char getChar(); // gets char to be printed
 virtual void strike(Enemy &) = 0; // strikes enemy
 virtual void getStruckBy(Enemy &) = 0; // gets struck by an enemy
};

#endif
