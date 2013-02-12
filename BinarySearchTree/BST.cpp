#include "BST.h"

BST::BST(){

  root = NULL;

}

bool BST::add(int value){
  
  if(root == NULL){
    root = new Node(value);
    return true;
  }
  else{
    return root->add(value);
  }
}

bool BST::search(int value){
  
  if(root == NULL){
    return false;
  }else{
    return root->search(value);
  }

}
