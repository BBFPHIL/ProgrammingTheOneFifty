#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;

class Node{

 private:
  
  Node* next;
  int data;

 public:
  
  Node();

  Node(int);

  ~Node();

  void setNext(Node* newNode);
  
  Node* getNext();
  
  int getNum();


};

#endif
