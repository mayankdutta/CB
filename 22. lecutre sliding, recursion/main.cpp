
// minimum size subarray. 
//
#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
  vector<int> arr = {1, 4, 2, 1};
  int k = 5;

  int n = arr.size();
  int ans = INT_MAX;
  int i = 0;
  int sum = 0;

  for (int j = 0; j < n; j++) {
    sum += arr[j];

    while (i < j && sum - arr[i] >= k) {
      sum -= arr[i];
      i++;
    }

    if (sum >= k && ans > j - i + 1) {
      ans = j - i + 1;
    }
  }
  cout << ans;
}
