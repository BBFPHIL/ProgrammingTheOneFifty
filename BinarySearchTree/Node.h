#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;

class Node{
  
 private:
  
  int data; 

  //Node ptrs
  Node* left;
  Node* right;

 public:
  
  Node();
  
  Node(int);

  ~Node();
  
  //add value to tree
  bool add(int);

  //Search for tree value
  bool search(int);

  //Remove a node
  Node* remove(int, Node*);
  
  //return minimum value
  int min();
  
  //Accessors
  int getData();

  //Set next left
  void setNextLeft(Node*);

  //Set new right
  void setNextRight(Node*);
  
  //get left
  Node* getLeft();

  //get right
  Node* getRight();


};
#endif

