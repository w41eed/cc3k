#ifndef _ENEMIES_H__
#define _ENEMIES_H__

#include "Character.h"
#include "Grid.h"
#include <string>
#include <vector>
#include "Player.h"

class Enemy: public Character {
    Grid *g;
    bool checkAndPlace(int xDisp, int yDisp); 
protected:
    int goldDrop;
public:
    Enemy(int HP, int Atk, int Def, int gold, Grid *);
    virtual ~Enemy();
    virtual void Move();
    virtual char getChar() = 0;
    bool eAttack();
};





#endif
