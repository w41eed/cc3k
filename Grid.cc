#include <string>
#include <iostream>
#include "Grid.h"
#include "FloorTile.h"
#include "Wall.h"
#include "Passage.h"
#include "DoorWay.h"
#include "ActionBar.h"

using namespace std;

// ctor
Grid::Grid() :
 td{nullptr} {
  ab = new ActionBar;
 }

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
 delete ab;

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


//cleans the Grid
void Grid::cleanGrid(){
 for (int i = 0; i < 79; ++i) {
  for (int j = 0; j < 25; ++j) {
   if (theGrid[i][j] == nullptr) {
    continue;
   }
    theGrid[i][j]->cleanCell();
  }
 }
}


//determines if player is on the stairs
bool Grid::nextFloor(int x, int y){
  return theGrid[x][y]->nextFloor();
}



// prints the Grid
void Grid::printIt() {

cout << *td;
cout << *ab << endl;
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

 return theGrid[x][y]->canPlace();
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

// place Item at x, y
bool Grid::place(int x, int y, Item *other) {
 if (theGrid[x][y]->canPlace()) {
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

// returns char at x,y
char Grid::getChar(int x, int y) const{
 if (theGrid[x][y]) {
  return theGrid[x][y]->getChar();
 }

 return ' ';
}

// returns character pointer at x, y
Character *Grid::getCPtr(int x, int y) const {
 return theGrid[x][y]->getCPtr();
}

// returns a item pointer at x, y
Item *Grid::getIPtr(int x, int y) const {
 return theGrid[x][y]->getIPtr();
}

// takes item off x, y
void Grid::takeOff(int x, int y) {
 theGrid[x][y]->takeOff();
}


//returns a pointer to the ActionBar
ActionBar * Grid::getAction() const{
  return ab;
}
