#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;

class Node{
  
 private:
  
  int data; 
  
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
  

};
#endif

