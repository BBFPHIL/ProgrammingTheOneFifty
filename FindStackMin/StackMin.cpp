#include "StackMin.h"


StackMin::StackMin(){
  
  stackTwo = new Stack();

}

int StackMin::min(){

  if(stackTwo->isEmpty()){
    return NULL;
  }else{
    return stackTwo->peek();
  }

}

void StackMin::push(int value){
  
  if(value <= min()){
    stackTwo->push(value);
  }
  Stack::push(value);

}

int StackMin::pop(){

  int value = Stack::pop();
  if(value == min()){
    stackTwo->pop();
  }
  return value;

}


