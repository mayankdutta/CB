#include <iostream>
using namespace std;



int main() {

  int arr[] = {1, 2, 3, 3, 4, 9};

  int Size = sizeof(arr) / sizeof(arr[0]);


  int decrement;
  for (int i = 1; i < Size; i++) {
    if (arr[i - 1] <= arr[i]) {

    } else {
      decrement = 1;
      break;
    }
  }

  if (decrement == 1) {
    cout << "Not sorted\n";
  } else {
    cout << "sorted\n";
  }
}
