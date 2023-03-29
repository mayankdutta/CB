#include <iostream>
using namespace std;

int main() {
  int size;
  cin >> size;
  int arr[size];

  int odd[size];
  int even[size];

  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  int length_of_even = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] % 2 == 0) {
      even[length_of_even] = arr[i];
      length_of_even++;
    }
  }

  int length_of_odd = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] % 2 != 0) {
      odd[length_of_odd] = arr[i];
      length_of_odd++;
    }
  }
  for (int i = 0; i < length_of_even; i++) {
    cout << even[i] << "\n";
  }
  for (int i = 0; i < length_of_odd; i++) {
    cout << odd[i] << "\n";
  }

  return 0;
}
