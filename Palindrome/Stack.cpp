#include "Stack.h"

//Default Constructor
Stack::Stack(){
  
  top = NULL;

}

//Constructor
//

Stack::Stack(Node* newNode){
  
  top = newNode;

}

Stack::~Stack(){

}

//isEmpty
//Check if stack empty true or not false
//

bool Stack::isEmpty(){

  bool flag = false;

  if(top == NULL){
    flag = true;
  }

  return flag;

}

//Push to top stack
//@param x: data to push
//

void Stack::push(char x){
  
  Node* newNode;
  
  newNode = new Node(x);
  
  //push curr top to 2nd top
  newNode->setNext(top);

  // top to newNode
  top = newNode;

}

//pop node
//

char Stack::pop(){

  Node* tmp;
  
  if(isEmpty()){
    
    cout << "Stack is empty ERROR"<<endl;

  }
  
  tmp = top;
  
  top = top->getNext();

  return tmp->getData();

}
    
//Display
//

void Stack::display(){
  
  Node* curr = top;

  while(curr != NULL){
    
    cout << curr->getData()<< " ";
    curr = curr->getNext();

  }

  cout << endl;
}

//Peek top
//

char Stack::peekTop(){
  
  return top->getData();

}
