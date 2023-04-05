[Question](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)

### regular solution

````cpp
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

```


### Lower bound solution

```cpp

class Solution {
    public:
    vector<int> searchRange(vector<int>& nums, int target) {

        auto it = lower_bound(nums.begin(), nums.end(), target);

        if (it == nums.end()) {
            return {-1, -1};
        } else if (*it != target) {
            return {-1, -1};
        }

        auto it2 = (--upper_bound(nums.begin(), nums.end(), target));

        int index1 = it - nums.begin();
        int index2 = it2 - nums.begin();
        return {index1, index2};
    }
};

```


### Binary search STL

```cpp


class Solution {
    public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (!binary_search(nums.begin(), nums.end(), target)) {
            return {-1, -1};
        }

        auto it1 = upper_bound(nums.begin(), nums.end(), target - 1);
        auto it2 = upper_bound(nums.begin(), nums.end(), target);

        --it2;

        int index1 = it1 - nums.begin();
        int index2 = it2 - nums.begin();

        return {index1, index2};
    }
};

```
````
