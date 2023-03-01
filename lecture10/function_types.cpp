

#include <iostream>
using namespace std;

void fun1() { cout << "Hello world, i am in function1 \n"; }

int fun2(int a, int b) {
  int ans = a + b;

  cout << "my final ans. in fun2 is : " << ans << '\n';

  return ans;
}

void fun3(int a, int b) {
  int ans = a + b;

  cout << "my final ans. in fun3 is : " << ans << '\n';

  return;
}

int main() {
  fun1();

  int ans = fun2(2, 3);

  fun3(3, 2);

  cout << "final ans is : " << ans;

  cout << "Hello world, i am in function\n";
}
