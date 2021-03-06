#include "Node.h"

//Phillip Walker
//Basic Single Linked List 
//Deomnstrate (1) Insert operation and (2) Delete operation
//

//insert to single linked list
//@param head: first node
//@aparam data: data to insert numerically
//

Node* insert(Node* head, int data){
  
  Node* curr = head;
  Node* newNode = new Node(data);

  //handle head case
  if(newNode->getData() <= head->getData()){
    
    //newNode set to head node
    newNode->setNext(head);
    //head now newNode
    head = newNode;

  }else{

    //Find first node > newnode
    while(newNode->getData() > curr->getData()){
      
      //iterate list
      curr = curr->getNext();
      
    }
        
    //set newNode to next
    newNode->setNext(curr->getNext());
    //set node before newnode to newnode
    curr->setNext(newNode);
    
  }
  return head;
}

//Appending function
//@param head: first node of list
//@param data: data to add
//

void append(Node* head, int data){

  Node* curr = head;
  Node* newNode;

  //Go to end 
  while(curr->getNext() != NULL){

    //Iterate list
    curr = curr->getNext();
    
  }

  //memory alloc check
  try{
    newNode = new Node(data);
  }catch(bad_alloc& c){
    cerr << "Bad memory allocation" << endl;
  }
  
  //set tail to newNode
  curr->setNext(newNode);

}

//DeleteNode
//Objective(s): Delete specific data
//@param: head of list
//@param: data to delete
//

Node* deleteNode(Node* head, int data){

  Node* curr = head;
  Node* tmp;

  if(head->getData() == data){
    
    tmp = head;
    head = curr->getNext();
    curr = head;
    
    cout << "Deleted Head"<<endl;

  }
  else{
    
    while(curr->getNext()->getData() != data){
      
      curr = curr->getNext();

    }
    
    //curr is before deleting node
    //set node before to skip delete
    curr->setNext(curr->getNext()->getNext());
    delete curr->getNext();

  }//if
    

  return head;

}

//--------------TEST---------------

int main(){

  //First node ptr
  Node* head; 

  //Start list at 5
  head = new Node(5);

  cout << "Data in node is: " << head->getData() <<endl;
  
  //Data of list
  int arr[5] = {6,7,8,9,10};

  //Build list
  int i = 0;
  while(arr[i]){
    
    append(head, arr[i]);
    i++;

  }

  //Current list
  cout << "Before inserting 4"<<endl;
  cout << "First in list: " << head->getData() <<" 2n: "<< head->getNext()->getData() << " 3rd: " << head->getNext()->getNext()->getData() <<endl;

  //Insert new data
  head = insert(head, 4);
  
  //Show results
  cout << "First in list: " << head->getData() <<" 2n: "<< head->getNext()->getData() << " 3rd: " << head->getNext()->getNext()->getData() <<endl;

  //Delete 6
  head = deleteNode(head, 6);
  
  //Show results
  cout << "First in list: " << head->getData() <<" 2n: "<< head->getNext()->getData() << " 3rd: " << head->getNext()->getNext()->getData() <<endl;
  
  //Delete the head
  head = deleteNode(head, 4);

  cout << "First in list: " << head->getData() <<endl;
  cout << " 2nd: "<< head->getNext()->getData() <<endl;
  cout << " 3rd: " << head->getNext()->getNext()->getData() <<endl;
  
  return 0;

}
