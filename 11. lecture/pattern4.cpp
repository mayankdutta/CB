

#include <iostream>
using namespace std;

int main() {
  int row = 6, col = 6;

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {

      if (i + j < row) {
        cout << ' ';
      } else {
        cout << 0;
      }
    }
    cout << endl;
  }

  return 0;
}
