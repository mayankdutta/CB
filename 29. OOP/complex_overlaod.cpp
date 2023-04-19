
#include <iostream>

using namespace std;

// in struct all data members and functions are public by default
// in class all data members and functions are private by default

class Complex {
public:
  int real;
  int img;

  Complex operator+(Complex num) {
    Complex ans;
    ans.real = real + num.real;
    ans.img = img + num.img;
    return ans;
  }

  Complex operator-(Complex num) {

    Complex ans;
    ans.real = real - num.real;
    ans.img = img - num.img;
    return ans;
  }

  // Complex sub(Complex num) {

  //   Complex ans;
  //   ans.real = real - num.real;
  //   ans.img = img - num.img;
  //   return ans;
  // }

  void print() { cout << real << " + i" << img << '\n'; }
};

int main() {

  string name = "coding blocks";
  cout << name << '\n';

  Complex one;
  Complex two;

  one.real = 3;
  one.img = 4;

  two.real = 3;
  two.img = 4;

  // one = one.add(two);
  one = one + two;

  one.print();
  one = one - two;


  one.print();
}
