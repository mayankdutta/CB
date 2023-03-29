



#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> arr = {1, 2, 3, -1, 4, 9, -5, 6};

  int n = arr.size();
  int k = 3;

  for (int i = 0; i <= n - k; i++) {


    int mx = *max_element(arr.begin() + i, arr.begin() + i + k);

    // int mx = INT_MIN;
    // for (int j = i; j < i + k; j++) {
    //   mx = max(mx, arr[j]);
    // }

    cout << mx << ' ';
  }
}
