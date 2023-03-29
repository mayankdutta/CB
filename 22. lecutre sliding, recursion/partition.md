[Question](https://leetcode.com/problems/partition-array-into-disjoint-intervals/)

### brute1

```cpp
int partitionDisjoint(vector<int>& nums) {
        int ans = INT_MAX;
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            vector<int> left;
            for (int j = i - 1; j >= 0; j--) {
                left.push_back(nums[j]);
            }

            vector<int> right;
            for(int j = i; j < n; j++) {
                right.push_back(nums[j]);
            }

            if (*max_element(left.begin(), left.end()) <=
                *min_element(right.begin(), right.end())) {
                ans = min((int)left.size(), ans);
                break;
            }
        }
        return ans;
    }
```

## Brute2

```cpp
int partitionDisjoint(vector<int>& nums) {
        int ans = INT_MAX;
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            int mx_left = INT_MIN;
            int mn_right = INT_MAX;

            // vector<int> left;
            for (int j = i - 1; j >= 0; j--) {
                // left.push_back(nums[j]);
                mx_left = max(mx_left, nums[j]);
            }

            // vector<int> right;
            for(int j = i; j < n; j++) {
                // right.push_back(nums[j]);
                mn_right = min(mn_right, nums[j]);
            }

            if (mx_left <= mn_right) {
                ans = min(i, ans);
                break;
            }

            /*
            if (*max_element(left.begin(), left.end()) <=
                *min_element(right.begin(), right.end())) {
                ans = min((int)left.size(), ans);
                break;
            }
            */
        }
        return ans;
    }
```

## Optimal

```cpp
    int partitionDisjoint(vector<int>& nums) {
        int ans = INT_MAX;
        int n = nums.size();

        multiset<int> left, right;
        for (int i = 0; i < 1; i++) left.insert(nums[i]);
        for (int i = 1; i < n; i++) right.insert(nums[i]);

        if (*left.rbegin() <= *right.begin()) {
            ans = 1;
        }

        for (int i = 1; i < n; i++) {
            auto current = right.find(nums[i]);
            left.insert(*current);
            right.erase(current);

            if (*left.rbegin() <= *right.begin()) {
                ans = min(ans, i + 1);
                break;
            }
        }
        return ans;
    }
```
