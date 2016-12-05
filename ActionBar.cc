#include "Character.h"
#include "Player.h"
#include <iostream>
#include <sstream>
#include <string>
#include "ActionBar.h"

using namespace std;

//Constructor
ActionBar::ActionBar() {}

//Destructor
ActionBar::~ActionBar() {}

//Updates the player fields in ActionBar class
void ActionBar::updatePlayer(Character * c){

	PHealth = c->getHealth();
	PAttack = c->getAtk();
	PDefence = c->getDef();
	PGold = c->getG();
	PlayerType = c->getName();
}

//Updates the Floor Number
void ActionBar::updateFloor(int f){
	FloorNum = f;
}

//updates the potion type
void ActionBar::updatePotion(std::string p){
	PotionType = p;
}

//updates the action bar statement
void ActionBar::updateAction(int n){
	actionNum = n;
}

//updates the attack statements
void ActionBar::updateAttack(std::string ename, int epre, int epost, int ppre){
	EnemyName = ename;
	EnemyPreStrike = epre;
	EnemyPostStrike = epost;
	pPreStrike = ppre;
}

// returns Player health
int ActionBar::getHealth() const { return PHealth;}

// returns Player attack
int ActionBar::getAttack() const { return PAttack;}

// returns Player defence
int ActionBar::getDefence() const { return PDefence;}

// returns floor number
int ActionBar::getFloor() const { return FloorNum;}

// returns Player gold
int ActionBar::getGold() const { return PGold;}

// returns PlayerType
std::string ActionBar::getP() const { return PlayerType;}

// returns PotionType
std::string ActionBar::getPotion() const {return PotionType;}

// returns the action number
int ActionBar::getaction() const { return actionNum;}

// returns Enemy prestrike
int ActionBar::getEnemyHealth() const { return EnemyPreStrike;}

// return Enemy total damage
int ActionBar::getEnemyDamage() const { return EnemyPreStrike - EnemyPostStrike;}

// returns name of Enemy
std::string ActionBar::getEnemyName() const { return EnemyName;}

// returns total Player damage
int ActionBar::getPlayerDamage() const { return pPreStrike - PHealth;}

//operator<< overload for ActionBar
ostream &operator<<(ostream &out, const ActionBar &ab){
	int Gold = ab.getGold();
	int Health = ab.getHealth();
	int Attack = ab.getAttack();
	int Defence = ab.getDefence();
	int Floor = ab.getFloor();
 	std::string player = ab.getP();
 	std::string potion = ab.getPotion();
 	int action = ab.getaction();
 	int eDamage = ab.getEnemyDamage();
 	int pDamage = ab.getPlayerDamage();
 	int eHealth = ab.getEnemyHealth() - eDamage;
 	std::string eName = ab.getEnemyName();

 	//Action Statements
 	std::string spawn = "Player has Spawned"; //Action 1
 	std::string usePotion = "Player uses " + potion; //Action 2
 	std::string move1 = "Player moved North"; //Action 3
 	std::string move2 = "Player moved East"; //Action 4
 	std::string move3 = "Player moved South"; //Action 5
 	std::string move4 = "Player moved West"; //Action 6
 	std::string move5 = "Player moved NorthEast"; //Action 7
 	std::string move6 = "Player moved NorthWest"; //Action 8
 	std::string move7 = "Player moved SouthEast"; //Action 9
 	std::string move8 = "Player moved SouthWest"; //Action 10
  std::string attack = "Player is under attack!"; //Action 12
  std::string goldCollect = "Gold collected!"; //Action 13
 	



  out << "Race: " << player << "     Gold: " << Gold << "                                                " << "Floor " << Floor;
  out << endl;
  out << "HP: " << Health << endl;
  out << "Atk: " << Attack << endl;
  out << "Def: " << Defence << endl;
  out << "Action: ";
  if(action == 1) { out << spawn;}
  else if (action == 2) { out << usePotion;}
  else if (action == 3) { out << move1;}
  else if (action == 4) { out << move2;}
  else if (action == 5) { out << move3;}
  else if (action == 6) { out << move4;}
  else if (action == 7) { out << move5;}
  else if (action == 8) { out << move6;}
  else if (action == 9) { out << move7;}
  else if (action == 10) { out << move8;}
  else if (action == 11) { 
    if(eDamage < 0){ out << "Nothing to attack!";}
    else if(eHealth == 0){out << player << " killed " << eName;}
    else if(pDamage < 0){ out << player << " deals " << eDamage << " damage" << " to " << eName << " (" << eHealth << ") " << ", " << eName << " deals " << "0" << " damage" << " to " << player;}
  	else {out << player << " deals " << eDamage << " damage" << " to " << eName << " (" << eHealth << ") " << ", " << eName << " deals " << pDamage << " damage" << " to " << player;
    }
  }
  else if (action == 12){ out << attack;}
  else if (action == 13){ out << goldCollect;}
  out << endl;
  return out;
}

