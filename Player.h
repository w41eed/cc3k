#ifndef PLAYER_H
#define PLAYER_H



#include "Character.h"
#include "Item.h"

class Enemy;

class Player: public Character {


public:
 Player(int, int, int, int); //ctor
 char getChar(); // gets char to be printed
// Item inventory;
// TODO: put inventory of type item in player to make decorator pattern work? but it cant work since Item is pure virtual
};

#endif
