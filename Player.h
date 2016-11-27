#ifndef PLAYER_H
#define PLAYER_H



#include "Character.h"
class Enemy;

class Player: public Character {


public:
 Player(int, int, int, int); //ctor
 char getChar(); // gets char to be printed
};

#endif
