#include "Node.h"


void append(Node* head, char x){

  Node* curr = head;
  Node* newNode = new Node(x);

  if(curr == NULL){
    
    newNode->setNext(head);
    head = newNode;

  }

  //else go all the way to the end
  while(curr->getNext() != NULL){

    curr = curr->getNext();
    
  }
  
  curr->setNext(newNode);
  
}


int main(){
  
  Node* head = new Node();
  
  string name = "khillip";
  
  int i = 0;
  while(name[i]){
    
    append(head, name[i]);
    
    i++;
  }

  Node* curr = head;
  while(curr != NULL){

    cout << curr->getLetter() <<endl;
    curr = curr->getNext();

  }

  

      
  

  return 0;
}

