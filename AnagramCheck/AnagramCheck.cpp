//Phillip Walker
//Objective(s): Check if two strings are permutations of each other
//

#include <iostream>
#include <string>

using namespace std;

//Permutation
//Each string has same letters and occurences of letters
//@param a: first string
//@param b: second string
//

bool permutation(string a, string b){

  //Same length?
  if(a.length() != b.length()){
    return false; //Not perm if not
  }

  int *letters = new int[256]; // Assumption of char set
  
  char *a_arr = (char*)a.c_str();//cnvrt str to char
  
  //Track char occurences
  for(*a_arr; *a_arr != '\0'; *a_arr++){
    
    letters[*a_arr]++;

  }
  
  //Compare a w/ b
  for(int i=0; i<b.length(); i++){
    
    int c = (int)b[i];//ascii to int
    if(--letters[c] < 0){//if not atleast 1, disqualify

      return false;

    }
  }

  return true;
  
}



//----------TEST-----------

int main(){

  //Words
  string a = "apple";
  string b = "aplep";
  
  //true if permutation 
  if(permutation(a,b) == true){
    cout << "This is a permutation!"<<endl;
  }else{
    cout << "This is NOT a permutation"<<endl;
  }
 
  return 0;

}
