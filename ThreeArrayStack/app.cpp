//Phillip Walker
//Objective(s): Creating three stacks from one array with fixed division
//

#include <iostream>

using namespace std;

//Gobal Variables :(
int stackSize = 100;
int stackPtr[] = {-1, -1, -1};
int *buffer = new int[stackSize*3];

//absTopStack
//Get absolute top of stack'
//@param stackNum: stack top
//

int absTopStack(int stackNum){
  
  int index = stackNum;
  return stackNum * stackSize+stackPtr[stackNum];

}

//push
//Push another item on top of the stack
//@param stackNum: index to push
//@param val: item to stack
//

void push(int stackNum, int val){

  if(stackPtr[stackNum] +1 >= stackNum){
    cout << "End of Stack ... not possible to push"<<endl;
  }

  stackPtr[stackNum]++;
  buffer[absTopStack(stackNum)] = val;

}

//Pop function
//Pops top element off stack
//@param stackNum: element to pop
//

int pop(int stackNum){
  
  if(stackNum == -1){
    cout << "Empty Stack"<<endl;
  }

  //save top value
  int value = buffer[absTopStack(stackNum)];
  //Empty top stack loc
  buffer[absTopStack(stackNum)] = 0; 
  stackPtr[stackNum]--;

  return value;

}

//Peek top
//Check stack top
//

int peek(int stackNum){
  
  int index = stackNum; 

  return buffer[index];

}

//isEmpty
//Checks if stack empty
//@param stackNum: index
//

bool isEmpty(int stackNum){
  
  if(stackPtr[stackNum] == -1){
    return true;
  }else{
    return false;
  }
  

}

//-----------TEST-----------

int main(){

  push(1, 65);

  cout << pop(1)<<endl;

  push(2, 55);
  
  cout << pop(2)<<endl;

  return 0;
}
 
