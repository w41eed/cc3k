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

void ActionBar::updatePotion(std::string p){
	PotionType = p;
}

void ActionBar::updateAction(int n){
	actionNum = n;
}


void ActionBar::updateAttack(std::string ename, int epre, int epost, int ppre){
	EnemyName = ename;
	EnemyPreStrike = epre;
	EnemyPostStrike = epost;
	pPreStrike = ppre;
}


int ActionBar::getHealth() const { return PHealth;}

int ActionBar::getAttack() const { return PAttack;}

int ActionBar::getDefence() const { return PDefence;}

int ActionBar::getFloor() const { return FloorNum;}

int ActionBar::getGold() const { return PGold;}

std::string ActionBar::getP() const { return PlayerType;}

std::string ActionBar::getPotion() const {return PotionType;}

int ActionBar::getaction() const { return actionNum;}

int ActionBar::getEnemyHealth() const { return EnemyPreStrike;}

int ActionBar::getEnemyDamage() const { return EnemyPreStrike - EnemyPostStrike;}

std::string ActionBar::getEnemyName() const { return EnemyName;}

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
  out << '\n';
  out << "HP: " << Health << '\n';
  out << "Atk: " << Attack << '\n';
  out << "Def: " << Defence << '\n';
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
    if(eHealth == 0){out << player << " killed " << eName;}
  	else {out << player << " deals " << eDamage << " damage" << " to " << eName << " (" << eHealth << ") " << ", " << eName << " deals " << pDamage << " damage" << " to " << player;
    }
  }
  else if (action == 12){ out << attack;}
  else if (action == 13){ out << goldCollect;}
  out << '\n';
  return out;

}