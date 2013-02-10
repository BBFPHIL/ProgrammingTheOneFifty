#include "Node.h"


bool deleteNode(Node* n){

  if(n == NULL || n->getNext() == NULL){
    return false;
  }

  //get next and save
  Node* next = n->getNext();
  
  //save n next data to n data
  n->setData(next->getData());

  //skip the n next node to delete it
  n->setNext(next->getNext());
  
  return true;

}

int main(){

  Node* head;
  Node* newNode;
  head = new Node(2);
  Node* curr = head;
  int v1=0;
  
  
  cout << head->getData()<<" ";
  for(int i=0; i<6; i++){
    
    v1 = rand() % 100; 
    newNode = new Node(v1);
    curr->setNext(newNode);
    curr = curr->getNext();
    cout << curr->getData()<<" ";

  }
  
  curr = head;
  //Traverse until middle point
  while(curr->getData() != 73){
    curr=curr->getNext();
  }
  
  if(deleteNode(curr)){
    cout << curr->getData() << " Deleted!"<<endl;
  }else{
    cout << "Failure"<<endl;
  }

  
  return 0;
}
