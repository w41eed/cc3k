#include "Passage.h"
#include <iostream>

using namespace std;

Passage::Passage(int x, int y): Cell{'#', x, y} {}

char Passage::getChar() {
 if (c == nullptr) {
  cout << "C WAS NULL" << endl;
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
