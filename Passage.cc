#include "Passage.h"
#include <iostream>

using namespace std;

// ctor
Passage::Passage(int x, int y): Cell{'#', x, y} {}

// gets char to be printed
char Passage::getChar() {
 if (c == nullptr) {
  return symbol;
 } else {
  return c->getChar();
 }

}

// can walk atop
bool Passage::canWalk() {
 if(c) {
  return false;
 }
 return true;
}

// can place atop
bool Passage::canPlace() {
 return false;
}



// place Character atop
void Passage::place(Character *other) {
 c = other;
 notifyObservers();
}

// place Item atop
void Passage::place(Item *other) {
 i = other;
 notifyObservers();
}

// move Character/Item off
void Passage::moveOff() {
 c = nullptr;
 notifyObservers();
}
