

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

  int left = 0;
  int right = n - 1;
  while (left < right) {
    int sum = arr[left] + arr[right];
    if (sum == k) {
      cout << arr[left] << ' ' << arr[right] << '\n';
      left++;
    } else if (sum < k) {
      left++;
    } else {
      right--;
    }
  }
}
