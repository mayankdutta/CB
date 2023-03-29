#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> arr{1, 2, 100, -1};
  int n = arr.size();

  for (int i = 0; i < n; i++) {
    int current_minimum_element = arr[i];

    /* is to find minimum */
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < current_minimum_element) {
        current_minimum_element = arr[j];
      }
    }
    /* end of minimum */

    swap(arr[i], current_minimum_element);

  }
}
