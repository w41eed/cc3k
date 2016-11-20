#ifndef SUBJECT_H
#define SUBJECT_H
#include <vector>

class Observer;

class Subject {
 std::vector<Observer *> observers; // list of Observers

public:
 void attach(Observer *o); // attach an Observer
 void notifyObservers(); // notify attached Observers
 virtual ~Subject() = 0; // dtor
 virtual int getX() = 0; // get X coordinate
 virtual int getY() = 0; // get Y coordniate
 virtual char getChar() = 0; // get char to be printed



};



#endif
