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
 virtual void move() = 0;




};

#endif
