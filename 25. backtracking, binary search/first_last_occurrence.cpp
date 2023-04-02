// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int upper(const vector<int> &nums, int target) {

    int low = 0;
    int high = nums.size() - 1;

    int ans = -1;

    while (low <= high) {
      int mid = (low + high) / 2;

      if (nums[mid] == target) {
        ans = mid;
        low = mid + 1;
      } else if (nums[mid] < target) {
        low = mid + 1;
      } else {
        high = mid - 1;
      }
    }
    return ans;
  }

  int lower(const vector<int> &nums, int target) {
    int low = 0;
    int high = nums.size() - 1;
    int ans = -1;

    while (low <= high) {
      int mid = (low + high) / 2;

      if (nums[mid] == target) {
        ans = mid;
        high = mid - 1;
      } else if (nums[mid] < target) {
        low = mid + 1;
      } else {
        high = mid - 1;
      }
    }
    return ans;
  }

  vector<int> searchRange(vector<int> &nums, int target) {

    int ans1 = upper(nums, target);
    int ans2 = lower(nums, target);

    return {ans2, ans1};
  }
};
