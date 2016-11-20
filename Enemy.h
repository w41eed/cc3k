#ifndef _ENEMIES_H__
#define _ENEMIES_H__

#include "Character.h"
#include <string>
#include <vector>
using namespace std;

class Player;

class Enemy: public Character {
protected:
    int goldDrop;
public:
    Enemy(int HP, int Atk, int Def, int gold);
    virtual ~Enemy();
    virtual int attack(Player *p) = 0;
    virtual void move() = 0;
    virtual char getChar() = 0;
};





#endif
