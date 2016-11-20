#include <string>
#include <iostream>
#include "Grid.h"
#include "FloorTile.h"
#include "Wall.h"
#include "Passage.h"
#include "DoorWay.h"

using namespace std;

Grid::Grid() :
 td{nullptr} {}

void Grid::init(ifstream &file) {

 if (td == nullptr) {
  td = new TextDisplay;
 }

 string s;

 theGrid.resize(79);

 for(int i = 0; i < 79; ++i) {
  theGrid[i].resize(25);
 }

 int row = 0;

 while(getline(file,s)) {
 
  for (int i = 0; i < 79; ++i) {
   char curChar = s[i];

   if (curChar == '_') {
    theGrid[i][row] = new Wall('_', i, row);
    theGrid[i][row]->attach(td);
    theGrid[i][row]->notifyObservers();
   } else if (curChar == '|') {
    theGrid[i][row] = new Wall('|', i, row);
    theGrid[i][row]->attach(td);
    theGrid[i][row]->notifyObservers(); 
  } else if (curChar == '.') {
    theGrid[i][row] = new FloorTile(i, row);
    theGrid[i][row]->attach(td);
    theGrid[i][row]->notifyObservers();
   } else if (curChar == '#') {
    theGrid[i][row] = new Passage(i, row);
    theGrid[i][row]->attach(td);
    theGrid[i][row]->notifyObservers();
   } else if (curChar == '+') {
    theGrid[i][row] = new DoorWay(i, row);
    theGrid[i][row]->attach(td);
    theGrid[i][row]->notifyObservers(); 
   } else {
    theGrid[i][row] = nullptr;
   }
  }
  ++row;
  s = "";
 }
}

Grid::~Grid() {
 for (int row = 0; row < 25; ++row) {
  for (int col = 0; col < 79; ++col) {
   delete theGrid[col][row];
  }
 }
}

void Grid::printIt() {

cout << *td;
}

bool Grid::canWalk(int x, int y) {
 return theGrid[x][y]->canWalk();
}

bool Grid::canPlace(int x, int y) {
 return theGrid[x][y]->canWalk();
}

bool Grid::place(int x, int y, Character *other) {
 if (theGrid[x][y]->canPlace()) {
  theGrid[x][y]->place(other);
  return true;
 } else {
  return false;
 }
}
