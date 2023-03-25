// https://www.hackerrank.com/challenges/cpp-sets/problem?isFullScreen=true
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
  set<int> st;
  int queries;
  cin >> queries;

  while (queries > 0) {
    int n, x;
    cin >> n >> x;

    if (n == 1) {
      st.insert(x);

    } else if (n == 2) {
      st.erase(x);

      /*
      auto it = st.find(x);
      st.erase(it);
      */

    } else if (n == 3) {
      auto it = st.find(x); // iterator, not true false.

      if (it == st.end()) {
        cout << "No\n";
      } else {
        cout << "Yes\n";
      }
    }
    queries--;
  }

  return 0;
}
