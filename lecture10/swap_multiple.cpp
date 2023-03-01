






#include <iostream>
using namespace std;

int swap(int a, int& b) {

  int copy_a = a;
  a = b;
  b = copy_a;

  return a;
}

int main() {
  int a = 8;
  int b = 9;

  cout << "value of a: " << a << " , value of b: " << b << '\n';

  a = swap(a, b);

  cout << "value of a: " << a << " , value of b: " << b << '\n';
}
