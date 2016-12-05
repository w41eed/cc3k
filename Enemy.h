#ifndef _ENEMIES_H__
#define _ENEMIES_H__

#include "Character.h"
#include "Grid.h"
#include <string>
#include <vector>
#include "Player.h"

class Enemy: public Character {
protected:
    Grid *g;
    bool checkAndPlace(int xDisp, int yDisp); 
    int goldDrop;
public:
    Enemy(int HP, int Atk, int Def, int gold, Grid *, std::string name);
    virtual ~Enemy();
    virtual bool Update(bool);
    virtual char getChar() = 0;
    bool eAttack();
    void dAttack(const int, const int, Character *);
    bool checkTiles(int, int);
};





#endif
