

#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {

  vector<int> arr = {1, 2, 3, 1, 4, 5, 9, 5, 3};
  int n = arr.size();

  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    mp[arr[i]]++;
  }

  for (auto i : mp) {
    if (i.second % 2 == 0) {
      cout << i.first << ' ';
    }
  }
}
