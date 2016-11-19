#include "DoorWay.h"


DoorWay::DoorWay(int x, int y) : Cell{'+', x, y} {


}

char DoorWay::getChar() {
 return symbol;
}
