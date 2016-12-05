#ifndef _ENEMIES_H__
#define _ENEMIES_H__

#include "Character.h"
#include "Grid.h"
#include <string>
#include <vector>
#include "Player.h"

class Enemy: public Character {
    bool checkTiles(int, int); // check tiles
protected:
    Grid *g; // gives Enemy access to Grid for movement
    bool checkAndPlace(int xDisp, int yDisp); // checks if Enemy can move
    int goldDrop; // amount of gold the Enemy is worth
public:
    Enemy(int HP, int Atk, int Def, int gold, Grid *, std::string name); // ctor
    virtual ~Enemy(); // dtor
    virtual bool Update(bool); // updates Enemy attack and movement
    virtual char getChar() = 0; // gets char to print in display
    bool eAttack(); // attempts to attack
    void dAttack(const int, const int, Character *); // dragon attack
};





#endif
