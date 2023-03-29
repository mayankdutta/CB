

#include <iostream>

using namespace std;

int squareRoot(int n);

int main() {
  cout << squareRoot(25) << '\n';
  cout << squareRoot(50) << '\n';
  cout << squareRoot(500) << '\n';
}

int squareRoot(int n) {
  int ans = 1;
  for (int i = 1; i <= n; i++) {
    int square = i * i;

    if (square <= n) {
      ans = i;
    }
  }

  return ans;
}
