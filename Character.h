#ifndef CHARACTER_H
#define CHARACTER_H

class Character {
 protected:
 int HP; // health
 int Atk; // attack power
 int Def; // defence
 int gold; // current gold
 private:
 int xCo; // current x coordinate
 int yCo; // current y coordinate

 public:
 Character(int, int, int, int, int, int); // ctor
 virtual ~Character(); // dtor
 virtual char getChar() = 0; // returns char to be printed
 void setX(int); // sets X val of current Character
 void setY(int); // sets Y val of current Character
 int getX(); // returns X val
 int getY(); // returns Y val



};

#endif
