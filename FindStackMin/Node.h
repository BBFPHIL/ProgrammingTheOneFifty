#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;

class Node{

 private:

  //ptr to next
  Node* next;
  
  //variable
  int data;

 public:
  
  //Default Constructor
  Node();

  //Constructor
  Node(int);

  //Destructor
  ~Node();

  //set next node
  void setNext(Node* newNode);
  
  //get next node
  Node* getNext();
  
  //get data
  int getNum();


};

#endif
