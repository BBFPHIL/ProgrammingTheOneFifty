#include "Node.h"

//Default Constructor
//

Node::Node(){

  next = NULL;
  prev = NULL;
  num = 0;

}

//Constructor
//@param l: Node letter
//

Node::Node(int n){
  
  next = NULL;
  prev = NULL;
  num = n;

}

//Destructor
//

Node::~Node(){

}

//Set next node
//@param newNode: next node
//

void Node::setNext(Node* newNode){
  
  next = newNode;
  
}

//Set prev node
//@param newNode: prev node
//

void Node::setPrev(Node* newNode){
  
  prev = newNode;

}

//Get next node
//

Node* Node::getNext(){

  return next;

}

//Get prev node
//

Node* Node::getPrev(){

  return prev;
}

//Get letter
//
int Node::getNum(){
  
  return num;

}





