



#include <iostream>
using namespace std;

int main() {
  int a = 8;
  int b = 9;

  cout << "value of a: " << a << " , value of b: " << b << '\n';

  int copy_a = a;
  a = b;
  b = copy_a;

  cout << "value of a: " << a << " , value of b: " << b << '\n';
}
