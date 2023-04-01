// Fibonacci Series using Recursion
#include <bits/stdc++.h>
using namespace std;

int memo[10000];
int fib(int n) {
  if (n <= 1)
    return n;

  if (memo[n] != -1) {
    return memo[n];
  }

  int ans = fib(n - 1) + fib(n - 2);
  memo[n] = ans;

  return ans;
}

int main() {
  for (int i = 0; i < 10000; i++) {
    memo[i] = -1;
  }

  int n = 9;
  cout << fib(n);
  return 0;
}

// This code is contributed
// by Akanksha Rai
