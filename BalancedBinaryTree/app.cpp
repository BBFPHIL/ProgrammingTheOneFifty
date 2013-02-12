//Phillip Walker
//Checking Balancing Binary Trees
//02/12/2013
//

#include "BST.h"
#include <math.h>

//Find bigger of two numbers
//

int findBigger(int a, int b){

  int answer = 0;

  //a is larger
  if(a > b){
    answer = a;
  }else if(a < b){
    //b is larger
    answer = b;
  }else{
    //same sizes
    answer = a;
  }

  return answer;
  

}

//Tree Heigh Check
//@param root: tree root;
//

int heightCheck(Node* root){

  if(root == NULL){
    return 0; // zero height
  }

  //count left height
  int leftHeight = heightCheck(root->getLeft());
  if(leftHeight == -1){
    return -1;
  }
  
  //
  int rightHeight = heightCheck(root->getRight());
  if(rightHeight == -1){
    return -1;
  }

  //Check if curr node is bal
  int heightDiff = leftHeight - rightHeight;
  if(abs(heightDiff) > 1){
    return -1;
  }else{
    //return height
    return findBigger(leftHeight, rightHeight)+1;
  }
}


int main(){

  BST treeOne;
  
  //Build tree!
  treeOne.add(50);
  treeOne.add(60);
  treeOne.add(20);
  treeOne.add(75);

  //Check if balanced or not
  cout << "Checking if treeOne is balanced or not... "<<endl;

  //Return results
  if(heightCheck(treeOne.getRoot())){
    cout << "The tree is balanced " <<endl;
  }else{
    cout << "Tree is not balanced"<<endl;
  }

  return 0;
} 
