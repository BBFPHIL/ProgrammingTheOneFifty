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

int Node::getData(){

  return data;

}

void Node::setData(int x){

  data = x;

}
