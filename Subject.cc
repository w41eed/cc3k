#include "Subject.h"
#include "Observer.h"

Subject::~Subject() {}

void Subject::attach(Observer *o) {
 observers.emplace_back(o);
}

void Subject::notifyObservers() {
 int len = observers.size();

 for (int i = 0; i < len; ++i) {
  observers[i]->notify(*this);
 }
}
