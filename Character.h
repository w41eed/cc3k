class Elf;

#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>

class Character {
 protected:
 int HP; // health
 int maxHP; // max health
 int Atk; // attack power
 int Def; // defence
 int gold; // current gold
 std::string name; //name of character

 private:
 int xCo; // current x coordinate
 int yCo; // current y coordinate

 public:
 Character(int, int, int, int, int, int, std::string="none"); // ctor
 virtual ~Character(); // dtor
 virtual char getChar() = 0; // returns char to be printed
 void setX(int); // sets X val of current Character
 void setY(int); // sets Y val of current Character
 int getX(); // returns X val
 int getY(); // returns Y val
 int getAtk(); // return Atk val
 int getDef(); // return Def val
 virtual void strike(Character &); // strikes a Character
 virtual void getStruckBy(Character &); // gets struck by a Character
 void getStruckBy(Elf &); // gets struck by a Character
    // TODO: getStruckBy isn't virtual
 int getHealth(); // returns health value
 int getG(); //returns the gold amount
 void setG(int); // sets the gold amount
 virtual void setHealth(int healthChange); // sets HP
 void setAtk(int AtkChange); // sets Atk
 void setDef(int DefChange); // sets Def
 std::string getName(); //returns the name of the character


};

#endif
