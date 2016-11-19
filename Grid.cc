#include <string>
#include <iostream>
#include "Grid.h"
#include "FloorTile.h"
#include "Wall.h"
#include "Passage.h"
#include "DoorWay.h"

using namespace std;

void Grid::init(ifstream &file) {
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
    theGrid[i][row] = new Wall('_', row, i);
   } else if (curChar == '|') {
    theGrid[i][row] = new Wall('|', row, i);
   } else if (curChar == '.') {
    theGrid[i][row] = new FloorTile(row, i);
   } else if (curChar == '#') {
    theGrid[i][row] = new Passage(row, i);
   } else if (curChar == '+') {
    theGrid[i][row] = new DoorWay(row, i);
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
 for(int row = 0; row < 25; ++row) {
  for(int col = 0; col < 79; ++col) {
   if (theGrid[col][row] == nullptr) {
    cout << ' ';
   } else {
    cout << theGrid[col][row]->getChar();
   }
  }
   cout << endl;
 }
}
