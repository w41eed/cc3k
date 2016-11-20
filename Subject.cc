#include "Subject.h"
#include "Observer.h"

// dtor
Subject::~Subject() {}

// attach Observer
void Subject::attach(Observer *o) {
 observers.emplace_back(o);
}

// notify attached Observers
void Subject::notifyObservers() {
 int len = observers.size();

 for (int i = 0; i < len; ++i) {
  observers[i]->notify(*this);
 }
}
