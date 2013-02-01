#include "Node.h"


Node::Node(){

}

Node::Node(int d){

  next_ = NULL;
  data_ = d;

}

void Node::setNext(Node* newNode){
  
  next_ = newNode;

}

Node* Node::getNext(){

  return next_;

}

int Node::getData(){

  return data_;

}
