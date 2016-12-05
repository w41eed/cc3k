#ifndef _OBSERVER_H_
#define _OBSERVER_H_
class Subject;
class Cell;

class Observer {
 public:
  virtual void notify(Subject &whoNotified) = 0;  // pass the Cell that called
                                                  // called the method
  virtual ~Observer() = default; // dtor
};
#endif
