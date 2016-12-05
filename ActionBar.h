#ifndef ACTION_BAR_H
#define ACTION_BAR_H

#include "Character.h"
#include "Player.h"
#include <iostream>
#include <sstream>
#include <string>


class ActionBar {

private:
	std::string PlayerType; // Player type
	std::string EnemyName; // Name of Enemy
	int EnemyPreStrike; // Enemy health pre-strike
	int EnemyPostStrike; // Enemy health post-strike
	int pPreStrike; // Player pre-strike
	int PHealth; // Player health
	int PAttack; // Player attack
	int PDefence; // Player defence
	int FloorNum; // floor number
	int PGold; // Player gold
	std::string PotionType; // Potion type
	int actionNum; // action number

public:
	ActionBar(); // ctor
	~ActionBar(); // dtor

	void updatePlayer(Character * c); //updates players health,attack, defence
	void updateFloor(int f); //updates the floor numbers
	void updatePotion(std::string p); //updates the potion type
	void updateAttack(std::string ename, int epre, int epost, int ppre); //updates the attack action
	void updateAction(int n); //updates the action statement
	int getHealth() const; // returns Player health
	int getAttack() const; // returns Player attack
	int getDefence() const; // returns Player defence
	int getFloor() const; // returns current floor
	int getGold() const; // returns current gold
	std::string getP() const; // gets PlayerType
	std::string getPotion() const; // gets PotionType
	int getaction() const; // gets action number
	int getEnemyHealth() const; // gets Enemy health
	int getEnemyDamage() const; // gets Enemy damage
	int getPlayerDamage() const; // gets Player damage
	std::string getEnemyName() const; // returns Enemy name

	friend std::ostream &operator<<(std::ostream &out, const ActionBar &ab); // outputs the ActionBar


};

#endif
