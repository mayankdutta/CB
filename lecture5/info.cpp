

#include <iomanip>
#include <iostream>

using namespace std;

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
