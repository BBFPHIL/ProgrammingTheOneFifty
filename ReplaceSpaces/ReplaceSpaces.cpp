#include <iostream>
#include <string>

using namespace std;


void replaceSpaces(char* str, int length){
  
  int spaceCount = 0;
  int newLength; 
  int i=0;

  //Count spaces
  for(i = 0; i<length; i++){
    
    if(str[i] == ' '){
      spaceCount++;
    }
    
  }//for

  //new len
  newLength = length+spaceCount*2;
  
  str[newLength] = '\0';//begin far right
  for(i=length-1; i>=0; i--){//begin @ sentence start go to beginning
    if(str[i] == ' '){
      str[newLength -1] = '0';//null term end
      str[newLength -2] = '2';
      str[newLength -3] = '%';
      newLength = newLength - 3; // shrinks by x3ea
    }else{
      str[newLength -1] = str[i]; // copy regular char
      newLength = newLength -1; // shrink by 1 char
    }
  }
}


int main(){

  //sentence
  char sentence[] = "Dog jumped very high!";

  replaceSpaces(sentence, 21);
  
  cout << sentence <<endl;


}
