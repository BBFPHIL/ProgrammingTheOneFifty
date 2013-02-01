#ifndef NODE_H
#define NODE_H

#include <string> 
#include <iostream>

using namespace std;

class Node{


 private:
  
  Node* next_;
  
  Node* prev_;

  int data_;


 public:
  
  Node();
  
  Node(int);

  Node* getNext();
  
  void setNext(Node*);

  int getData();

};

#endif
