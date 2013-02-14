#include "Node.h"


Node::Node(){

  letter = '\0';
  
  next = NULL;
}

Node::Node(char l){

  letter = l;

  next = NULL;

}

Node::~Node(){

}

void Node::setNext(Node* newNode){

  next = newNode;

}

char Node::getLetter(){

  return letter;

}
    
Node* Node::getNext(){

  return next;

}
