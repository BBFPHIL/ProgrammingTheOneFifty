#ifndef NODE_H
#define NODE_H

using namespace std;

#include <string>
#include <iostream>

class Node{
  
 private:
  
  Node* next;
  
  char data;

 public:
  
  Node();
  
  Node(char);

  ~Node();

  void setNext(Node*);
  
  Node* getNext();
  
  char getData();

};
#endif
