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

