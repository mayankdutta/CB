#include <iostream>
#include <vector>
using namespace std;

int main() {
  int row = 3;
  int col = 3;

  int arr[row][col];

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cin >> arr[i][j];
    }
  }

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      if (i == j) {
        cout << arr[i][j] << ' ';
      } else {
        cout << ' ';
      }
    } cout << '\n';
  }
}
