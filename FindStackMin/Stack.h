#ifndef STACK_H
#define STACK_H
#include <algorithm>
#include "Node.h"


class Stack{

 protected:
  
  Node* top;
  
 public:

  Stack();

  Stack(Node*);

  ~Stack();

  void push(int);

  int pop();

  int peek();

  bool isEmpty();

  void display();


};
#endif  
