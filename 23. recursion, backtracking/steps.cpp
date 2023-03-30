#include <iostream>
using namespace std;

int total_steps(int n) {
  if (n == 0) {
    return 0;
  }
  if (n == 1) {
    return 1;
  }

  int prev1 = total_steps(n - 1);
  int prev2 = total_steps(n - 2);
  int current = prev1 + prev2;

  return current;
}

int main() {
  int ans = total_steps(7);
  cout << "ans is : " << ans << '\n';
}
