#include <bits/stdc++.h>
using namespace std;

int main() {
  int row = 5;
  int col = 5;

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {


      if (i + j < 5) {
        cout << 0 << ' ';
      } else {
        cout << 1 << ' ';
      }


    }
    cout << endl;
  }

}
