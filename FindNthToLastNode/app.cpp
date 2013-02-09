#include "Node.h"

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

//FindKthNode
//Algo find kth to ast element in singly linked list
//Ago takes O(n) => linear
//@param head: list start node
//@param k: find k nodes from end
//

Node* kthToLast(Node* head, int k){
  
  if(k<=0) return NULL;

  //start both at head
  Node* ptrOne = head;
  Node* ptrTwo = head;

  //Move ptrTwo ahead k 
  for(int i = 0; i < k - 1; i++){
    if(ptrTwo == NULL)return NULL;//error check
    ptrTwo = ptrTwo->getNext();
  }
  if(ptrTwo == NULL)return NULL;

  //Move ptrOne & ptrTwo at same pace
  //ptrTwo hits end, ptrOne is at kth from last node
  while(ptrTwo->getNext() != NULL){
    ptrOne = ptrOne->getNext();
    ptrTwo = ptrTwo->getNext();
  }
  
  return ptrOne;

}


int main(){

  //Variables / Objects // Ptrs
  Node* head; 
  head = new Node(1);
  
  //Dynamically allocate array
  int *arr = new int[5];
  
  //Add to array & make list
  for(int i = 0; i<5; i++){
    arr[i] = i;
    append(head, arr[i]);
  }

  //Check list
  Node* curr; 
  curr = head;
  
  while(curr->getNext() != NULL){
    cout << curr->getNum()<<" ";
    curr = curr->getNext();
  }
  
  cout << curr->getNum()<<endl;//Show last

  cout << "Finding " << 3 << " node from last node"<<endl;
  //Find kth from end
  Node* answer;
  answer = kthToLast(head, 3);
  
  //Result
  cout << "Answer: " << answer->getNum()<<endl;
  
  

}
