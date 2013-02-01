#include "Node.h"

//insert to single linked list
Node* insert(Node* head, int data){
  
  Node* curr = head;
  Node* newNode = new Node(data);

  //handle head case
  if(newNode->getData() <= head->getData()){
    cout << 'a'<<endl;

    newNode->setNext(head);
    head = newNode;

  }else{

    while(newNode->getData() > curr->getData()){
      
      curr = curr->getNext();
      
    }
        
    //set newNode to next
    newNode->setNext(curr->getNext());
    curr->setNext(newNode);
    
  }
  return head;
}


void append(Node* head, int data){

  Node* curr = head;
  Node* newNode;

  while(curr->getNext() != NULL){

    curr = curr->getNext();
    
  }

  try{
    newNode = new Node(data);
  }catch(bad_alloc& c){
    cerr << "Bad memory allocation" << endl;
  }
  
  curr->setNext(newNode);

}


int main(){

  Node* head; 

  head = new Node(5);

  cout << "Data in node is: " << head->getData() <<endl;

  //Create a single linked list.
  int arr[5] = {6,7,8,9,10};

  int i = 0;
  while(arr[i]){
    cout << 11<<endl;
    append(head, arr[i]);
    i++;

  }

  cout << "head: "<<endl;
  head = insert(head, 4);
  
  cout << "First in list: " << head->getData() <<" 2n: "<< head->getNext()->getData() << " 3rd: " << head->getNext()->getNext()->getData() <<endl;


  return 0;

}
