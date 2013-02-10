#ifndef STACK_H
#define STACK_H

#include "Node.h"

class Stack{

 private: 
  Node* top;

 public:
  
  //Constructor
  Stack();
  
  //Destructor
  Stack(Node*);
  
  //Destructor
  ~Stack();

  //Push node on
  void push(char);

  //pop node
  char pop();

  //dislay stack
  void display();
  
  //Empty?
  bool isEmpty();

  //check top
  char peekTop();


};
#endif
