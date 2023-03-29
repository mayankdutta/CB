#include <iostream>
#include <vector>

using namespace std;

int main() {
  int row = 4;
  int col = 4;

  int matrix[row][col];

  // int matrix[4][4] = {
  //     {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cout << matrix[i][j] << ' ';
    }
    cout << '\n';
  }

  vector<vector<int>> arr;
  arr.resize(2 * row - 1);

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      int sum = i + j;
      arr[sum].push_back(matrix[i][j]);
    }
  }

  // 1. 
  for (int i = 0; i <= 100; i++) {
    for (int i = 0; i <= 100; i++) {
    }
  }
  //100 * 100 times, slow


  // 2. 100 times. faster
  for (int i = 0; i <= 100; i++) {
  }
  
  // 3. 1 time, fastest

  // no for loop, 

  for (int i = 0; i < arr.size(); i++) {
    cout << "at " << i << " : ";
    for (int j = 0; j < arr[i].size(); j++) {
      cout << arr[i][j] << ' ';
    }
    cout << '\n';
  }

  return 0;
}
