#ifndef ACTION_BAR_H
#define ACTION_BAR_H

#include "Character.h"
#include "Player.h"
#include <iostream>
#include <sstream>
#include <string>


class ActionBar {

private:
	std::string PlayerType;
	std::string EnemyName;
	int EnemyPreStrike;
	int EnemyPostStrike;
	int pPreStrike;
	int PHealth;
	int PAttack;
	int PDefence;
	int FloorNum;
	int PGold;
	std::string PotionType;
	int actionNum;

public:
	ActionBar();
	~ActionBar();

	void updatePlayer(Character * c);
	void updateFloor(int f);
	void updatePotion(std::string p);
	void updateAttack(std::string ename, int epre, int epost, int ppre);
	void updateAction(int n);
	int getHealth() const;
	int getAttack() const;
	int getDefence() const;
	int getFloor() const;
	int getGold() const;
	std::string getP() const;
	std::string getPotion() const;
	int getaction() const;
	int getEnemyHealth() const;
	int getEnemyDamage() const;
	int getPlayerDamage() const;
	std::string getEnemyName() const;

	friend std::ostream &operator<<(std::ostream &out, const ActionBar &ab);


};

#endif
