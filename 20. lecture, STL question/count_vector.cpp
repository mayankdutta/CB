
#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<int> arr = {1, 2, 3, 1, 4, 5, 9, 5, 3};
  int n = arr.size();

  for (int i = 0; i < n; i++) {
    int current_element = arr[i];
    int cnt = count(arr.begin(), arr.end(), current_element);

    if (cnt % 2 == 0) {

      auto is_present = count(arr.begin(), arr.begin() + i, current_element);

      if (is_present == 0) {
        cout << arr[i] << ' ';
      }
    }
  }
}
