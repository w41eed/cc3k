//
// Created by john on 19/11/16.
//

#include "Human.h"

Human::Human() : Enemy(140, 20, 20, 4) {}

void Human::move() {

}

char Human::getChar() {
    return 'H';
}
