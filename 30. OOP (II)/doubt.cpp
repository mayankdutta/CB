#include <iostream>
#include <vector>
// #include<cstring>
using namespace std;

int main() {
  vector<int> arr = {1, 2, 100, -1};
  int n = arr.size();
  int current_min;

  for (int i = 0; i < n - 1; i++) {
    current_min = i;
    // is to find minimum
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[current_min]) {
        current_min = j;
      }
    }
    // end of minimum
    if (current_min != i)
      swap(arr[i], arr[current_min]);
  }

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;
}
