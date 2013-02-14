#include "Hashtable.h"

//Default constructor
//

HashTable::HashTable(){
  
  table = new HashEntry*[TABLE_SIZE];
  for (int i = 0; i < TABLE_SIZE; i++){
    table[i] = NULL;
  }
  
}

//Default Destructor
//

HashTable::~HashTable() {

  for (int i = 0; i < TABLE_SIZE; i++){
    if (table[i] != NULL){
      delete table[i];
    }
  }
  delete[] table;
  
}


//Get key
//@param key: key for hash retrieval 
//

int HashTable::get(int key){
  
  //make has modulo
  int hash = (key % TABLE_SIZE);

  //Check if occupied but not the right key -> check until right
  while (table[hash] != NULL && table[hash]->getKey() != key){
    hash = (hash + 1 ) % TABLE_SIZE;
  }
  
  // if empty return -1
  if(table[hash] == NULL){
    return -1;
    
  }else{
    // return key
    return table[hash]->getValue();
  }
  
}

//Put key value
//Store value in hash table
//@param key: key for hash func
//@param value: value to store
//

void HashTable::put(int key, int value){
  
  //int key = k - '0'; // cnvrt ascii to int

  int hash = (key % TABLE_SIZE);
  
  while (table[hash] != NULL && table[hash]->getKey() != key){
    hash = (hash + 1) % TABLE_SIZE;
  }
  if(table[hash] != NULL){
    delete table[hash];
  }
  
  table[hash] = new HashEntry(key, value);
  
}  

