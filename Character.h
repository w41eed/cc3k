#ifndef CHARACTER_H
#define CHARACTER_H

class Character {
 int HP;
 int Atk;
 int Def;

 public:
 Character(int, int, int);
 virtual char getChar() = 0;
 virtual void move() = 0;




};

#endif
