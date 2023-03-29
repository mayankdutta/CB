

#include <iostream>

using namespace std;

int main() {
  int a = 0300;
  cout << "value of a : " << a << '\n';

  int *p = &a;

  cout << *p << " is located at " << p << endl;
  //    *p === ? 0300 == 300
  //     p === ? address of (a)
}
