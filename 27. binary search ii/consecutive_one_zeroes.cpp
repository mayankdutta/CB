
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int n = s.size();
  int low = 0;
  int high = n - 1;
  int ans = -1;

  while (low <= high) {
    int mid = (low + high) / 2;

    bool good = (s[mid] == '1' && s[mid - 1] == '1');

    if (good) {
      high = mid - 1;

    } else {
      ans = mid;
      low = mid + 1;
    }
  }

  cout << ans << '\n';
}

/*
 *
 * some testcase
 *
 * 000000000
 * 111111111
 * 011111111
 * 001111111
 * 000111111
 */

