//Phillip Walker
//Compresssing a string
//Objective(s): Create a compressed string in the following format
// a3r2i1 for aaarri. Avoid compression string larger than orig string
//pitfall

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

//Converting integer to string
//counting purposes
//@param number: number converting

string itoc(int number){
  
  string s;
  stringstream out;
  out << number; 
  s = out.str(); 

  return s;
}


//countCompression
//@param str: String compressing
//

int countCompression(string str){

  int count = 1;
  char last = str[0];
  int size = 0;

  //
  for(int i = 0; i<str.length(); i++){
    if(str[i] == last){
      count++;
    }else{
      last = str[i];
      size += 1 + itoc(count).length();
      count = 1;
    }
  }
  size += 1 + itoc(count).length();
  return size;

}

//Size of the array

int arrayMaxSize(char* arr){

  int i = 0;
  while(arr[i]){
    i++;
  }

  return i+1;

}


//setChar()
//Update index with repeated characters
//

int setChar(char* array, char c, int index, int count){
  array[index] = c;
  index++;
  
  //int --> string
  string tmpCnt = itoc(count);
  
  //string to char*
  char *cnt = (char*)tmpCnt.c_str();
  

  //iterating through char*
  for(*cnt; *cnt != '\0'; *cnt++){
    array[index] = *cnt;
    index++;
  
  }
  return index;

}

//Compression
//Objective(s): compress the string while retaining number of char unique occurences
//@param str: string to compress

string compress(string str){
  
  //if compression makes > string
  int size = countCompression(str);
  if (size >= str.length()){
    return str;
  }

  char *array = new char[size];
  int index = 0;
  char last = str[0];
  int count = 1;
  
  for(int i = 1; i<str.length(); i++){
    if(str[i] == last){
      count++;
    }else{
      /*Update repeated char count*/
      index = setChar(array, last, index, count);
      last = str[i];
      count = 1;
    }
  }
  
  index = setChar(array, last, index, count);
 
  string s(array);
  
  return s;
  
}


int main(){

  string str = "phillip";

  cout << compress(str) <<endl;
    
  return 0;

}


    

