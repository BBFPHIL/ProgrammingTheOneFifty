#include "Stack.h"

Stack::Stack(){

  top = NULL;

}

Stack::Stack(Node* newNode){

  top = newNode;

}

Stack::~Stack(){

}

void Stack::push(int data){
  
  Node* newNode = new Node(data);

  //Make next top making top second
  newNode->setNext(top);

  //Make top ptr point to newNode
  top = newNode;

}


bool Stack::isEmpty(){

  bool flag = true;
  
  if(top != NULL){
    flag = false;
  }

  return flag;

}


int Stack::pop(){

  Node* tmp;
  
  if(isEmpty()){
    
    cout << "Empty stack, can not pop"<<endl;
    
  }else{
    
    tmp = top;
    
    top = top->getNext();
    
  }
  
  return tmp->getNum();
  
}

void Stack::display(){
  
  Node* curr = top;
  
  while (curr != NULL){
  
  cout << curr->getNum() << " ";
  curr = curr->getNext();
  }

  cout << endl;

}

int Stack::peek(){

  return top->getNum();

}
