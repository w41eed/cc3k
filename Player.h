#ifndef PLAYER_H
#define PLAYER_H


#include <string>
#include "Character.h"
class Enemy;

class Player: public Character {


public:
 Player(int, int, int, int, std::string); //ctor
 char getChar(); // gets char to be printed
};

#endif
