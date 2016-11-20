#include "DoorWay.h"


DoorWay::DoorWay(int x, int y) : Cell{'+', x, y} {


}

char DoorWay::getChar() {
 return symbol;
}

bool DoorWay::canWalk() {
 return true;
}

bool DoorWay::canPlace() {
 return false;
}
