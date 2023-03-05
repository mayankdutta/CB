
#include <iostream>
using namespace std;

int main() {
  int Size;
  cin >> Size;

  int arr[Size];
  for (int i = 0; i < Size; i++) {
    // cin >> arr[i];
    // alternate method.

    int number;
    cin >> number;

    arr[i] = number;
  }

  int mn = INT_MAX;
  int mn_index = 0;

  for (int i = 0; i < Size; i++) {
    if (arr[i] < mn) {
      mn = arr[i];
      cout << i << '\n';
    }
  }

  cout << "Final answer is : " << mn << '\n';
}
