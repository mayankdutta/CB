





#include <iostream>
using namespace std;

void swap(int &aa, int &bb) {

  int copy_a = aa;
  aa = bb;
  bb = copy_a;
}

int main() {
  int a = 8;
  int b = 9;

  cout << "value of a: " << a << " , value of b: " << b << '\n';

  swap(a, b);

  cout << "value of a: " << a << " , value of b: " << b << '\n';
}

