// https://leetcode.com/problems/magnetic-force-between-two-balls/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> position;
  int m;
  bool Good(int mid) {
    int count = 1;
    int curr = position[0];

    for (int i = 0; i < position.size(); i++) {
      if (curr + mid <= position[i]) {
        curr = position[i];
        count++;
      }
    }
    return m <= count;
  }

  int maxDistance(vector<int> &position, int m) {
    sort(position.begin(), position.end());
    this->position = position;
    this->m = m;

    int low = 1;
    int high = position.back();
    int ans = -1;

    while (low <= high) {
      int mid = (low + (high - low) / 2);

      bool good = Good(mid);

      if (good) {
        ans = mid;
        low = mid + 1;
      } else {
        high = mid - 1;
      }
    }
    return ans;
  }
};
