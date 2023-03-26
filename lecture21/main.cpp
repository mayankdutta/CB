#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  vector<int> arr = {1, 2, 3, -1, 4, 9, -5, 6};
  int n = arr.size();
  int k = 3;
  for (int i = 0; i <= n - k - 1; i++) {
    int mn = INT_MAX;

    for (int j = i; j <= i + k; j++) {
      mn = min(mn, arr[j]);
    }
    cout << mn << ' ';
  }
}
