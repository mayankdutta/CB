## [Question](https://leetcode.com/problems/n-queens-ii/)

```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  map<int, bool> mp_d1;
  map<int, bool> mp_d2;
  map<int, bool> mp_row;
  map<int, bool> mp_col;
  int ans = 0;

  bool can_be_placed(int row, int col) {
    if (mp_row[row] == false && mp_col[col] == false &&
        mp_d1[row + col] == false && mp_d2[row - col] == false) {

      return true;
    } else {
      return false;
    }
  }

  void mark(int row, int col) {
    mp_row[row] = true;
    mp_col[col] = true;
    mp_d1[row + col] = true;
    mp_d2[row - col] = true;
  }

  void unmark(int row, int col) {
    mp_row[row] = false;
    mp_col[col] = false;
    mp_d1[row + col] = false;
    mp_d2[row - col] = false;
  }

  void fun(int row, int n) {
    if (row == n) {
      ans++;
      return;
    }

    for (int col = 0; col < n; col++) {
      if (can_be_placed(row, col)) {

        mark(row, col);

        fun(row + 1, n);

        unmark(row, col);
      }
    }
  }

  int totalNQueens(int n) {
    ans = 0;
    fun(0, n);
    return ans;
  }
};
```

#### method 2

```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  map<int, bool> mp_d1;
  map<int, bool> mp_d2;
  map<int, bool> mp_row;
  map<int, bool> mp_col;
  int ans = 0;

  bool can_be_placed(int row, int col) {
    if (mp_row[row] == false && mp_col[col] == false &&
        mp_d1[row + col] == false && mp_d2[row - col] == false) {

      return true;
    } else {
      return false;
    }
  }

  void mark(int row, int col) {
  }

  void unmark(int row, int col) {
  }

  void fun(int row, int n) {
    if (row == n) {
      ans++;
      return;
    }

    for (int col = 0; col < n; col++) {
      if (can_be_placed(row, col)) {

        mp_row[row] = true;
        mp_col[col] = true;
        mp_d1[row + col] = true;
        mp_d2[row - col] = true;

        fun(row + 1, n);

        mp_row[row] = false;
        mp_col[col] = false;
        mp_d1[row + col] = false;
        mp_d2[row - col] = false;

      }
    }
  }

  int totalNQueens(int n) {
    ans = 0;
    fun(0, n);
    return ans;
  }
};
```

### using set

```cpp

class Solution {
    public:

    set<int> mp_d1;
    set<int> mp_d2;
    set<int> mp_row;
    set<int> mp_col;
    int ans = 0;

    bool can_be_placed(int row, int col) {
        if (mp_row.find(row) == mp_row.end() &&
            mp_col.find(col) == mp_col.end() &&
            mp_d1.find(row + col) == mp_d1.end() &&
            mp_d2.find(row - col) == mp_d2.end()
           ) {
            return true;
        }
        else {
            return false;
        }
    }

    void mark(int row, int col) {
        mp_row.insert(row);
        mp_col.insert(col);
        mp_d1.insert(row + col);
        mp_d2.insert(row - col);
    }

    void unmark(int row, int col) {
        mp_row.erase(row);
        mp_col.erase(col);
        mp_d1.erase(row + col);
        mp_d2.erase(row - col);
    }

    void fun(int row, int n) {
        if (row == n) {
            ans ++;
            return;
        }

        for (int col = 0; col < n; col++) {
            if (can_be_placed(row, col)) {

                mark(row, col);

                fun(row + 1, n);

                unmark(row, col);
            }
        }
    }


    int totalNQueens(int n) {
        ans = 0;
        fun(0, n);
        return ans;

    }
};


```
