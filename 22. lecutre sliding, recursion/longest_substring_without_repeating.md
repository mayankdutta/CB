#### [click here for the Question](https://leetcode.com/problems/longest-substring-without-repeating-characters/)

### using map

```cpp
  int lengthOfLongestSubstring(string s) {
    int n = s.size();

    int l = 0;
    int ans = 0;

    map<char, int> mp;
    for (int r = 0; r < n; r++) {

      char right_char = s[r];
      mp[right_char] = mp[right_char] + 1;

      while (l <= r && mp[right_char] > 1) {

        char left_char = s[l];
        mp[left_char] = mp[left_char] - 1;
        l++;
      }

      if (ans < (r - l + 1)) {
        ans = r - l + 1;
      }
    }

    return ans;
  }
```

### using set

```cpp
  int lengthOfLongestSubstring(string s) {
    int n = s.size();

    int l = 0;
    int ans = 0;

    set<char> st;
    for (int r = 0; r < n; r++) {

      while (l <= r && st.find(s[r]) != st.end()) {
        st.erase(s[l]);
        l++;
      }

      st.insert(s[r]);

      if (ans < (r - l + 1)) {
        ans = r - l + 1;
      }
    }

    return ans;
  }
};

```

### Brute force

```cpp
int main() {

  string s = "pwwkew";
  int n = s.size();
  int sum = 0;

  for (int i = 0; i < n; i++) {
    vector<bool> st(500);

    for (int j = i; j < n; j++) {
      if (st[s[j]] == true)
        break;
      else {
        sum = max(sum, j - i + 1);
        st[s[j]] = true;
      }
    }
    st[s[i]] = false;
  }
  cout << sum << endl;
}

```

### using array.

```cpp
  int lengthOfLongestSubstring(string s) {
    int n = s.size();

    int l = 0;
    int ans = 0;

    vector<int> mp(5000);
    for (int r = 0; r < n; r++) {

      mp[s[r]]++;

      while (l <= r && mp[s[r]] > 1) {

        mp[s[l]]--;
        l++;
      }
      if (ans < (r - l + 1)) {
        ans = r - l + 1;
      }
    }

    return ans;
  }
```
