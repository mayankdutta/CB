// https://leetcode.com/problems/koko-eating-bananas/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

class Solution {
public:
  bool check_can_eat(vector<int> &piles, int h, ll speed) {
    int time = 0;
    for (int i = 0; i < piles.size(); i++) {
      if (piles[i] % speed == 0) {
        time += piles[i] / speed;
      } else {
        time += piles[i] / speed + 1;
      }
    }

    if (time <= h) {
      return true;
    } else {
      return false;
    }
  }

  int minEatingSpeed(vector<int> &piles, int h) {

    ll low = 1;
    ll high = accumulate(piles.begin(), piles.end(), 0LL);
    ll ans = -1;

    while (low <= high) {
      ll mid = (low + high) / 2;
      bool can_eat = check_can_eat(piles, h, mid);

      if (can_eat) {
        ans = mid;
        high = mid - 1;

      } else if (!can_eat) {
        low = mid + 1;
      }
    }
    return ans;
  }
};
