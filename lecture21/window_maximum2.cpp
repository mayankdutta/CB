
#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
  vector<int> arr = {1, 2, 3, -1, 4, 9, -5, 6};
  int k = 3;

  multiset<int> window;
  vector<int> ans;

  int j;
  for (j = 0; j < k; j++) {
    window.insert(arr[j]);
  }

  ans.push_back(*window.rbegin());

  int i = 0;

  while (j < arr.size()) {
    auto it = window.find(arr[i]);

    window.erase(it);

    window.insert(arr[j]);
    ans.push_back(*window.rbegin());

    i ++;
    j ++;
  }

  cout << "ans : ";
  for (auto i: ans) {
    cout << i << ' ';
  }
}
