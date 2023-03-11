
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int arr[] = {1, 2, 3, 13, 4, 9};
  int Size = sizeof(arr) / sizeof(arr[0]);

  bool not_sorted = !is_sorted(arr, arr + Size);

  if (not_sorted) {
    cout << "Not sorted\n";
  } else {
    cout << "sorted\n";
  }
}
