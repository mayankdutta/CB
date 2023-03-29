
#include <iostream>
using namespace std;

// you will have to pass size, everytime.

bool check_is_sorted(int arr[], int Size) {
  for (int i = 1; i < Size; i++) {
    int previous_element = arr[i - 1];
    int current_element = arr[i];

    if (previous_element > current_element) {
      return 1;
    }
  }

  return 0;
}

int main() {
  int arr[] = {1, 2, 3, 13, 4, 9};
  int Size = sizeof(arr) / sizeof(arr[0]);

  bool not_sorted = check_is_sorted(arr, Size);

  if (not_sorted == 1) {
    cout << "Not sorted\n";
  } else {
    cout << "sorted\n";
  }
}
