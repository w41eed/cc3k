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

 theGrid.resize(5);

 for(int i = 0; i < 5; ++i) {
  theGrid[i].resize(5);
 }

 int j = 0;

 while(getline(file,s)) {
 
  for (int i = 0; i < 5; ++i) {
   char curChar = s[i];

   if (curChar == '|' || curChar == '_') {
    theGrid[j][i] = new Wall(true);
   } else if (curChar == '.') {
    theGrid[j][i] = new FloorTile();
   } else if (curChar == '#') {
    theGrid[j][i] = new Passage();
   } else if (curChar == '+') {
    theGrid[j][i] = new DoorWay();
   }
  }
  ++j;
 }
}

void Grid::printIt() {
 for(int i = 0; i < 5; ++i) {
  for (int j = 0; j < 5; ++j) {
   cout << theGrid[i][j]->getChar();
  }
  cout << endl;
 }




}
