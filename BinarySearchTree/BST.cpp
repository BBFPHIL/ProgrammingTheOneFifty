#include "BST.h"

//Defualt constructor
//

BST::BST(){

  root = NULL;

}

//Add operation
//@param value: data adding
//

bool BST::add(int value){
  
  if(root == NULL){
    root = new Node(value);
    return true;
  }
  else{
    return root->add(value);
  }
}

//search operation
//@param value: data searching for
//

bool BST::search(int value){
  
  if(root == NULL){
    return false;
  }else{
    return root->search(value);
  }

}

//Remove operation
//@param value: data removing
//

bool BST::remove(int value){

  if(root == NULL){
    return false;
  }else{
    if(root->getData() == value){
      Node altRoot(0);
      altRoot.setNextLeft(root);
      Node* removedNode = root->remove(value, &altRoot);
      root = altRoot.getLeft();
      
      if(removedNode != NULL){
	delete removedNode;
	return true;
      
      }else{
      return false;
      }
    }
    else{
      Node* removedNode = root->remove(value, NULL);
      if(removedNode != NULL){
	delete removedNode;
	return true;
      }else{
	return false;
      }
    }
  }
}
  
