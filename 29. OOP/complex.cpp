#include <iostream>

using namespace std;

// in struct all data members and functions are public by default
// in class all data members and functions are private by default

class Complex {
public:
  int real;
  int img;

  Complex add(Complex num) {
    Complex ans;
    ans.real =real +  num.real;
    ans.img = img + num.img;
    return ans;
  }

  Complex sub(Complex num) {

    Complex ans;
    ans.real =real -  num.real;
    ans.img = img - num.img;
    return ans;
  }

  void print() { cout << real << " + i" << img << '\n'; }
};

int main() {

  Complex one;
  Complex two;

  one.real = 3;
  one.img = 4;

  two.real = 3;
  two.img = 4;

  one = one.add(two);
  one = one.sub(two);
}
