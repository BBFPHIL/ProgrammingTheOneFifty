#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;


class Node{

 private:
  
  char letter;

  Node* next;

 public:

  Node();

  Node(char);

  ~Node();

  void setNext(Node*);

  Node* getNext();

  char getLetter();

};
#endif
