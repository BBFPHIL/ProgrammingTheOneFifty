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

  //check if value is curr node data
  if(value == data){
    return false;

    //if not, check if value is larger than data
  }else if(value < data){
    //if left is empty
    if(left == NULL){
      //make a new left node
      left = new Node(value);
      return true;

    }else{
      //recurse down left
      return left->add(value);

    }
    //value larger than data
  }else if(value > data){
    //if right empty
    if(right == NULL){

      //add to right
      right = new Node(value);

    }else{

      //keep recursing
      return right->add(value);

    }
  }

  return false;
}

//Search 
//Find value in tree via recursion
//

bool Node::search(int value){

  //check if value is in current node
  if(value == data){
    //found
    return true;
    
    //left node
  }else if(value < data){

    //empty? 
    if(left == NULL){
      //false
      return false;

    }else{
      //recurse down until found
      return left->search(value);

    }

    //right node
  }else if(value > data){
    //right empty
    if(right == NULL){
      //false
      return false;

    }else{
      //recurse down farther
      return right->search(value);

    }
  }

  return false;

}

//Minimum Value
//Return the value
//
int Node::min(){

  //if no left, found
  if(left == NULL){
    return data;
  }else{
    //keep recursing
    return left->min();
  }

}


//Search 
//Find and remove node
//

Node* Node::remove(int value, Node* parent){

  //if value smaller than data, go left
  if(value < data){
    //if left node exists
    if(left != NULL){
      //recurse down
      return left->remove(value, this);
    }else{
      //empty
      return NULL;
    }
    //value larger, go right
  }else if (value > data){
    //right exists
    if(right != NULL){
      //recurse down
      return right->remove(value, this);
    }else{
      //return empty
      return NULL;
    }
  }else{
    //left exists && right exists
    if(left != NULL && right != NULL){
    
      //make data equal smallest
      data = right->min();
      //remove riht
      return right->remove(this->data, this);
   
      //left is remove node
    }else if (parent->left == this){
      //make parent left equal to left
      parent->left = (left != NULL) ? left : right;
      return this;
    }else if( parent->right != this){
      //make right equal to right
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
