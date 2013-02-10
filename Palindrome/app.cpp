//Phillip Walker
//Finding if item is palindrome or not
//

#include "Stack.h"

//isPalindrome
//@param head: list start
//

bool isPalindrome(Node* head){

  Node* fast = head;
  Node* slow = head;
  
  Stack* firstHalf;
  firstHalf = new Stack();

  //traverse and push slow to stack
  while(fast != NULL && fast->getNext() != NULL){
    
    firstHalf->push(slow->getData());
    slow = slow->getNext();
    fast = fast->getNext()->getNext();
  
  }
  
  //skip middle of palindrome
  if(fast != NULL){
    slow = slow->getNext();
  }
  
  //traverse and compare stack to second half of list
  while(slow != NULL){
    
    char top = firstHalf->pop();
    
    if(top != slow->getData()){
      return false;
    }

    slow = slow->getNext();
    
  }
  
  return true;
  
}



int main(){

  //Quick vars to make list
  string pal = "racecar";
  Node* head = new Node('r'); 
  Node* newNode;
  Node* curr = head;

  //Build palindrome list
  cout << head->getData()<<endl;
  for(int i=1; i<pal.length(); i++){
    newNode = new Node(pal[i]);
    curr->setNext(newNode);
    curr = curr->getNext();
    cout << curr->getData()<<endl;
  }

  //is palindrome?
  if(isPalindrome(head)){
    cout << "This is a palindrome"<<endl;
  }else{
    cout << "This is not a palindrome"<<endl;
  }
  

  return 0;
} 
