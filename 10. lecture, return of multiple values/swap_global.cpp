



#include <iostream>
using namespace std;

int a, b;

void swap() {

  int copy_a = a;
  a = b;
  b = copy_a;

}

int main() {
  a = 8;
  b = 9;

  cout << "value of a: " << a << " , value of b: " << b << '\n';

  swap();

  cout << "value of a: " << a << " , value of b: " << b << '\n';
}
