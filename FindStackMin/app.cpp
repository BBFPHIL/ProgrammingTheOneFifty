//#include "Stack.h"
#include "StackMin.h"

//----------- TEST ---------------
int main(){
  

  StackMin *stackTable = new StackMin;

  stackTable->push(12);
  stackTable->push(4);
  stackTable->push(20);

  cout << stackTable->pop() << endl;
  cout << stackTable->pop() <<endl;
  cout <<stackTable->pop() <<endl;

  cout << stackTable->min()<<endl;

  return 0;

}
