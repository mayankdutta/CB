

#include <iostream>
using namespace std;

int main() {

  // if value is 3 print 3.
  // if value is 5 print 5.
  // if value 10 print 10.
  // else print something else.

  // int value = 5;

  // switch (value) {
  // case 3:
  //   cout << "3\n";
  //   break;
  // case 5:
  //   cout << "5\n";
  //   break;
  // case 10:
  //   cout << "10\n";
  //   break;
  // default:
  //   cout << "something else\n";
  // }

  // if (value == 10) {
  //   cout << "value is 10";
  // }
  // if (value == 5) {
  //   cout << "value is 5";
  // }
  // if (value == 3) {
  //   cout << "value is 3";
  // } else {
  //   cout << "something else";
  // }

  // if (value == 10) {
  //   cout << "10\n";
  // } else {
  //   if (value == 3) {
  //     cout << "3\n";
  //   } else {
  //   }
  // }

  // if x is 3, 5, 10 => print yes
  // else no.

  /*
  if (x == 3 || x == 5 || x == 10) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
  */

  // int x = 5;

  // if (x == 3) {
  //   cout << "Yes\n";
  // }
  // else if (x == 5) {
  //   cout << "Yes\n"; // <-----
  // }
  // else if (x == 10) {
  //   cout << "Yes\n";
  // }
  // else {
  //   cout << "No\n"; // <-----
  // }
  //

  // int y = 5;

  // if (y < 10) {
  //   cout << "true\n";
  // }
  // else if (y < 20) {
  //   cout << "true\n";
  // }
  // else if (y < 30) {
  //   cout << "true\n";
  // }
  // else if (y < 50) {
  //   cout << "true\n";
  // }
  // else {
  //   cout << "false\n";
  // }

  // int counter = 1;
  // while (counter <= 10) { // always smaller then 10,
  //   cout << counter << ' ';
  //   counter = counter + 1;
  // }

  // 1, 2, 3, ... 10

  // for (int counter = 1; counter <= 10; counter ++) {
  //   cout << counter << ' ';
  // }

  // 1, 2, 3, 4, 5, 6, 7, 8, 11, 12 ...... 20 | missing no.s 9, 10

  // int counter = 1;
  // while (counter <= 20) { // always smaller then 10,
  //   if (counter == 9 || counter == 10) {
  //     cout << "in break statement" << endl;
  //     break;
  //   }
  //   cout << counter << ' ';
  //   counter = counter + 1;
  // }

  /*
  [] -> square brackets
  {} -> blocks, curly braces
  () -> paranthesis
  */

  // int counter = 1;
  // for (; counter <= 20; ++counter) {

  // }

  // cout << "value of counter: " << counter << '\n';

  // for (int i = 0; i < 5; i++)
  //   cout << "first for\n";

  // cout << "first forrr\n";
  // cout << "first forrrrrrrrrrrrrrrrr\n";

  // for (int i = 0; i < 5; i++) {
  //   cout << "first for\n";
  // }

  // for (int i = 0; i < 5; i++);
  //   cout << "second for\n";

  // for (int i = 0; i < 5; i++) {}
  // cout << "second for\n";

  /*
     2 X 1 = 2
     2 X 2 = 4
     .
     .
     .
     2 X 10 = 20
   */

  // for (int i = 1; i <= 10; i++) {
  //   int ans = 2 * i;
  //   cout << ans << '\n';
  // }

  // 5, 8, 11, 14, .............. 100 terms

  // 5, 8, 11, 14, 17, 20, 23, 26 ......... 100 terms
  // 100th term 109

  // count of all the above numbers shouldn't be greater than 100.

  // 5, 8, 11, 14, 17, 20, 23, 26 ......... 100

  /*
  int count = 0;
  for (int i = 5; i <= 100; i += 3) {
    if (count >= 100)
      break;

    count += 1; // to count number of terms, there is in this sequence.
    cout << i << ' ';
  }
  */

  // 100th term ====> 302
  // int count = 0;
  // for (int i = 5; /*i <= 100 */; i += 3) {
  //   if (count >= 100)
  //     break;

  //   count += 1; // to count number of terms, there is in this sequence.
  //   cout << i << ' ';
  // }

  // 5, 8, 11, 14, 17, 20 ....... 100 (for loop se bahar) .... 302?
  //

  // int count_number = 0;
  // for (int i = 5; count_number <= 100; i += 3) {
  //   count_number += 1; // to count number of terms, there is in this
  //   sequence. cout << i << ' ';
  // }

  // [1, 200] <---- all the no.s that are divisible by 13

  // for (int i = 1; i <= 200; i++) {
  //   if (i % 13 == 0) { // remainder operator
  //                      // i % 13 == 0
  //                      // if remainder when (i is divided by 13) is 0 ?
  //     cout << i << ' '; // ' ' use for space
  //   }
  // }

  /*

     1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,
         14, 15, 16 ... 100


     1, 2, foo, 4, bar, foo, 7, 8, foo, bar, 11, foo, 13,
           14, foobar, 16 ... 100

     foo
     bar


     if number is divisible by 3    => print (foo)
     if number is divisible by 5    => print (bar)
     if number is divisible by both => print (foobar)
     else                           => print (that no.)


     */

  // for (int i = 1; i <= 100; i++) {
  //   if (i % 3 == 0 && i % 5 == 0) {
  //     cout << "foobar\n";

  //   } else if (i % 3 == 0) {
  //     cout << "foo\n";

  //   } else if (i % 5 == 0) {
  //     cout << "bar\n";

  //   } else {
  //     cout << i << '\n';
  //   }
  // }

  // ERRORS, CAREFUL
  // for (int i = 1; i <= 100; i++) {
  //   if (i % 3 == 0) {
  //     cout << "foo\n";
  //   } else if (i % 5 == 0) {
  //     cout << "bar\n";
  //   } else if (i % 3 == 0 && i % 5 == 0) {
  //     cout << "foobar\n";
  //   } else {
  //     cout << i << '\n';
  //   }
  // }

  /* HOMEWORK
   *
   * between [1, 200]
   * Count the numbers which are
   * either divisible by 3
   * or divisible by 5
   * they shouldn't be divisible by both.
   *
   *
   *
   * DO WHILE (2-3 mins)
   *
   *
   */
}
