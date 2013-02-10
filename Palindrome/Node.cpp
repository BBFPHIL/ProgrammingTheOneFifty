#include "Node.h"

//Defualt Constructor
//

Node::Node(){

  next = NULL;
  data = ' ';

}

//Constructor
//

Node::Node(char d){

  data = d;
  next = NULL;

}

//Destructor
//

Node::~Node(){

}

//Set next
//@param newNode: adding node
//

void Node::setNext(Node* newNode){

  next = newNode;

}

//Get next node
//

Node* Node::getNext(){

  return next;

}

//Get Data
//

char Node::getData(){
  
  return data;

}
