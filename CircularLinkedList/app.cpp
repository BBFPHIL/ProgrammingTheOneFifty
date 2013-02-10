#include "Node.h"

Node* BeginCircularList(Node* head){

  Node* slow = head;
  Node* fast = head;

  //find meeting point
  //LOOPSIZE - k steps into list
  while(fast != NULL && fast->getNext() != NULL){//Go forever or until...
    slow = slow->getNext();
    fast = fast->getNext()->getNext();
    
    if(slow == fast){//collision!!
      break;
    }
  }
  
  //error check - no circle
  if(fast == NULL || fast->getNext() == NULL){
    return NULL;
  }

  //Move slow to head, keep fast at meeting point. 
  //each are k steps from loop start if they move at same pace, 
  //they must meet at loop start!
  slow = head;
  while(slow != fast){
    slow = slow->getNext();
    fast = fast->getNext();
  }

  //Both now at start of loop
  return fast;
  
}

int main(){

  Node* head;
  Node* newNode;
  Node* curr;

  //Create a circular list quickly
  head = new Node(2);
  
  //add node
  newNode = new Node(3);
  head->setNext(newNode);

  //add node
  newNode = new Node(4);
  head->getNext()->setNext(newNode);

  //Connect tail to head - now circular
  head->getNext()->getNext()->setNext(head);

  Node* loopStart;
  loopStart = BeginCircularList(head);
  
  cout << "LoopStart: " << loopStart->getNum()<<endl;

  return 0;
} 
