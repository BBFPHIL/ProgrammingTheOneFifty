#include "Node.h"


Node::Node(){
  
  next = NULL;
  data = 0;

}

Node::Node(int d){

  next = NULL;
  data = d;

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


