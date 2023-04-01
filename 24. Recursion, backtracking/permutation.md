

```cpp

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans; 
        
        sort(nums.begin(), nums.end());
        auto temp = nums; 
        
        do {
            ans.push_back(temp);
            next_permutation(temp.begin(), temp.end());
        } while (temp != nums);
        
        return ans;
    }
};
```


```cpp

vector<vector<int>> ans;
map<int, bool> used;
vector<int> arr; // {1, 2, 3}

void fun(int i, vector<int> &curr) {
  if (i == arr.size()) {
    ans.push_back(curr);
  }

  for (int j = 0; j < arr.size(); j++) {
    if (!used[j]) { // if some value not exist in map, by default 0.
      used[j] = true;
      curr.push_back(arr[j]);

      fun(i + 1, curr);

      used[j] = false;
      curr.pop_back();
    }
  }
}
```
