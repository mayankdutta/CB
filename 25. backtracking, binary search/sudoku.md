## [Question](https://leetcode.com/problems/sudoku-solver/)

#### method 1

```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int n;
  bool boxes[3][3][10];
  bool rows[9][10];
  bool cols[9][10];

  bool dfs(vector<vector<char>> &board, int row, int col) {
    if (col == n) {
      row++;
      col = 0;
    }
    if (row == n) {
      return true;
    }
    if (board[row][col] != '.') {
      return dfs(board, row, col + 1);
    }

    for (int i = 1; i <= 9; i++) {
      if (!boxes[row / 3][col / 3][i] && !rows[row][i] && !cols[col][i]) {
        boxes[row / 3][col / 3][i] = true;
        rows[row][i] = true;
        cols[col][i] = true;
        board[row][col] = i + '0';

        if (dfs(board, row, col + 1))
          return true;

        boxes[row / 3][col / 3][i] = false;
        rows[row][i] = false;
        cols[col][i] = false;
      }
    }
    board[row][col] = '.';
    return false;
  }

  void solveSudoku(vector<vector<char>> &board) {
    n = board.size();
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (board[i][j] == '.')
          continue;
        int num = board[i][j] - '0';
        boxes[i / 3][j / 3][num] = true;
        rows[i][num] = true;
        cols[j][num] = true;
      }
    }

    dfs(board, 0, 0);
  }
};
```

#### method 2

```cpp
class Solution {
public:
  vector<vector<char>> board, ans;
  int ROW;
  int COL;

  bool present(int row, int col, int value) {
    for (int i = 0; i < COL; i++) {
      if ((board[row][i] - '0') == value) {
        return true;
      }
    }

    for (int i = 0; i < ROW; i++) {
      if ((board[i][col] - '0') == value) {
        return true;
      }
    }

    for (int i = (row / 3) * 3; i < (row / 3) * 3 + 3; i++) {
      for (int j = (col / 3) * 3; j < (col / 3) * 3 + 3; j++) {
        if ((board[i][j] - '0') == value) {
          return true;
        }
      }
    }
    return false;
  }

  void dfs(int row, int col) {
    if (col >= COL) {
      col = 0;
      row += 1;
    }

    if (row == ROW) {
      ans = board;
      return;
    }

    if (board[row][col] != '.') {
      dfs(row, col + 1);
    } else {
      for (int value = 1; value <= 9; value++) {
        if (!present(row, col, value)) {
          board[row][col] = value + '0';
          dfs(row, col + 1);
          board[row][col] = '.';
        }
      }
    }
  }

  void solveSudoku(vector<vector<char>> &board) {
    this->board = board;
    this->ROW = board.size();
    this->COL = board[0].size();
    dfs(0, 0);
    board = ans;
  }
};
```
