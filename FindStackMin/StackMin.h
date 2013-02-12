#ifndef STACKMIN_H
#define STACKMIN_H

#include "Stack.h"


class StackMin: public Stack{

 public:
  
  Stack *stackTwo;
  
  StackMin();
  
  void push(int);
  
  int pop();

  int min();

  
};
#endif
