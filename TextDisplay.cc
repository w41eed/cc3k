#include <iostream>
#include <utility>
#include "TextDisplay.h"
#include "Cell.h"
using namespace std;

// ctor
TextDisplay::TextDisplay() {
	theDisplay.resize(col);
	for(int i = 0; i < col; i++){
		theDisplay[i].resize(row);
	}
	for(int k = 0; k < col; k++){
		for(int p = 0; p < row; p++){
			theDisplay[k][p] = ' ';
		}
	}
}

//textdisplay gets notified
void TextDisplay::notify(Subject &whoNotified) {
	int cellRow = whoNotified.getX();
	int cellCol = whoNotified.getY();
	char cellChar = whoNotified.getChar();


	theDisplay[cellRow][cellCol] = cellChar;

}

// dtor
TextDisplay::~TextDisplay() {}
ostream &operator<<(ostream &out, const TextDisplay &td) {
	
	for(int i = 0; i < td.row; i++) {
		for(int k = 0; k < td.col; k++) {
			out << td.theDisplay[k][i];
		}
		out << endl;
	}	

 return out;
}
