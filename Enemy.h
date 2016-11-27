#ifndef _ENEMIES_H__
#define _ENEMIES_H__

#include "Character.h"
#include "Grid.h"
#include <string>
#include <vector>
using namespace std;

class Player;

class Enemy: public Character {
    Grid *g;
    bool checkAndPlace(int xDisp, int yDisp); 
protected:
    int goldDrop;
public:
    Enemy(int HP, int Atk, int Def, int gold, Grid *);
    virtual ~Enemy();
    virtual int attack(Player *p) = 0;
    virtual void Move();
    virtual char getChar() = 0;
};





#endif
