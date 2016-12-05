#ifndef __TEXTDISPLAY_H__
#define __TEXTDISPLAY_H__
#include <iostream>
#include <vector>
#include "Observer.h"
class Cell;

class TextDisplay: public Observer {
  std::vector<std::vector<char>> theDisplay;
  const int row = 25;
  const int col = 79;
 public:
  TextDisplay(); //Constructor. When called, it initializes theDisplay to all whitespaces chars

  void notify(Subject &whoNotified) override; //Gets notified by subject(cell) and 
  	  	  	  	  	  	  	  	  	  	  	  //changes the character at that position.
  ~TextDisplay();

 // output TextDisplay
  friend std::ostream &operator<<(std::ostream &out, const TextDisplay &td);
};

#endif
