#include <iostream>

using namespace std;

int main() {
  int *arr;
  arr = new int[5];

  for (int i = 0; i < 5; i++) {
    cin >> arr[i];
  }

  for (int i = 0; i < 5; i++) {
    cout << arr[i];
    cout << endl;
  }

  cout << *arr << " " << arr << " " << &arr;

  return 0;
}
