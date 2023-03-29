#include <iostream>
using namespace std;

int main() {

  int size = 7;
  int arr[] = {-1, 1, +2, -2, -3, +3, 10};

  for (int i = 0; i < size; i++) {
    if (i % 2 != 0)
      cout << arr[i];
  }
}
