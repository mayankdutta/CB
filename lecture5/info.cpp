

#include <iomanip>
#include <iostream>
#include <math.h>

using namespace std;

void fun() {
  int n;
  cin >> n;

  if (1 <= n && n <= 11) cout << 1 << '\n';
  if (11 <= n && n <= 111) cout << 11 << '\n';
  if (111 <= n && n <= 1111) cout << 111 << '\n';
  if (1111 <= n && n <= 11111) cout << 1111 << '\n';
  if (11111 <= n && n <= 111111) cout << 11111 << '\n';
  if (111111 <= n && n <= 1111111) cout << 111111 << '\n';
  if (1111111 <= n && n <= 11111111) cout << 1111111 << '\n';
  if (11111111 <= n && n <= 111111111) cout << 11111111 << '\n';
}

int main() {

  int num;
  cin >> num;

  int max_digit = INT_MIN;

  // for (int i = num; i > 0; i /= 10) {
  //   int last_digit = i % 10;
  //   if (max_digit < last_digit) {
  //     max_digit = last_digit;
  //   }
  // }
  //

  int count = 0;
  int i = num;    // initialization
  while (i > 0) { // condition

    int last_digit = i % 10;

    // if (max_digit < last_digit) {
    //   max_digit = last_digit;
    // }

    max_digit = max({max_digit, last_digit});

    // min_digit = min({min_digit, last_digit});

    i /= 10; // updation
  }

  cout << "Maximum digit is: " << max_digit << '\n';

  // int i = num;
  // while (i > 0) {

  //   count ++;
  //   i /= 10;
  // }

  cout << "Total no. of digits: " << count << '\n';
}
