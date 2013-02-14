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
  
  //if root, make root newnode
  if(root == NULL){
    root = new Node(value);
    return true;
  }
  else{
    //add with Node.h add operation
    return root->add(value);
  }
}

//search operation
//@param value: data searching for
//

bool BST::search(int value){
  
  //check if tree empty
  if(root == NULL){
    return false;
  }else{
    //call node.h search operation
    return root->search(value);
  }

}

//Remove operation
//@param value: data removing
//

bool BST::remove(int value){

  //check if empty
  if(root == NULL){
    return false;
  }else{
    //if in root, make a alternative root of 0 
    if(root->getData() == value){
      Node altRoot(0);
      //set alt root to root making it the root now
      altRoot.setNextLeft(root);
      //make new node named removeNode and equal it to root->removed value
      Node* removedNode = root->remove(value, &altRoot);
      //root equals altRoot left node
      root = altRoot.getLeft();
      
      //if removed is not NULL
      if(removedNode != NULL){
	//delete the remove Node
	delete removedNode;
	return true
	return true;
      
      }else{
	//no node removed
      return false;
      }
    }
    else{
      //make removed Node = root->remove
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
  
