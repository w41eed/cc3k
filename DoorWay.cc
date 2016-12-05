#include "DoorWay.h"

// ctor
DoorWay::DoorWay(int x, int y) : Cell{'+', x, y} {
}

// returns char to be printed
char DoorWay::getChar()  {
 if (c == nullptr) {
  return symbol;
 } else {
  return c->getChar();
 }
}

// returns can walk on top
bool DoorWay::canWalk() {
 if (c) {
  return false;
 }
 return true;
}

// returns can place on top
bool DoorWay::canPlace() {
 return false;
}

// place Character atop
void DoorWay::place(Character *other) {
 c = other;
 notifyObservers();
}

// place Item atop
void DoorWay::place(Item *other) {
 i = other;
 notifyObservers();
}

// remove Character from atop
void DoorWay::moveOff() {
 c = nullptr;
 notifyObservers();
}
