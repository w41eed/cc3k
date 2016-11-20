#include <string>
#include <iostream>
#include "Grid.h"
#include "FloorTile.h"
#include "Wall.h"
#include "Passage.h"
#include "DoorWay.h"

using namespace std;

// ctor
Grid::Grid() :
 td{nullptr} {}

// initialize from map text file
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

   if (curChar == '-') {
    theGrid[i][row] = new Wall('-', i, row);
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

// dtor
Grid::~Grid() {

 delete td;

 for (int i = 0; i < 79; ++i) {
  for (int j = 0; j < 25; ++j) {
   delete theGrid[i][j];
  }
 }

 for (int i = 0; i < 79; ++i) {
  theGrid[i].resize(0);
 }

 theGrid.resize(0);

}

// prints the Grid
void Grid::printIt() {

cout << *td;
}

// checks if Cell at x,y is walkable
bool Grid::canWalk(int x, int y) {
 if (theGrid[x][y] == nullptr) {
  return false;
 }

 return theGrid[x][y]->canWalk();
}

//checks if Cell at x,y is placeable
bool Grid::canPlace(int x, int y) {
 if (theGrid[x][y] == nullptr) {
  return false;
 }

 return theGrid[x][y]->canWalk();
}

// place Character at x, y
bool Grid::place(int x, int y, Character *other) {
 if (theGrid[x][y]->canWalk()) {
  theGrid[x][y]->place(other);
  return true;
 } else {
  return false;
 }
}

// move Character/Item off Cell at x,y
void Grid::moveOff(int x, int y) {
 theGrid[x][y]->moveOff();
}
