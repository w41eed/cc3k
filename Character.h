#ifndef CHARACTER_H
#define CHARACTER_H

class Character {
 int HP;
 int Atk;
 int Def;
 int gold;
 int xCo;
 int yCo;

 public:
 Character(int, int, int, int, int, int);
 virtual char getChar() = 0;
 void setX(int);
 void setY(int);
 int getX();
 int getY();




};

#endif
