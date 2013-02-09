#ifndef NODE_H
#define NODE_H

using namespace std;

#include <iostream>

//Node class
class Node{
  
 private:
  
  //Next ptr
  Node* next;
  
  //prev ptr
  Node* prev;

  //Letter
  int num;

 public:
  
  //Default Constructor
  Node();

  //Constructor
  Node(int);

  //Destructor
  ~Node();
  
  //Set next node
  void setNext(Node* newNode);
  
  //set prev node
  void setPrev(Node* newNode);

  //get next node
  Node* getNext();

  //get prev node
  Node* getPrev();
  
  //get letter
  int getNum();

};
#endif
