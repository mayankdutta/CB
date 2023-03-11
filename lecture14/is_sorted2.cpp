
#include <iostream>
using namespace std;

int main() {

  int arr[] = {1, 2, 3, 3, 4, 9};

  int Size = sizeof(arr) / sizeof(arr[0]);

  // int not_sorted; // compiler will put any grabage value.

  int not_sorted = 0;

  for (int i = 1; i < Size; i++) {

    // previous_element <= current_element: OK, sorted so far.
    // previous_element > current_element: NOT OK, ERROR

    int previous_element = arr[i - 1];
    int current_element = arr[i];

    if (previous_element > current_element) {
      not_sorted = 1;
      break;
    }
  }

  if (not_sorted == 1) {

    cout << "Not sorted\n";
  } else {

    cout << "sorted\n";
  }
}
