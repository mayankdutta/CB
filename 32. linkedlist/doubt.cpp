

#include <iostream>
using namespace std;

int main() {
  int *arr = new int[5];

  // int arr[5];
  arr[0] = 0;
  arr[1] = 1;
  arr[2] = 3;
  arr[3] = 4;
  arr[4] = 5;

  // Deep copy
  int *brr = new int[5];
  for (int i = 0; i < 5; i++) {
    brr[i] = arr[i];
  }

  // shallow copy
  int *crr = &arr[0];


























  int a[5];
  a[0] = 1; 
  a[1] = 4; 
  a[2] = 5; 
  a[3] = 6; 
  a[4] = 9; 


  int b[5]; 

  // deep copy 
  for (int i = 0; i < 5; i++) {
    b[i] = a[i];
  }


  // shallow copy 
  int *c = a;






}
