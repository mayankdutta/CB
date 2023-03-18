
#include <iostream>
#include <vector>

using namespace std;

void fun(int **arr, int row, int col) {

}

void fun2(vector<vector<int>> matrix) {
  int row = matrix.size(); 
  int col = matrix[0].size();
}

int main() {
  int arr[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
  int brr[3][3] = {{5, 5, 5}, {5, 5, 5}, {5, 5, 5}};

  int crr[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      crr[i][j] = arr[i][j] + brr[i][j]; 
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << crr[i][j] << ' ';
    } cout << '\n';
  }
}
