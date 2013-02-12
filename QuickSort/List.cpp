#include "List.h"

List::List(){

  head = NULL;
  
  tail = NULL;

}

List::~List(){


}

void List::appendToTail(Node *newNode){
  cout << "1a"<<endl;
  //New node next NULL 
  newNode->setNext(NULL);
  cout << "1b" << endl;
  //new Node prev is now tail
  newNode->setPrev(tail);
  cout << "1bb"<<endl;
  //tail to newNode
  tail->setNext(newNode);
  cout << "1c"<<endl;
  //tail now newNode
  tail = newNode;
  cout << "1d"<<endl;
}

//appendToHead
//Appends new Node to front of list
//@param newNode: Node to add
//

void List::appendToHead(Node *newNode){

  if(isEmpty()){
    cout << "isEmpty: " << newNode->getNum()<<endl;
    
    head = newNode;
    cout << "headL " << head->getNum() <<endl;

    tail = newNode;
    
  }else{

  //Old head to newNode
  head->setPrev(newNode);
  
  //newNode to fmr head
  newNode->setNext(head);
  
  //head to newNode
  head = newNode;

  //head to NULL
  newNode->setPrev(NULL);
  
  }

}

//isEmpty
//Checks if List is empty
//

bool List::isEmpty(){

  if(tail == NULL && head == NULL){
    
    return true;

  }

  return false;
   
}

//Append newNode
//Add a new node to list
//@param newNode: Appending Node
//

void List::append(Node *newNode){

  if(isEmpty()){
    
    cout << "EMPTY" <<endl;
    appendToHead(newNode);
    
  }else{
    cout << "NOT EMPTY" <<endl;
    appendToTail(newNode);

  }

}

//Get list head
//

Node* List::getHead(){

  return head;

}    

//Get list tail
//
Node* List::getTail(){
  
  return tail;

}

//Display list
//

void List::display(){

  Node* curr = head;

  while(curr != NULL){

    cout << curr->getNum() <<endl;
    curr = curr->getNext();
    
  }  

}

