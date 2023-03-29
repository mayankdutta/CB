#include <iostream>
using namespace std;

int main() {
  char matrix[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      // cin >> matrix[i][j];
      matrix[i][j] = '*';
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (j <= i) {
        matrix[i][j] = '*';
      } else {
        matrix[i][j] = ' ';
      }
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << matrix[i][j] << ' ';
    }
    cout << '\n';
  }
}
