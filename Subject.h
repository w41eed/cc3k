#ifndef SUBJECT_H
#define SUBJECT_H
#include <vector>

class Observer;

class Subject {
 std::vector<Observer *> observers;

public:
 void attach(Observer *o);
 void notifyObservers();
 virtual ~Subject() = 0;
 virtual int getX() = 0;
 virtual int getY() = 0;
 virtual char getChar() = 0;



};



#endif
