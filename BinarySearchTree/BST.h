#ifndef BST_H
#define BST_H

#include "Node.h"


class BST{

 private:
  
  Node* root;

 public:
  
  BST();

  bool add(int);

  bool search(int);

  bool remove(int);

};
#endif
