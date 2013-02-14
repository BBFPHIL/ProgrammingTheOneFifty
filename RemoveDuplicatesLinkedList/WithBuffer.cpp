//Phillip Walker
//Objective(s): Create a double linked list with nodes assembling a word
//Remove duplicate letters from the linked list word
//Runs in O(n) because it visits each element in the list once... hence linear
//

#include "Hashtable.h"
#include "Node.h"
#include "List.h"

void deleteDups(List* list){ 
  
  //variables
  Node* n;
  n = list->getHead();
  HashTable *table = new HashTable();
  Node *prev = n;
  int key = 0;

  while(n->getNext() != NULL){
    
    //convert char to int
    key = n->getLetter() - '0';
    
    if(table->get(key) == 2){

      //Delete Duplicate
      n->getNext()->setPrev(n->getPrev());//set n next to n prev
      n->getPrev()->setNext(n->getNext());//set n prev to n next

    }else{
      
      table->put(key, 2);
                  
    }
    
    //iterate 
    n = n->getNext();
  
  }
}

//-------------TEST--------------

int main(){

  //Variables / Objects / ptrs
  Node* newNode;
  List* dupeList;
  dupeList = new List;
  
  char follow[] = "followup";
  string follow_str(follow); // Cnvrt to string - dynamic

  //Make D.D.L
  for(int i=0; i<follow_str.length(); i++){
    
    //Test bad memory alloc
    try{
      newNode = new Node(follow[i]);
    }catch(bad_alloc&c){
      cerr << "Bad memory allocation line 46"<<endl;
    }
    //cout << newNode->getLetter();
    dupeList->append(newNode);
    
  }
  
  //Testing linked list
  Node* curr =  NULL;
  curr = dupeList->getHead();

  //---Test Double Linked List populated ---
  cout << "Original Double Linked List: ";
  dupeList->display();
  cout << endl;

  //------ TEST -------- 
  //Remove Duplicates (L) from list
  //begin @ head
  curr = dupeList->getHead();
  
  cout << "Deleting Duplicates!" <<endl;
  deleteDups(dupeList);
  
  cout << "Updated Double Linked List: " <<endl;
  dupeList->display();
  cout << endl;
    
  return 0;
}
