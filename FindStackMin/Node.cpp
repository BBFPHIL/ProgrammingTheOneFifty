#include "Node.h"

//Default Constructor
//

Node::Node(){
  
  next = NULL;
  data = 0;

}

//Constructor
//@param d: node data
//

Node::Node(int d){

  next = NULL;
  data = d;

}

//Destructor
//

Node::~Node(){


}

//set next
//@param newNode: new node
//
void Node::setNext(Node* newNode){

  next = newNode;

}

//get next node
//

Node* Node::getNext(){

  return next;

}

//get node data
//

int Node::getNum(){

  return data;

}


