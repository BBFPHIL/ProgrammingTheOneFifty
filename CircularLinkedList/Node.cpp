#include "Node.h"


Node::Node(){

  next = NULL;
  data = 0;

}

Node::Node(int x){

  next = NULL;
  data = x;

}

Node::~Node(){

}

void Node::setNext(Node* newNode){

  next = newNode;

}

Node* Node::getNext(){
  
  return next;

}

int Node::getNum(){

  return data;

}


