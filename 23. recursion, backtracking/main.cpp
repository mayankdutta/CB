
#include <algorithm>
#include <iostream>
using namespace std;

bool compare(int a, int b) { return a <= b; }

int main() {

  int arr[] = {1, 2, 5, 10, 20, 50, 100};

  int n = sizeof(arr) / sizeof(int);
  int money = 25;

  while (money > 0) {
    // int indx = lower_bound(arr, arr + n, money, compare) - arr - 1;

    auto it = upper_bound(arr, arr + n, money);
    if (it == arr) {
      cout << "Not possible\n";
      break;

    } else {
      int indx = it - arr - 1;
      cout << arr[indx] << endl;
      money -= arr[indx];
    }
  }
  return 0;
}
