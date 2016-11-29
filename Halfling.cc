//
// Created by john on 20/11/16.
//

#include "Halfling.h"

// ctor
Halfling::Halfling(Grid *g): Enemy(100, 15, 20, 1, g){

}

// gets char to be printed
char Halfling::getChar() {
    return 'L';
}
