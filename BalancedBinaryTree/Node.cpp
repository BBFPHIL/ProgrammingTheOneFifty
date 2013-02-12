#include "Node.h"

Node::Node(){

  data = 0;
  
  left = NULL;
  
  right = NULL;

}

Node::Node(int d){

  data = d;
  
  left = NULL;
  
  right = NULL;

}

Node::~Node(){

}

//Add a node to BST
//

bool Node::add(int value){
  
  if(value == data){
    return false;

  }else if(value < data){
    if(left == NULL){

      left = new Node(value);
      return true;

    }else{

      return left->add(value);

    }
  }else if(value > data){
    if(right == NULL){

      right = new Node(value);

    }else{

      return right->add(value);

    }
  }

  return false;
}

//Search 
//Find value in tree via recursion
//

bool Node::search(int value){
  
  if(value == data){

    return true;

  }else if(value < data){

    if(left == NULL){

      return false;

    }else{

      return left->search(value);

    }

  }else if(value > data){

    if(right == NULL){

      return false;

    }else{

      return right->search(value);

    }
  }

  return false;

}

//Minimum Value
//Return the value
//
int Node::min(){
  
  if(left == NULL){
    return data;
  }else{
    return left->min();
  }

}


//Search 
//Find and remove node
//

Node* Node::remove(int value, Node* parent){

  if(value < data){
    if(left != NULL){
      return left->remove(value, this);
    }else{
      return NULL;
    }
  }else if (value > data){
    if(right != NULL){
      return right->remove(value, this);
    }else{
      return NULL;
    }
  }else{
    if(left != NULL && right != NULL){
    
      data = right->min(); // √√
      return right->remove(this->data, this);
   
    }else if (parent->left == this){
      parent->left = (left != NULL) ? left : right;
      return this;
    }else if( parent->right != this){
      parent->right = (left != NULL) ? left : right;
      return this;
    }
  }
}

//get data
//

int Node::getData(){

  return data;

}

//set next left
//@param newNode: node to add
//

void Node::setNextLeft(Node* newNode){
  
  left = newNode;

}

//set next right
//@param newNode:: node to add
//

void Node::setNextRight(Node* newNode){
  
  right = newNode;

}

//get Left
//

Node* Node::getLeft(){

  return left;

}

//get Right
//

Node* Node::getRight(){

  return right;

}

