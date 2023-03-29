[For notes click here](https://jmistudent-my.sharepoint.com/:o:/g/personal/mayank1908234_st_jmi_ac_in/EslUkrSOrw1Jszs-d6Zvr0IB18U1bCnC2DDA7aeHS4ErhQ?e=LHEYsD)

Questions till so far.

# Solutions 

### Print Hello world.

```cpp
#include <iostream>

using namespace std;

int main() {
  cout << "Hello world\n";
}

```

### Enter two variable and print sum.

```cpp
#include <iostream>
using namespace std;

int main() {
  int num1, num2;
  cout << "Enter both no.s\n";
  cin >> num1 >> num2;

  cout << "Sum of two nos. : " << num1 + num2 << '\n';

}

```

### If value is 3, print 3. if value is 5 then print 5, if value is 10, print 10 else print something else.

##### METHOD 1

```cpp
int main() {
  int value;
  cin >> value;

  switch (value) {
  case 3:
    cout << "3\n";
    break;
  case 5:
    cout << "5\n";
    break;
  case 10:
    cout << "10\n";
    break;
  default:
    cout << "something else\n";
  }
}

```

##### METHOD 2

```cpp
int main() {
  int value;
  cin >> value;

  if (value == 10) {
    cout << "value is 10";
  }
  if (value == 5) {
    cout << "value is 5";
  }
  if (value == 3) {
    cout << "value is 3";
  } else {
    cout << "something else";
  }
}

```

##### METHOD 3

```cpp

int main() {
  if (x == 3 || x == 5 || x == 10) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
}

```

##### METHOD 4

```cpp

int main() {
  if (x == 3) {
    cout << "Yes\n";
  }
  else if (x == 5) {
    cout << "Yes\n";
  }
  else if (x == 10) {
    cout << "Yes\n";
  }
  else {
    cout << "No\n";
  }

}

```

##### METHOD 5

```cpp
  int y = 5;

  if (y < 10) {
    cout << "true\n";
  }
  else if (y < 20) {
    cout << "true\n";
  }
  else if (y < 30) {
    cout << "true\n";
  }
  else if (y < 50) {
    cout << "true\n";
  }
  else {
    cout << "false\n";
  }

```

### While Loop.

```cpp
  // 1, 2, 3, ... 10

  int counter = 1;
  while (counter <= 10) { // always smaller then 10,
    cout << counter << ' ';
    counter = counter + 1;
  }

```

### For Loop.

```cpp
  // 1, 2, 3, ... 10

  for (int counter = 1; counter <= 10; counter ++) {
    cout << counter << ' ';
  }

```

### Print NO.s from 1 to 20, missing values 9, 10

```cpp
  int counter = 1;
  while (counter <= 20) { // always smaller then 10,
    if (counter == 9 || counter == 10) {
      cout << "in break statement" << endl;
      break;
    }
    cout << counter << ' ';
    counter = counter + 1;
  }

```

> [] -> square brackets
> {} -> blocks, curly braces
> () -> paranthesis

```cpp
  int counter = 1;
  for (; counter <= 20; ++counter) {

  }

  cout << "value of counter: " << counter << '\n';

  for (int i = 0; i < 5; i++)
    cout << "first for\n";

  cout << "first forrr\n";
  cout << "first forrrrrrrrrrrrrrrrr\n";

  for (int i = 0; i < 5; i++) {
    cout << "first for\n";
  }

  for (int i = 0; i < 5; i++);
    cout << "second for\n";

  for (int i = 0; i < 5; i++) {}
  cout << "second for\n";

```

### Print table of 2's

```js
  2 X 1 = 2
  2 X 2 = 4
  .
  .
  .
  2 X 10 = 20

```

```cpp
  for (int i = 1; i <= 10; i++) {
    int ans = 2 * i;
    cout << ans << '\n';
  }
```

### Print series

```js
  5, 8, 11, 14, .............. 100 terms

  5, 8, 11, 14, 17, 20, 23, 26 ......... 100 terms
  100th term 109

  count of all the above numbers shouldn't be greater than 100.

  5, 8, 11, 14, 17, 20, 23, 26 ......... 100
```

```cpp
  int count = 0;
  for (int i = 5; i <= 100; i += 3) {
    if (count >= 100)
      break;

    count += 1; // to count number of terms, there is in this sequence.
    cout << i << ' ';
  }

```

```js
  100th term ====> 302
```

```cpp
  int count = 0;
  for (int i = 5; /*i <= 100 */; i += 3) {
    if (count >= 100)
      break;

    count += 1; // to count number of terms, there is in this sequence.
    cout << i << ' ';
  }
```

```js
   5, 8, 11, 14, 17, 20 ....... 100 (for loop se bahar) .... 302?
```

```cpp
  int count_number = 0;
  for (int i = 5; count_number <= 100; i += 3) {
    count_number += 1; // to count number of terms, there is in this
    sequence. cout << i << ' ';
  }
```

```js
  [1, 200] <---- all the no.s that are divisible by 13
```

```cpp
  for (int i = 1; i <= 200; i++) {
    if (i % 13 == 0) { // remainder operator
                       // i % 13 == 0
                       // if remainder when (i is divided by 13) is 0 ?
      cout << i << ' '; // ' ' use for space
    }
  }
```

```js
  Question

     1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 ... 100

     1, 2, foo, 4, bar, foo, 7, 8, foo, bar, 11, foo, 13, 14, foobar, 16 ... 100

     foo
     bar


     if number is divisible by 3    => print (foo)
     if number is divisible by 5    => print (bar)
     if number is divisible by both => print (foobar)
     else                           => print (that no.)

```

```cpp
  for (int i = 1; i <= 100; i++) {
    if (i % 3 == 0 && i % 5 == 0) {
      cout << "foobar\n";

    } else if (i % 3 == 0) {
      cout << "foo\n";

    } else if (i % 5 == 0) {
      cout << "bar\n";

    } else {
      cout << i << '\n';
    }
  }
```

##### ERRORS, CAREFUL

```cpp

  for (int i = 1; i <= 100; i++) {
    if (i % 3 == 0) {
      cout << "foo\n";
    } else if (i % 5 == 0) {
      cout << "bar\n";
    } else if (i % 3 == 0 && i % 5 == 0) {
      cout << "foobar\n";
    } else {
      cout << i << '\n';
    }
  }
```

```js
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
```

```js
concept of namespace.

- C++ 11 and after
- C++ concept namespaces
- C++ core functions, input/output
- they are defined within a space.
- space's name is std
- std => standard

```

### Print Hello World 5 times.

```cpp
  int repeat = 1;

  while (repeat <= 50) {
    continue;

    cout << "Hello world\n";
    repeat += 1;
  }

```

```cpp
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

```

```cpp

  int count = 0;
  for (int i = 1; i <= 200; i++) {
    if (i % 3 == 0 && i % 5 == 0) {
      i++;
      continue;
    }

    if (i % 3 == 0) {
      count++;
    } else if (i % 5 == 0) {
      count++;
    }
  }
  cout << count << '\n';

```

```cpp

  int count = 0;

  for (int i = 1; i <= 200; i++) {
    if (i % 3 == 0) {
      count++;
    } else if (i % 5 == 0) {
      count++;
    }
  }

  count -= 2   X LCM of (3 & 5) == (15) ;

```

### User will provide you two decimal no.s you have to take input then add them and finally print them.

```cpp

  float number1, number2;
  cin >> number1 >>number2;

  auto ans = number1 + number2;

  cout << "Final answer is: " << ans << endl;

```

```js
  in output we are seeing only 4 digits.
  5 digits, after decimals.

  Print ASCII values from 'A' -> 'Z'

  ' ' <-- denotes character
  " " <-- denotes string


'A' => 65 (ASCII)
'B' => 66
 .
 .
'Z' => 90


'A', 'B', 'C', 'D' ................... 'Z'
kind of generate
we will have to use loop

```

```cpp
  for (char i = 'A'; i <= 'Z'; i++) {
    cout << "ASCII value of " << i << " is : " << (int)i << '\n';
  }
```

```cpp


  for (int i = 0; i <= 25; i++) {
    cout << "ASCII value of " << (char)(i + 'A') << " is : " << (i + 'A')
         << '\n';
  }
```

```cpp
  for (char i = '0'; i <= '9'; i++) {
    // 'i' is a character
    cout << "ASCII value of " << i << " is : " << (int)i << '\n';
  }
```

```cpp
  char a = ' ';
  cout << (int)a << endl;

```

### Given 3 no.s let say 3, 1, 10 Minimum of all three no.s Maximum of all three no.s using if-else

```cpp
int num1 = 1;
int num2 = 1;
int num3 = 2;

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

}
```

```cpp
cout << "minimum value is : " << min({num1, num2, num3}) << '\n';
cout << "maximum value is : " << max({num1, num2, num3}) << '\n';

```

### Total number of digits

```cpp
  int num;
  cin >> num;

  int count = 0;
  for (int i = num; i > 0; i /= 10) {
    count ++;
  }
  cout << count << '\n';

```

```cpp
int num;
cin >> num;

int count = 0;
while (num) {
  count ++;
  num /= 10;
}
cout << count << '\n';

```

### Maximum digit in whole number.

```cpp
  int num;
  cin >> num;

  int max_digit = INT_MIN;

  for (int i = num; i > 0; i /= 10) {
    int last_digit = i % 10;
    if (max_digit < last_digit) {
      max_digit = last_digit;
    }
  }
  cout << "Maximum digit: " << max_digit << '\n';

```

```cpp
  int num;
  cin >> num;

  int max_digit = INT_MIN;

  int i = num;    // initialization
  while (i > 0) { // condition

    int last_digit = i % 10;

    // if (max_digit < last_digit) {
    //   max_digit = last_digit;
    // }

    max_digit = max({max_digit, last_digit});
    min_digit = min({min_digit, last_digit});

    i /= 10; // updation
  }

  cout << "Maximum digit is: " << max_digit << '\n';

```

### Minimum Digit

```cpp
  int num;
  cin >> num;

  int min_digit = INT_MAX;

  int i = num;    // initialization
  while (i > 0) { // condition

    int last_digit = i % 10;

    min_digit = min({min_digit, last_digit});

    i /= 10; // updation
  }

  cout << "Minimum digit is: " << min_digit << '\n';

```

### Print nearest number with 1 and 0's.

```js
N => 10  ki power( digitsOf(N) - 1)

1234 -> 1000
12345 -> 10000
99 -> 10
999 -> 100

```

```cpp
  int n;
  cin >> n;
  int digits = 0;

  while (n) {
    n /= 10;
    digits++;
  }

  int ans = 1;
  for (int i = 0; i < digits; i++) {
    ans *= 10;
  }
  // SHORTCUT (also include header file for pow)

  ans = pow(10, digits - 1);

```

### Reverse a number.

```js
12345 -> 54321

```

```cpp
  int n;
  cin >> n;

  int rev = 0;

  while (n) {
    int last_digit = n%10;

    rev = rev * 10 + last_digit;
    n /= 10;
  }

  cout << "Reverse number: " << rev << '\n';

```

##### with for loop

```cpp
  int n;
  cin >> n;

  int rev = 0;


  for (int i = n; i > 0; i /= 10) {
    int last_digit = i % 10;
    rev = rev * 10 + last_digit;
  }

  cout << "Reverse number: " << rev << '\n';

```

### 3. Armstrong numbers

```js
123 => 1^3 + 2^3 + 3^3 => sum == original number
```

```cpp
  int n;
  cin >> n;

  int sum = 0;

  for (int i = n; i > 0; i /= 10) {
    int last_digit = n % 10;
    sum += (last_digit * last_digit * last_digit);
  }

```

### digit print its nearest smallest number having all one's

```js
123 => 111
999 => 111
12345 => 11111
101 => 11
```

##### incomplete method

```cpp
  int n;
  cin >> n;
  int digits = 0;

  while (n) {
    digits++;
    n /= 10;
  }

  int ans = 0;
  for (int i = 0; i < digits; i++) {
    ans += pow(10, i);
  }

```

##### complete method

```cpp
  int n;
  cin >> n;
  int digits = 0;
  int original_number = n;

  while (n) {
    digits++;
    n /= 10;
  }

  int res = 0;
  int generator = 0;
  for (int i = 0; i < digits; i++) {
    generator += pow(10, i);
    if (generator <= original_number) {
      res = generator;
    }
  }
  cout << "final ans: " << res << '\n';

```

##### METHOD 2

```cpp
  int n;
  cin >> n;

  int ans = 11111111;
  while (n < ans) {
    ans /= 10;
  }
  cout << ans << '\n';
```


##### METHOD 3

```cpp
  int n;
  cin >> n;

  int ans = 11111111;
  while (n < ans) {
    ans /= 10;
  }
  cout << ans << '\n';
```


##### METHOD 4
```cpp
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
```


### Check if N is prime no.s 
### Print prime no.s between 1 to 200
### Given LEFT, RIGHT print prime no.s between LEFT & RIGHT

