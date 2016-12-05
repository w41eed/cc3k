//
// Created by john on 19/11/16.
//

#include "Human.h"
#include "Player.h"
#include "NormalGold.h"
#include "Controller.h"
#include <math.h>


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

void Human::getStruckBy(Character &other) {
 int net = ceil((100.0 / (100.0 + static_cast<float>(Def))) * static_cast<float>(other.getAtk()));

 if (net <= 0) {
  net = 0;
 }
 HP -= net;
 if (HP <= 0) {
  HP = 0;
  if (other.getName() == "Goblin") {
   other.setG(5);
   return;
  }
 }
}
