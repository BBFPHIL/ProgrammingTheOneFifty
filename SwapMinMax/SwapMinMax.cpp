#include <iostream>
#include <string>

using namespace std;

//Find array length
//@param arr: array 
//

int arrayLen(int* arr){

  int i = 0;
  while(arr[i]){
    
    i++;
    
  }
  
  return i;
  
}

//Find Min
//@param arr: array 
//

int findMin(int* arr){

  int minIndex = 0;
  
  for(int i=0; i<arrayLen(arr); i++){
    
    if(arr[i] < arr[minIndex]){
      
      minIndex = i;
      
    }
  }
  
  return minIndex;
  
}


//Find Max
//@param arr: array
//

int findMax(int* arr){
  
  int maxIndex = 0;

  for(int i=0; i<arrayLen(arr); i++){

    //If curr larger max
    if(arr[i] > arr[maxIndex]){
      
      //save index cont. 
      maxIndex = i;
      
    }
  }
  
  return maxIndex;

}

//Swap Min w/ Max
//@param arr: array 
//@param min: min element
//@param max: max element
//
void swapMinMax(int* arr, int min, int max){
  
  int temp = arr[min];
  arr[min] = arr[max];
  arr[max] = temp;

}

int main(){

  //Global Vars
  int arr[5]= {9,3,1,2,8};
  int arrLength = arrayLen(arr);
  
  //Swap Min and Max Element
  swapMinMax(arr, findMin(arr), findMax(arr));
  
  cout << "Results: "<<endl;

  //Display Results
  for(int i = 0; i<arrLength; i++){
    
    cout << arr[i];

  }
  
  return 0;

}
