#include "Passage.h"

Passage::Passage(int x, int y): Cell{'#', x, y} {}

char Passage::getChar() {
 if (c == nullptr) {
  return symbol;
 } else {
  return c->getChar();
 }

}

bool Passage::canWalk() {
 return true;
}

bool Passage::canPlace() {
 return false;
}

void Passage::place(Character *other) {
 c = other;
 notifyObservers();
}

void Passage::moveOff() {
 c = nullptr;
 notifyObservers();
}
