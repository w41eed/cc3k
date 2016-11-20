#include "DoorWay.h"


DoorWay::DoorWay(int x, int y) : Cell{'+', x, y} {


}

char DoorWay::getChar() {
 if (c == nullptr) {
  return symbol;
 } else {
  return c->getChar();
 }
}

bool DoorWay::canWalk() {
 return true;
}

bool DoorWay::canPlace() {
 return false;
}

void DoorWay::place(Character *other) {
 c = other;
 notifyObservers();
}

void DoorWay::moveOff() {
 c = nullptr;
 notifyObservers();
}
