#ifndef BST_H
#define BST_H

#include "Node.h"


class BST{

 private:

  //Tree root
  Node* root;

 public:
  
  //Default constructor
  BST();

  //Add node
  bool add(int);
  
  //Search node
  bool search(int);

  //remove node
  bool remove(int);

  Node* getRoot();

};
#endif
