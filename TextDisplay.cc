#include <iostream>
#include <utility>
#include "textdisplay.h"
#include "cell.h"
#include "info.h"
using namespace std;

TextDisplay::TextDisplay() {
	theDisplay.resize(row);
	for(int i = 0; i < row; i++){
		theDisplay[i].resize(col);
	}
	for(int k = 0; k < row; k++){
		for(int p = 0; p < col; p++){
			theDisplay[k][p] = ' ';
		}
	}
}

void TextDisplay::notify(Subject &whoNotified) {
	int cellRow = whoNotified.getX();
	int cellCol = whoNotified.getY();
	char cellChar = whoNotified.getChar();
	theDisplay[cellRow][cellCol] = cellChar;

}

TextDisplay::~TextDisplay() {}
ostream &operator<<(ostream &out, const TextDisplay &td) {
	
	for(int i = 0; i < td.row; i++) {
		for(int k = 0; k < td.col; k++) {
			out << td.theDisplay[i][k];
		}
		out << "\n";
	}	

  	return out;
}
