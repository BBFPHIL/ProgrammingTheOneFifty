#include "BST.h"

//---------TESTING ------------
int main(){

  BST treeOne;

  treeOne.add(70);

  treeOne.add(50);

  treeOne.add(80);

  int x=80;
  
  //Begin
  cout << "Finding... " <<x<<endl;
    
  //If we found X say so!
  if(treeOne.search(x)){
    cout << "We found... "<<x<<endl;
  }else{
    cout << x << " not found!"<<endl;
  }

  return 0;

}
