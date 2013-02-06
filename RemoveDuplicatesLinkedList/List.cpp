#include "List.h"

List::List(){

  head = NULL;
  
  tail = NULL;

}

List::~List(){


}

void List::appendToTail(Node *newNode){

  //New node next NULL 
  newNode->setNext(NULL);
  
  //new Node prev is now tail
  newNode->setPrev(tail);
  
  //tail to newNode
  tail->setNext(newNode);
  
  //tail now newNode
  tail = newNode;

}

//appendToHead
//Appends new Node to front of list
//@param newNode: Node to add
//

void List::appendToHead(Node *newNode){

  if(isEmpty()){
    
    head = newNode;
    tail = newNode;

  }

  //Old head to newNode
  head->setPrev(newNode);
  
  //newNode to fmr head
  newNode->setNext(head);
  
  //head to newNode
  head = newNode;

  //head to NULL
  newNode->setPrev(NULL);

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

    appendToHead(newNode);

  }
  
  appendToTail(newNode);

}

//Get list head
//

Node* List::getHead(){

  return head;

}    

//Display list
//

void List::display(){

  Node* curr = head;

  while(curr != NULL){

    cout << curr->getLetter();
    curr = curr->getNext();
    
  }  

}

