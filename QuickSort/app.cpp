#include "List.h"
#include <stdlib.h>


Node* partition(Node* node, int x){

  Node* beforeStart = NULL;
  Node* afterStart = NULL;
  Node* beforeEnd = NULL;
  Node* afterEnd = NULL;

  while(node != NULL){
    if(node->getNum() < x){

      if(beforeStart == NULL){

	beforeStart = node;
	cout << beforeStart->getNum() << " **** " <<endl;
	beforeEnd = beforeStart;

      }else{

	beforeEnd->setNext(node);
	beforeEnd = node;
	cout << beforeEnd->getNum()<<endl;

      }
    }else{
      
      if(afterStart == NULL){
	
	afterStart = node;
	afterEnd = afterStart;
	cout << afterStart->getNum() << endl;

      }else{

	afterEnd->setNext(node);
	afterEnd = node;
	cout << afterEnd->getNum() << endl;
	
      }
    }

    node = node->getNext();

  }
  
  cout << 8 << endl;
  if(beforeStart = NULL){
    cout << 9 << endl;
    return afterStart;
  }

  cout << beforeStart->getNum() <<endl;

  cout << 10 << endl;
  
  
  
  //Merge together
  beforeEnd->setNext(afterStart);
  cout << beforeStart->getNum() <<endl;
  cout << "#"<<endl;
  return beforeStart;
  


}


List* partitionMerge(List* list, int x){
  
  //For nodes < x 
  List* beforeList = new List();

  //For nodes > x
  List* afterList = new List();
  
  //dataList node start
  Node* curr = NULL;
  curr = list->getHead();
  
  //cout <<" === " <<curr->getNum()<<endl;
  //cout << "*"<<endl;
  while(curr->getNext() != NULL){
    cout << "^" << curr->getNum()<<endl;
    //cout << "**"<<endl;
    if(curr->getNum() < x){
      
      //insert beforeList end
      beforeList->append(curr);
      //cout<<" **>> " << beforeList->getHead()<< endl;
      
    }else{
      
      afterList->append(curr);
      
    }
    cout << ")"<<endl;
    //cout << list->getHead()->getNext()->getNext()->getNext()->getNum()<<endl;
    curr = curr->getNext();
    cout << "Updated"<<curr->getNum()<<endl;

  }
  
  cout << "*****"<<endl;
  if(beforeList == NULL){
    return afterList;
  }

  list->getTail()->setNext(afterList->getHead());
  return beforeList;

}



int main(){

  List* dataList;
  dataList = new List();
    
  //Make list
  Node* newNode;
  int i = 0;
  int randomNum=0;
  
  //Create List w/ rand numbers
  while(i < 7){
    randomNum = rand() % 100;//Create random number
    newNode = new Node(randomNum);
    dataList->append(newNode);
    i++;
    
  }
  
  //Check List
  cout << "Original List: " <<endl;
  dataList->display();
  
  //QuickSort
  Node* newListHead;
  
  //newListHead = partition(dataList->getHead(), 58);
  
  partitionMerge(dataList, 58);
  
  //cout << newListHead->getNum()<<endl;
  

  return 0;
}

