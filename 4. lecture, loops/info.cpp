

#include <iostream>
using namespace std;

// C++ 11 and after
// C++ concept namespaces
// C++ core functions, input/output
// they are defined within a space.
// space's name is std
// std => standard

/*
int main() {
  // task: print 'hello world' 5 times.

  int repeat = 1;

  while (repeat <= 50) {
    continue;

    cout << "Hello world\n";
    repeat += 1;
  }
}
*/

/*
int main() {
  int count = 0;

  int i = 1;
  while (i <= 200) {
    // for (int i = 1; i <= 200; i++) {
    if (i % 3 == 0 && i % 5 == 0) {

      i++;

      continue;

    }

    if (i % 3 == 0) {
      count++;
    } else if (i % 5 == 0) {
      count++;
    }
    i++;
    // }
  }
  cout << count;
}
*/

int main() {
  /*
  int count = 0;

  for (int i = 1; i <= 200; i++) {
    if (i % 3 == 0) {
      count++;
    } else if (i % 5 == 0) {
      count++;
    }
  }

  count -= 2   X LCM of (3 & 5) == (15) ;
  */

  // User will provide you two decimal no.s
  // you have to take input
  // then add them
  // and finally print them.

  /*
  float number1, number2;
  cin >> number1 >>number2;

  auto ans = number1 + number2;

  cout << "Final answer is: " << ans << endl;

  */
  // in output we are seeing only 4 digits.
  // 5 digits, after decimals.

  // Print ASCII values from 'A' -> 'Z'

  /*
  ' ' <-- denotes character
  " " <-- denotes string
  */

  /*
   * 'A' => 65 (ASCII)
   * 'B' => 66
   *  .
   *  .
   * 'Z' => 90
   */

  // 'A', 'B', 'C', 'D' ................... 'Z'
  // kind of generate
  // we will have to use loop
  //

  /*
  for (char i = 'A'; i <= 'Z'; i++) {
    cout << "ASCII value of " << i << " is : " << (int)i << '\n';
  }
  */

  /*

  for (int i = 0; i <= 25; i++) {
    cout << "ASCII value of " << (char)(i + 'A') << " is : " << (i + 'A')
         << '\n';
  }
  */

  /*

  for (char i = '0'; i <= '9'; i++) {
    // 'i' is a character
    cout << "ASCII value of " << i << " is : " << (int)i << '\n';
  }

  char a = ' ';
  cout << (int)a << endl;
  */

  /*
   *
   * Given 3 no.s
   * let say 3, 1, 10
   * Minimum of all three no.s
   * Maximum of all three no.s
   * using if-else
   *
   */

  int num1 = 1;
  int num2 = 1;
  int num3 = 2;

  /*
  int mn = 0; // num1; // INT_MAX
  int mx = 0; // num1; // INT_MIN

  if (mx < num1) mx = num1;
  if (mx < num2) mx = num2;
  if (mx < num3) mx = num3;

  if (num1 < mn) mn = num1;
  if (num2 < mn) mn = num2;
  if (num3 < mn) mn = num3;

  cout << "Max ans is : " << mx << '\n';
  cout << "Min ans is : " << mn << '\n';
  */

  // shortcut. 
  cout << "minimum value is : " << min({num1, num2, num3}) << '\n';
  cout << "maximum value is : " << max({num1, num2, num3}) << '\n';
}
