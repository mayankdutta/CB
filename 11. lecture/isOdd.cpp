


#include <bits/stdc++.h>

using namespace std;

bool checkForOdd(int n) {
  bool isOdd;

  if (n % 2 != 0) { // not divisible by 2
    isOdd = true; // isOdd = 1
  } else {
    isOdd = false; // isOdd = 0
  }

  return isOdd;
}

int main() {
  int n = 7;

  bool isOdd = checkForOdd(n);

  if (isOdd == true) {
    cout << "Given no. is Odd\n";
  } else {
    cout << "Given no. is  Even\n";
  }
}
