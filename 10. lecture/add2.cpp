

#include <iostream>
using namespace std;

int fun(int a, int b) { return a + b; }

int fun(int a, int b, int c) { return fun(a, fun(b, c)); }

double fun(double a, double b) { return a + b; }

double fun(double a, double b, double c) { return fun(a, fun(b, c)); }

int main() {
  int two_i_sum = fun(1, 2);
  int three_i_sum = fun(1, 2, 3);

  double two_d_sum = fun(1.2, 1.3);
  double three_d_sum = fun(1.2, 1.3, 1.4);

  // cout << "sum of two integer no.s : " << two_i_sum << '\n';
  cout << "sum of three integer no.s : " << three_i_sum << '\n';
  // cout << "sum of two decimal no.s : " << two_d_sum << '\n';
  // cout << "sum of three decimal no.s : " << three_d_sum << '\n';
}
