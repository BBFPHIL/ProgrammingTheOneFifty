//Phillip Walker
//Obejctive(s): Check if a string has all unique characters

#include <iostream>
#include <string>

using namespace std;

//Check string for all unique chars
//@param str: string
//

bool isUniqueChars(string str){

  //check max chars
  if(str.length() > 256){
    return false;
  }

  //create hash table
  bool *set_char = new bool[256];

  //length of str
  for(int i=0; i<str.length(); i++){
  
    //key
    int val = str[i];
    
    //if already true
    if(set_char[val]){
      return false;
    }
    //record char
    set_char[val] = true;
    
  }
  
  //No false, true
  return true;

}


//---------TEST-------------

int main(){

  //Testing
  string str = "abdshe";
  
  cout << "Result: " << isUniqueChars(str) << endl;


  return 0;
}
