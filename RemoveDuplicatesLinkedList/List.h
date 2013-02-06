#ifndef LIST_H
#define LIST_H

#include "Node.h"


class List{

 private:
  
  Node* head; 
  
  Node* tail;

 public:

  List();
  
  ~List();

  void appendToTail(Node*);
  
  void appendToHead(Node*);

  bool isEmpty();

  void append(Node*);

  Node* getHead();

  void display();
  
};
#endif
