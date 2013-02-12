#ifndef STACKMIN_H
#define STACKMIN_H

#include "Stack.h"


class StackMin: public Stack{

 public:

  //Second stack
  Stack *stackTwo;
  
  //Default constructor
  StackMin();
  
  //push new data
  void push(int);
  
  //pop node off
  int pop();

  //find min
  int min();

  
};
#endif
