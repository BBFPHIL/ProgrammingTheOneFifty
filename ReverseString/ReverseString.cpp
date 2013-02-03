#include <iostream>
#include <string>

using namespace std;

//Reverse string
//Objective(s): Reverse a string via pointer matching
//@param str: String to reverse
//

void reverseString(char* str){

  char* end = str; // same str but end start
  char tmp;

  if(str){ // exists
    
    while(*end){
      ++end;
    }
    --end;//now end str is at pos n-1
  
    //swap pointers until pointers match
    while(str<end){

      tmp = *str; // tmp letter pointer
      *str++ = *end;
      *end-- = tmp;
      
    }
  }
}

//----------TESTING------------

int main(){

  char str[] = "dheg&dh3(";
  
  cout << "Before reversed: " << str <<endl;
  
  reverseString(str);

  cout << "After reversed: " << str <<endl; 
  
  return 0;

}
