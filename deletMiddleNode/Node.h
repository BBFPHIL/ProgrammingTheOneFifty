#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <stdlib.h>

using namespace std;

class Node{

 private:

  Node* next;
  int data;

 public:
  
  Node();

  Node(int);
  
  ~Node();

  void setNext(Node*);

  Node* getNext();

  int getData();
  
  void setData(int);

};
#endif
