#include "FloorTile.h"
#include "Item.h"

// ctor
FloorTile::FloorTile(int x, int y) : Cell{'.', x ,y} {
}

// gets char to be printed
char FloorTile::getChar()  {
 
 if (c != nullptr) {
  return c->getChar();
 } else if( i != nullptr){
  return i->getSym();
 }
 else { return symbol; }
}

// can place atop
bool FloorTile::canPlace() {
 if (c) {
  return false;
 } else if (i) {
  return false;
 }
 return true;
}

// can walk atop
bool FloorTile::canWalk() {
 if (c) {
  return false;
 } else if (i) {
  return true;
 }
 return true;
}

// place Character atop
void FloorTile::place(Character *other) {
 c = other;
 notifyObservers();

 char car1 = c->getChar();
 char car2;
 if (i) {
  car2 = i->dSym();
 } else {
  return;
 }

 if (car1 == '@' && car2 == 'G') {
  c->setG(i->getVal());
  delete i;
  i = nullptr;
 }


}

// place Items atop
void FloorTile::place(Item *other) {
 i = other;
 notifyObservers();
}


// move Character/Item off top
void FloorTile::moveOff() {
 c = nullptr;
 notifyObservers();
}
