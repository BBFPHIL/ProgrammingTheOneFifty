//Phillip Walker
//Objective(s): Create a double lined list with nodes assembling a word
// and remove duplicate letters from list
//Runs in Polynomial Time! Worst than with Hashtable O(n) linear time
//

#include <iostream>
#include "Node.h"
#include "List.h"

void deleteDups(Node* head){

  //If empty stop
  if(head == NULL) return;
  
  Node* curr = head;

  //While not end list
  while(curr != NULL){
    
    //remove nodes via curr runner match
    Node* runner = curr->getNext();//start runner at node after curr
    while(runner != NULL){
      //if same letters
      if(runner->getLetter() == curr->getLetter()){

	//Delete the node
	curr->setNext(runner->getNext());
	runner->getNext()->setPrev(curr);
	runner = runner->getNext()->getNext();//iterate runner
	
      }else{
	runner = runner->getNext();
      }
      
    }//while runner
    curr = curr->getNext();
  }//while curr

}

//---------TEST----------

int main(){
  
  Node* head;
  Node* newNode;
  List* dupeList;
  dupeList = new List;
  
  char follow[] = "followup";
  string follow_str(follow);
  
  //Make DDL
  for(int i=0; i<follow_str.length(); i++){

    //Make new node and alloc
    try{
      newNode = new Node(follow[i]);
    }catch(bad_alloc&c){
      cerr << "Bad memory allocation for List node"<<endl;
    }
    
    //Add to list
    dupeList->append(newNode);

  }

  //Show orig string
  cout << "Original string: "<<endl;
  dupeList->display();
  
  //Start at head
  head = dupeList->getHead();
  //delete func O(n^2) :-(
  deleteDups(head);
  
  //New string
  cout << "Updated string: " <<endl;
  dupeList->display();


  return 0;
}
