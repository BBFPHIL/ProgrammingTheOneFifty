#include "StackMin.h"

//Default Constructor
//

StackMin::StackMin(){
  
  stackTwo = new Stack();

}

//Find minimum element
//

int StackMin::min(){

  if(stackTwo->isEmpty()){
    return NULL;
  }else{
    return stackTwo->peek();
  }

}

//Push data top
//

void StackMin::push(int value){
  
  if(value <= min()){
    stackTwo->push(value);
  }
  Stack::push(value);

}

//pop off top
//

int StackMin::pop(){

  int value = Stack::pop();
  if(value == min()){
    stackTwo->pop();
  }
  return value;

}


