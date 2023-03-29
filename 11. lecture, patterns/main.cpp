
#include <iostream>
using namespace std;




int main() {
  int row = 5;
  int col = 5;
  for (int i = 1; i <= row; i++) {
    for (int j = 1; j <= col; j++) {

      if (i + j == 6) {
        cout << "0";
      } else {
        cout << ' ';
      }
    }
    cout << '\n';
  }
}
