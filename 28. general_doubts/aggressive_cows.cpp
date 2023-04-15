// https://practice.geeksforgeeks.org/problems/aggressive-cows/1
#include <cmath>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
  bool help(vector<int> &stalls, int mid, int k, int n) {
    int i, j, temp = stalls[0], count = 1;
    for (i = 1; i < stalls.size(); i++) {
      if (stalls[i] - temp >= mid) {
        temp = stalls[i];
        count++;
      }
      if (count == k)
        return true;
    }
    return false;
  }

  int solve(int n, int k, vector<int> &stalls) {
    sort(stalls.begin(), stalls.end());
    int st = 0, ed = stalls[n - 1] - stalls[0];
    int ans = -1;
    while (st <= ed) {
      int mid = st + (ed - st) / 2;
      bool tempres = help(stalls, mid, k, n);
      if (tempres) {
        ans = mid;
        st = mid + 1;
      } else
        ed = mid - 1;
    }
    return ans;
  }
};
