//
// Created by john on 19/11/16.
//

#include "Human.h"
#include "Player.h"
#include "NormalGold.h"


// ctor
Human::Human(Grid *g) : Enemy(140, 20, 20, 4, g, "Human") {}

// dtor
Human::~Human() {

 int x = getX();
 int y = getY();

 Item *ng = new NormalGold;

 if (g->place(x, y, ng) == false) {
  delete ng;
  return;
 }

 ng = nullptr;
 ng = new NormalGold;


 if (g->canPlace(x + 1, y - 1)) {
  g->place(x + 1, y - 1, ng);
 } else if (g->canPlace(x + 1, y)) {
  g->place(x + 1, y, ng);
 } else if (g->canPlace(x + 1, y + 1)) {
  g->place(x + 1, y + 1, ng);
 } else if (g->canPlace(x, y + 1)) {
  g->place(x, y + 1, ng);
 } else if (g->canPlace(x - 1, y + 1)) {
  g->place(x - 1, y + 1, ng);
 } else if (g->canPlace(x - 1, y)) {
  g->place(x - 1, y, ng);
 } else if (g->canPlace(x - 1, y - 1)) {
  g->place(x - 1, y - 1, ng);
 } else if (g->canPlace(x, y - 1)) {
  g->place(x, y - 1, ng);
 } else {
  delete ng;
  ng = nullptr;
 }


}

// gets char to be printed
char Human::getChar() {
    return 'H';
}
