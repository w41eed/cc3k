#ifndef _ENEMIES_H__
#define _ENEMIES_H__

#include "Character.h"
#include <string>
#include <vector>
using namespace std;

class Player;

class Enemy: public Character {
protected:
    bool hostility;
    int *goldDrop;
public:
    Enemy(int HP, int Atk, int Def, int gold);
    virtual ~Enemy() = 0;
    void setHostile() = 0;
    bool isHostile() = 0;
    virtual int attack(Player *p) = 0;

};





#endif
