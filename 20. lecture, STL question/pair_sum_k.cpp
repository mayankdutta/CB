
// You have been given sorted array, print pairs having sum = k.

#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  int k;
  cin >> k;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] + arr[j] == k) {
        cout << arr[i] << ' ' << arr[j] << '\n';
      }
    }
  }
}
